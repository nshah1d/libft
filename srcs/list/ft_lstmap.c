/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:54:54 by nshahid           #+#    #+#             */
/*   Updated: 2023/07/10 13:54:54 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstmap function creates a new linked list by applying a
** function to each element of an existing linked list.
**
** Parameters:
** lst - A pointer to the first element of the original list.
** f - A function pointer to the function that will be applied to
** each element's content.
** del - A function pointer to the function used to free the memory
** of each element's content.
**
** Return:
** A pointer to the first element of the newly created list. If the
** original list is empty or any of the function pointers 'f' or 'del'
** is NULL, the function returns NULL.
**
** Description:
** The ft_lstmap function takes a pointer to the first element of an
** existing linked list (lst), a function pointer 'f' that points to a
** function responsible for transforming the content of each list
** element, and a function pointer 'del' that points to a function used
** to free the memory of each element's content in case of errors.
**
** The function first checks if the 'lst' pointer or either of the
** function pointers 'f' and 'del' is NULL. If any of them is NULL, it
** indicates an invalid operation or an attempt to map an empty list,
** and the function returns NULL without doing anything.
**
** The function then proceeds to create a new list by applying the 'f'
** function to the content of each element in the original list. It does
** so using a while loop that iterates through the original list. During
** each iteration, the following steps are performed:
**
** 1. The 'f' function is applied to the content of the current element
** (lst->content) to transform it, and the result is used to create
** a new element with lst_new function.
** 2. If the memory allocation for the new element fails, the function
** frees the memory of the previously created elements in the new
** list using the lst_clear function and returns NULL to indicate an
** error.
** 3. If the memory allocation is successful, the new element is added
** to the new list by updating the 'next' pointer of the last element
** (new_set) to point to the newly created element.
** 4. The 'new_set' pointer is then moved to point to the newly added
** element to keep track of the last element in the new list.
** 5. The 'lst' pointer is moved to the next element in the original
** list for the next iteration.
**
** After processing all elements in the original list, the function
** returns a pointer to the first element of the new list, effectively
** pointing to the new list containing transformed elements. If any
** error occurs during the process, the function returns NULL after
** freeing the memory of the newly created list and its elements' content
** using the lst_clear function.
**
** It's important to note that the lst_new function is used to create a
** new list element with the transformed content and that the lst_clear
** function is used to deallocate memory in case of errors.
**
** Example:
** void *transform_content(void *content)
** {
**    // Check if the content pointer is valid
**    if (content == NULL) {
**        return NULL;
**    }
**    char *str = (char *)content;
**    char *result = strdup(str); // Duplicate the original content
**    // Convert each character in the duplicated string to uppercase
**    for (size_t i = 0; result[i]; i++) {
**        result[i] = toupper(result[i]);
**    }
**    return result;
** }
**
** void free_content(void *content)
** {
**   free(content);
** }
**
** t_list *lst = ft_lstnew("hello");
** ft_lstadd_back(&lst, ft_lstnew("world"));
** t_list *new_lst = ft_lstmap(lst, transform_content, free_content);
** (The function will create a new list with transformed content, e.g.,
** "HELLO" and "WORLD")
*/

static t_list	*lst_new(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

static void	lst_clear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del || !(*lst))
		return ;
	lst_clear(&(*lst)->next, del);
	(del)((*lst)->content);
	free(*lst);
	*lst = NULL;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_set;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	new = lst_new(f(lst->content));
	if (!new)
		return (NULL);
	new_set = new;
	lst = lst->next;
	while (lst)
	{
		temp = lst_new(f(lst->content));
		if (!temp)
		{
			lst_clear(&new, del);
			return (NULL);
		}
		new_set->next = temp;
		new_set = temp;
		lst = lst->next;
	}
	return (new);
}
