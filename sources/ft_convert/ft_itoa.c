/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:57:37 by thmeyer           #+#    #+#             */
/*   Updated: 2023/04/11 14:16:33 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static size_t	digit_count(long int n)
{
	size_t	result;

	result = 0;
	if (n == 0)
		result++;
	if (n < 0)
	{
		result++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		result++;
	}
	return (result);
}

/**
 * @brief converts the portion of int to str
 * @param n 
 * @return
 */
char	*ft_itoa(int n)
{
	char			*str;
	size_t			i;
	long int		lng_n;

	lng_n = n;
	i = digit_count(lng_n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (lng_n == 0)
		str[0] = '0';
	if (lng_n < 0)
	{
		str[0] = '-';
		lng_n *= -1;
	}
	while (lng_n > 0)
	{
		str[i--] = (lng_n % 10) + '0';
		lng_n /= 10;
	}
	return (str);
}
