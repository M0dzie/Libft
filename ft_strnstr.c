/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:03:37 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/14 15:13:34 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief locates the first occurrence of the null-terminated string needle 
 * in the string haystack, where not more than len characters are searched
 * @param haystack 
 * @param needle 
 * @param len 
 * @return If needle is an empty string, haystack is returned; if needle 
 * occurs nowhere in haystack, NULL is returned; otherwise a pointer to the 
 * first character of the first occurrence of needle is returned
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i] == needle[j] && needle[j] && i < len)
		{
			if (needle[j + 1] == '\0')
				return (&((char *)haystack)[i - j]);
			i++;
			j++;
		}
		i = i - j + 1;
	}
	return (NULL);
}
