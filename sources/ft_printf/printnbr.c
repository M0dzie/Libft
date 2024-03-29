/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:57:37 by thmeyer           #+#    #+#             */
/*   Updated: 2023/04/11 14:26:03 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	printnbr_base(int nbr, char *base)
{
	int			len_base;
	int			result;
	long int	l_nbr;

	l_nbr = nbr;
	result = 0;
	len_base = ft_strlen(base);
	if (l_nbr < 0)
	{
		l_nbr *= -1;
		result += printchar('-');
	}
	if (l_nbr >= len_base)
		result += printnbr_base((l_nbr / len_base), base);
	if (l_nbr >= 0)
		result += printchar(base[l_nbr % len_base]);
	return (result);
}

int	print_unsigned(unsigned int nbr)
{
	long int	l_nbr;
	int			result;

	result = 0;
	l_nbr = nbr;
	if (l_nbr < 0)
		l_nbr = l_nbr + 4294967296;
	if (l_nbr >= 10)
		result += print_unsigned(l_nbr / 10);
	if (l_nbr >= 0)
		result += printchar((l_nbr % 10) + 48);
	return (result);
}

int	print_address(unsigned long addr, char *base, int first)
{
	unsigned long	len_base;
	int				len_addr;

	if (!addr)
		return (printstr("0x0"));
	len_addr = 0;
	if (first)
		len_addr = printstr("0x");
	len_base = ft_strlen(base);
	if (addr >= len_base)
		len_addr += print_address((addr / len_base), base, 0);
	len_addr += printchar(base[addr % len_base]);
	return (len_addr);
}

int	printhex_base(unsigned int nbr, char *base)
{
	unsigned int	len_base;
	int				result;

	result = 0;
	len_base = ft_strlen(base);
	if (nbr >= len_base)
		result += printhex_base((nbr / len_base), base);
	result += printchar(base[nbr % len_base]);
	return (result);
}
