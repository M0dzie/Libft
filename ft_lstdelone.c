/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:46:12 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/18 17:49:04 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief takes as a parameter a node and frees the memory of the node’s content 
 * using the function ’del’ given as a parameter and free the node. The memory 
 * of 'next' must not be freed
 * @param lst the node to free
 * @param del the address of the function used to delete the content
 */
// void	ft_lstdelone(t_list	*lst, void	(*del)(void*))