/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:36:08 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/18 18:11:36 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief adds the node 'new' at the beginning of the list
 * @param lst the address of a pointer to the first link of a list
 * @param new the address of a pointer to the node to be added to the list
 */
void	ft_lstadd_front(t_list	**lst, t_list	*new)
{
	if (!new)
		return ;
	new->next = (*lst);
	(*lst) = new;
}