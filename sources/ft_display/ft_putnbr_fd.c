/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:57:37 by thmeyer           #+#    #+#             */
/*   Updated: 2023/04/11 14:21:12 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
/**
 * @brief outputs the integer ’n’ to the given file descriptor
 * @param n 
 * @param fd 
 */
void	ft_putnbr_fd(int n, int fd)
{
	long int	lng_n;

	lng_n = (long int)n;
	if (lng_n < 0)
	{
		lng_n *= -1;
		ft_putchar_fd('-', fd);
	}	
	if (lng_n >= 0 && lng_n < 10)
		ft_putchar_fd((lng_n + '0'), fd);
	else
	{
		ft_putnbr_fd((lng_n / 10), fd);
		ft_putnbr_fd((lng_n % 10), fd);
	}
}
