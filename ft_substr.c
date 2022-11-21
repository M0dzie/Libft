/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:27:55 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/21 16:07:34 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief allocates with malloc and returns a substring from the string 's'. The 
 * substring begins at index 'start' and is of maximum size 'len'
 * @param s 
 * @param start 
 * @param len 
 * @return the substring or NULL if the allocation fails
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (start < ft_strlen(s) && s[start + i] && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
