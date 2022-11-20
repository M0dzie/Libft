/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin42@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:49:15 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/20 10:49:24 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief deletes and frees the given node and every successor of that node, 
 * using the function 'del' and free. Finally, the pointer to the list must 
 * be set to NULL
 * @param lst the address of a pointer to a node
 * @param del the address of the function used to delete the content of the node
 */
void	ft_lstclear(t_list	**lst, void	(*del)(void*))
{
	if (!(**lst) || !del)
		return ;
	while ((*lst))
		ft_lstdelone((*lst), del);
}