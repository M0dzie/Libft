/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:57:37 by thmeyer           #+#    #+#             */
/*   Updated: 2023/04/11 14:27:28 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
/**
 * @brief appends string src to the end of dst It will then NUL-terminate, 
 * unless dstsize is 0 or the original dst string was longer than dstsize
 * @param dst 
 * @param src 
 * @param dstsize 
 * @return the total length of the string they tried to create
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = 0;
	len_src = 0;
	if ((!dst || !src) && dstsize == 0)
		return (0);
	while (dst[len_dst] && len_dst < dstsize)
		len_dst++;
	while (src[len_src] && (len_dst + len_src + 1) < dstsize)
	{
		dst[len_dst + len_src] = src[len_src];
		len_src++;
	}
	if (len_dst < dstsize)
		dst[len_dst + len_src] = '\0';
	return (len_dst + ft_strlen(src));
}
