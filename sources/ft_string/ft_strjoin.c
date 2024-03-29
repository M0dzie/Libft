/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:57:37 by thmeyer           #+#    #+#             */
/*   Updated: 2023/04/11 14:27:14 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
/**
 * @brief allocates with malloc and returns a new string, which is the result 
 * of the concatenation of ’s1’ and ’s2’
 * @param s1 
 * @param s2 
 * @return the new string or NULL if the allocation fails
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*join;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	join = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!join)
		return (NULL);
	while (s1[i])
	{
		join[i] = ((char *)s1)[i];
		i++;
	}
	while (s2[j])
	{
		join[i] = ((char *)s2)[j];
		i++;
		j++;
	}
	join[i] = '\0';
	return (join);
}
