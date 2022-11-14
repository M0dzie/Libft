/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:03:46 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/14 16:04:31 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/** 
 * @brief function copies len bytes from string src to string dst
 * @param dst 
 * @param src 
 * @param len 
 * @return the original value of dst 
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*temp;

	i = 0;
	temp = src;
	while (i < len)
	{
		((char *)dst)[i] = temp[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char src[] = "lorem ipsum dolor sit amet";
// 	char *dest;
// 	dest = src + 1;
// 	if (dest != ft_memmove(dest, src, 8))
// 		write(1, "dest's adress was not returned\n", 31);
// 	write(1, dest, 22);
// 	return (0);
// }

// resultat = lorem ipum dolor sit a