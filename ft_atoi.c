/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin42@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:20:36 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/23 11:52:55 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	if (i > 18)
		return (check_overflow(sign));
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * sign);
}
