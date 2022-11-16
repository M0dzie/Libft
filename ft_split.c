/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:03:24 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/16 16:41:15 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/**
 * @brief Allocates with malloc and returns an array of strings obtained by 
 * splitting 's' using the character 'c' as a delimiter.  The array must end 
 * with a NULL pointer
 * @param s
 * @param c
 * @return The array of new strings resulting from the split or NULL if the 
 * allocation fails
 */
static int	ft_count_lines(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && count == 0)
			count++;
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	printf("%d", count);
	return (count);
}

static int	ft_lineslen(char const *s, char c, int index)
{
	while (s[index] != c)
		index++;
	return (index);
}

static char	*ft_fill(char const *s, char *split, char c, int index)
{
	int	i;

	i = 0;
	while (s[index] != c)
	{
		split[i] = s[index];
		i++;
		index++;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		index;
	char	**s_split;

	i = 0;
	j = 0;
	index = 0;
	if (!s)
		return (NULL);
	s_split = malloc(sizeof(char *) * ft_count_lines(s, c) + 1);
	if (!s_split)
		return (NULL);
	while (s[index])
	{
		if (s[index] == c && s[index + 1] != c)
		{
			s_split[i] = malloc(sizeof(char) * ft_lineslen(s, c, index) + 1);
			s_split[i] = ft_fill(s, s_split[i], c, index);
			i++;
		}
		index++;
	}
	s_split[i] = 0;
	return (s_split);
}
