/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:27:55 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/14 15:19:07 by thmeyer          ###   ########.fr       */
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
	char	*str_dup;

	i = 0;
	str_dup = (char *)malloc(sizeof(char) * len + 1);
	if (!str_dup)
		return (NULL);
	while (str_dup[i] && i < len && start < ft_strlen(s))
	{
		str_dup[i] = ((char *)s)[start + i];
		i++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}
