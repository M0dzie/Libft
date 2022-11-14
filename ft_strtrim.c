/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:11:14 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/14 15:25:14 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcount(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == set[i])
		i++;
	return (i);
}

int	ft_strrevcount(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1);
	while (s1[i] && s1[i] == set[i])
		i--;
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
	i_bgn = ft_strcount(s1, set);
	i_end = ft_strrevcount(s1, set);
	trim = (char *)malloc(sizeof(char) * (ft_strlen(s1) - (i_bgn - i_end)) + 1);
	if (!trim)
		return (NULL);
	while (trim[i_bgn] && i_bgn < i_end)
	{
		trim[i_bgn] = s1[i_bgn];
		i_bgn++;
	}
	trim[i_bgn] = '\0';
	return (trim);
}

#include <stdio.h>

int	main(void)
{
	printf("\nft_strtrim :\n");
	char const	str1[] = "lorem ipsum amet";
	char const	str2[] = "lote";
	printf("%s\n", ft_strtrim(str1, str2));
}
// calculer un index de debut et de fin pour savoir combien malloc

// Approach: The idea is to count the leading spaces in the given string and 
// then from that count index copy the characters from that index to the front 
// of the string. Below are the steps:

// Initialize count = 0 to count the number of leading spaces.
// Iterate through given string and find the index(say idx) at which the 
// leading space character ends.
// Iterate through all the characters from that index idx and copy each 
// character from this index to the end to the front index.
// Finally, put ‘\0’ at the last index of the new string to terminate the 
// string.

//la fonction s'arrete au premier char pas trouve !