/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:27:15 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/15 16:47:49 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief is identical to strchr(), except it locates the last occurrence of c
 * @param s 
 * @param c 
 * @return a pointer to the located character, or NULL if the character does 
 * not appear in the string
 */
char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return (&((char *)s)[len]);
		len--;
	}
	if ((char)c == '\0')
		return (&((char *)s)[len]);
	return (NULL);
}
