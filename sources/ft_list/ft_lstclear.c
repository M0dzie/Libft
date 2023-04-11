/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:57:37 by thmeyer           #+#    #+#             */
/*   Updated: 2023/04/11 14:23:07 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
/**
 * @brief deletes and frees the given node and every successor of that node, 
 * using the function 'del' and free. Finally, the pointer to the list must 
 * be set to NULL
 * @param lst the address of a pointer to a node
 * @param del the address of the function used to delete the content of the node
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst_next;

	if (!lst || !del)
		return ;
	while ((*lst))
	{
		lst_next = (*lst)->next;
		ft_lstdelone((*lst), del);
		(*lst) = lst_next;
	}
	(*lst) = 0;
}
