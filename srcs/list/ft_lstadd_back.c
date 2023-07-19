/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:43:50 by nshahid           #+#    #+#             */
/*   Updated: 2023/07/10 13:43:50 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstadd_back function adds a new element at the end of a linked list.
**
** Parameters:
** lst - A pointer to the pointer to the first element of the list.
** new - A pointer to the element to be added.
**
** Return:
** None.
**
** Description:
** The ft_lstadd_back function takes a pointer to the pointer to the first
** element of a linked list (lst) and a pointer to the element to be added
** (new). It starts by checking if either 'lst' or 'new' is NULL. If either of
** them is NULL, it indicates an invalid operation, and the function returns
** without making any changes. It checks if the pointer to the first element of
** the list (*lst) is NULL. If it is NULL, it means the list is empty. In this
** case, it assigns the 'new' element to the pointer to the first element
** (*lst) and returns. This step is necessary to handle the case where the list
** is initially empty. If the list is not empty, it initializes a temporary
** pointer 'temp' and assigns it the value of the pointer to the first element
** (*lst). It then traverses the list using a loop until it reaches the last
** element, which is indicated by a NULL 'next' pointer. Inside the loop, it
** updates the 'temp' pointer to point to the next element in each iteration.
** Once the loop reaches the last element, it assigns the 'new' element to the
** 'next' pointer of the last element, effectively adding it at the end of the
** list. Finally, the function returns, and the list now contains the new
** element at the end.
**
** Example:
** t_list *lst = NULL;
** t_list *new = ft_lstnew("Hello");
** ft_lstadd_back(&lst, new);
** (The element "Hello" is added at the end of the list)
**
** t_list *lst = ft_lstnew("Hello");
** t_list *new = ft_lstnew("World");
** ft_lstadd_back(&lst, new);
** (The element "World" is added at the end of the existing list)
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}
