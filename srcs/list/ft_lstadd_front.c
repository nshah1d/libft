/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:37:06 by nshahid           #+#    #+#             */
/*   Updated: 2023/07/10 13:37:06 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstadd_front function adds a new element at the beginning of a linked
** list.
**
** Parameters:
** lst - A pointer to the pointer to the first element of the list.
** new - A pointer to the element to be added.
**
** Return:
** None.
**
** Description:
** The ft_lstadd_front function takes a pointer to the pointer to the first
** element of a linked list (lst) and a pointer to the element to be added
** (new). It starts by checking if either 'lst' or 'new' is NULL. If either of
** them is NULL, it indicates an invalid operation, and the function returns
** without making any changes. It assigns the 'next' pointer of the 'new'
** element to the pointer to the first element (*lst), effectively making the
** 'new' element point to the current first element of the list. Then, it
** updates the pointer to the first element (*lst) to point to the 'new'
** element, making it the new first element of the list. This step ensures that
** the 'new' element is added at the beginning of the list. Finally, the
** function returns, and the list now contains the new element at the front.
**
** Example:
** t_list *lst = NULL;
** t_list *new = ft_lstnew("Hello");
** ft_lstadd_front(&lst, new);
** (The element "Hello" is added at the beginning of the list)
**
** t_list *lst = ft_lstnew("Hello");
** t_list *new = ft_lstnew("World");
** ft_lstadd_front(&lst, new);
** (The element "World" is added at the beginning of the existing list)
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
