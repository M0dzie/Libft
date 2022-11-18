/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:54:45 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/18 17:57:54 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
// t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void *), void	(*del)(void *))