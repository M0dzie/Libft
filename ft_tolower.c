/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:48:31 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/14 15:26:58 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief converts an upper-case letter to the corresponding lower-case letter
 * @param c 
 * @return the corresponding lower-case letter if there is one
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return ((unsigned char *)c + 32);
	else
		return ((unsigned char *)c);
}
