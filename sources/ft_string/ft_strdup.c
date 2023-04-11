/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:57:37 by thmeyer           #+#    #+#             */
/*   Updated: 2023/04/11 14:26:45 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
/**
 * @brief allocates with malloc sufficient memory for a copy of the string 
 * s1, does the copy, and returns a pointer to it
 * @param s1 
 * @return a pointer to the copy
 */
char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len_dup;
	char	*str_dup;

	i = 0;
	len_dup = ft_strlen(s1);
	str_dup = malloc(sizeof(char) * (len_dup + 1));
	if (!str_dup)
		return (NULL);
	while (s1[i])
	{
		str_dup[i] = ((char *)s1)[i];
		i++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}
