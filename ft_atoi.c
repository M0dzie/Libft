/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:20:36 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/22 20:28:34 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflow(int sign)
{
	if (sign < 0)
		return (0);
	return (-1);
}

/**
 * @brief converts the initial portion of the string pointed to by str to int
 * @param str 
 * @return
 */
int	ft_atoi(const char *str)
{
	long long int	i;
	int				sign;
	int				result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	if ((result * 10) / 10 != 1)
		return (check_overflow(sign));
	return (result * sign);
}

#include <stdio.h>

int	main(void)
{
	char *str;
	str = "54646846543516468156468";
	printf("%d\n%d", atoi(str), ft_atoi(str));
	return (0);
}