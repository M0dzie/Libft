/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:03:24 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/18 12:26:27 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static void	ft_free(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static char	*ft_fill(char *s1, char c)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = 0;
	while (s1[len] && s1[len] != c)
		len++;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	ft_put_words(char **split, char *s, char c)
{
	int	i;
	int	is_start;
	int	count;

	i = 0;
	is_start = 1;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && is_start)
		{
			split[count] = ft_fill(s + i, c);
			if (!split[count])
			{
				ft_free(split);
				return ;
			}
			count++;
		}
		is_start = (s[i] == c);
		i++;
	}
}

/**
 * @brief Allocates with malloc and returns an array of strings obtained by 
 * splitting 's' using the character 'c' as a delimiter.  The array must end 
 * with a NULL pointer
 * @param s
 * @param c
 * @return The array of new strings resulting from the split or NULL if the 
 * allocation fails
 */
char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**split;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	split = malloc(sizeof(char *) * (word_count + 1));
	if (!split)
		return (NULL);
	ft_put_words(split, (char *)s, c);
	if (split)
		split[word_count] = 0;
	return (split);
}
