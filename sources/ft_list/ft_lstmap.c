/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:57:37 by thmeyer           #+#    #+#             */
/*   Updated: 2023/04/11 14:23:48 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
/**
 * @brief iterates the list 'lst' and applies the function 'f' on the content 
 * of each node. Creates a new list resulting of the successive applications 
 * of the function 'f'. The 'del' function is used to delete the content of a 
 * node if needed
 * @param lst the address of a pointer to a node
 * @param f the address of the function used to iterate on the list
 * @param del the address of the function used to delete the content of a node 
 * if needed
 * @return the new list or NULL if the allocation fails
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*element;

	if (!lst || !del || !f)
		return (0);
	new_lst = 0;
	while (lst)
	{
		element = ft_lstnew(f(lst->content));
		if (!element)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, element);
		lst = lst->next;
	}
	return (new_lst);
}
