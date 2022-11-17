/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:03:24 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/17 09:53:52 by thmeyer          ###   ########.fr       */
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
static int	ft_count_words(char const *s, char c)
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
	printf("%d\n", count);
	return (count);
}

static char	*ft_fill(char const *s, int start, int finish)
{
	int		i;
	char	*to_fill;

	i = 0;
	to_fill = malloc(sizeof(char) * (finish - start) + 1);
	while (start < finish)
	{
		to_fill[i] = s[start];
		i++;
		start++;
	}
	to_fill[i] = '\0';
	return (to_fill);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		finish;
	char	**split;

	i = 0;
	start = 0;
	finish = 0;
	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * ft_count_words(s, c) + 1);
	if (!split)
		return (NULL);
	while (s[finish])
	{
		if (s[finish] == c && s[finish + 1] != c)
		{
			split[i] = ft_fill(s, start, finish);
			i++;
			start = finish + 1;
		}
		finish++;
	}
	split[i] = 0;
	return (split);
}

#include <stdio.h>
int main()
{
    char *str = " split   this for    me";
    char charset = ' ';
    char **all_words = ft_split(str, charset);
    int index = 0;
    while (all_words[index])
    {
        printf("%s\n",all_words[index]);
        index++;
    }
}
