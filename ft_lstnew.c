/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:34:57 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/18 17:35:34 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief allocates with malloc, 'content' is initialized with the value of 
 * the parameter 'content' and 'next' is initialized to NULL
 * @param content of the new element
 * @return the new node
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*dst;

	dst = malloc(sizeof(t_list));
	if (dst)
	{
		dst->content = content;
		dst->next = 0;
	}
	return (dst);
}