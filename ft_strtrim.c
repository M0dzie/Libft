/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:11:14 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/15 15:16:00 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcount(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

int	ft_strrevcount(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

/**
 * @brief allocates with malloc and returns a copy of 's1' with the characters 
 * specified in 'set' removed from the beginning and the end of the string
 * @param s1 
 * @param set 
 * @return the trimmed string or NULL if the allocation fails
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		i_bgn;
	int		i_end;
	char	*trim;

	i = 0;
	if (!s1)
		return (NULL);
	i_bgn = ft_strcount(s1, set);
	if ((size_t)i_bgn == ft_strlen(s1))
		return (ft_strdup(""));
	i_end = ft_strrevcount(s1, set);
	trim = malloc(sizeof(char) * (i_end - i_bgn) + 2);
	if (!trim)
		return (NULL);
	while (i < i_end - i_bgn + 1)
	{
		trim[i] = s1[i_bgn + i];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}
