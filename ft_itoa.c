/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:28:36 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/18 16:34:40 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief converts the portion of int to str
 * @param n 
 * @return
 */
static int	ft_digit_count(long int n)
{
	int	result;

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

char	*ft_itoa(int n)
{
	char			*str;
	int				i;
	long int		lng_n;

	lng_n = n;
	i = ft_digit_count(lng_n);
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
