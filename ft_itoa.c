/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:28:36 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/16 12:33:07 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/**
 * @brief converts the portion of int to str
 * @param n 
 * @return
 */
static int	ft_digit_count(int n)
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
	while (n != 0)
	{
		n /= 10;
		result++;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;
	int		nbr;

	i = 0;
	len = ft_digit_count(n);
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	if (n < 0)
		str[i++] = '-';
	if (n < 10)
		str[i] = n + 48;
	else
	{
		while (i < len)
		{
			nbr = n / 10;
			str[i++] = nbr + 48;
			n = n % 10;
		}
	}
	return (str);
}

// int	main(void)
// {
// 	printf("\nft_itoa :\n");
// 	int	n = 420;
// 	printf("%s\n", ft_itoa(n));
// 	return (0);
// }

// ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));