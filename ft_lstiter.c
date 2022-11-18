/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:52:18 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/18 17:54:34 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief iterates the list 'lst' and applies the function 'f' on the content 
 * of each node
 * @param lst the address of a pointer to a node
 * @param f the address of the function used to iterate on the list
 */
// void	ft_lstiter(t_list	*lst, void	(*f)(void *))