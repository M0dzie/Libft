/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:30:22 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/14 15:29:43 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief converts a lower-case letter to the corresponding upper-case letter
 * @param c 
 * @return the corresponding upper-case letter if there is one
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return ((unsigned char *)c - 32);
	else
		return ((unsigned char *)c);
}
