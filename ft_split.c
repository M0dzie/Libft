/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:03:24 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/16 12:33:31 by thmeyer          ###   ########.fr       */
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
		if ((s)[i] == c && s[i + 1] != c)
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

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**s_split;

	i = 0;
	j = 0;
	k = 0;
	if (!s)
		return (NULL);
	s_split = malloc(ft_count_lines(s, c) * sizeof(char *));
	if (!s_split)
		return (NULL);
	while (s[k])
	{
		if (s[k] == c && s[k + 1] != c)
		{
			s_split[i] = malloc(sizeof(char) * ft_lineslen(s, c, j) + 1);
			s_split[i] = ft_strtrim(s, &c);
			i++;
		}
		k++;
	}
	return (s_split);
}

// int	main(void)
// {
//     char *str = "J'aime les nouilles , mais je prefere le poney \n Yes Daddy     ";
//     char *charset = " ,,\n";
//     char **all_words = ft_split(str, charset);
//     int index = 0;
//     while (all_words[index])
//     {
//         printf("%s\n",all_words[index]);
//         index++;
//     }
// 	return (0);
// }

// c doit degager : +1
// "split", "this", "for", "me", "!"
// compter le nombre de mots pour savoir combien de tableaux faire