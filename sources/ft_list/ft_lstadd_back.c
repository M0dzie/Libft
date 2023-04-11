/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:57:37 by thmeyer           #+#    #+#             */
/*   Updated: 2023/04/11 14:22:46 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
/**
 * @brief adds the node ’new’ at the end of the list
 * @param lst the address of a pointer to the first link of a list
 * @param new the address of a pointer to the node to be added to the list
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_lst;

	if (!(*lst))
		(*lst) = new;
	else
	{
		last_lst = ft_lstlast((*lst));
		last_lst->next = new;
	}
}
