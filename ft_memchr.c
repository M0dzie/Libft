/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:21:37 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/15 16:21:15 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief locates the first occurrence of c (converted to an unsigned char) 
 * in string s, within n bytes
 * @param s 
 * @param c 
 * @param n 
 * @return a pointer to the byte located, or NULL if no such byte 
 * exists within n bytes
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while ((((unsigned char *)s)[i]) && i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (&((unsigned char *)s)[i]);
		i++;
	}
	return (NULL);
}
