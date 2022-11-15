/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:52:58 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/15 13:06:22 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = 0;
	if (dstsize != 0 || len_dst < dstsize)
	{
		while (src[i] && dstsize > len_dst + i + 1)
		{
			dst[len_dst + i] = src[i];
			i++;
		}
		dst[len_dst + i] = '\0';
		return (len_src + len_dst);
	}
	else
		return (len_src + dstsize);
}

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	len_dst;
// 	size_t	len_src;

// 	i = 0;
// 	len_dst = ft_strlen(dst);
// 	len_src = ft_strlen(src);
// 	if (dstsize < len_dst)
// 		return (dstsize + len_src);
// 	while (dst[i] && dstsize > 0)
// 	{
// 		i++;
// 		dstsize--;
// 	}
// 	j = 0;
// 	while (src[j] && dstsize > 1)
// 	{
// 		i++;
// 		dstsize--;
// 		j++;
// 	}
// 	if (dstsize > 0)
// 		dst[i + j] = '\0';
// 	return (len_dst + len_src);
// }