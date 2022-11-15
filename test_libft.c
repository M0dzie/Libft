/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:55:56 by thmeyer           #+#    #+#             */
/*   Updated: 2022/11/15 15:45:18 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main(void)
{
	printf("\nft_isalpha :\n");
	printf("%d ", ft_isalpha('j'));
	printf("%d\n", ft_isalpha(' '));
	printf("%d ", isalpha('j'));
	printf("%d\n", isalpha(' '));

	printf("\nft_isalnum :\n");
	printf("%d ", ft_isalnum('j'));
	printf("%d ", ft_isalnum('5'));
	printf("%d\n", ft_isalnum(' '));
	printf("%d ", isalnum('j'));
	printf("%d ", isalnum('5'));
	printf("%d\n", isalnum(' '));

	printf("\nft_isascii :\n");
	printf("%d ", ft_isascii(47));
	printf("%d\n", ft_isascii(145));
	printf("%d ", isascii(47));
	printf("%d\n", isascii(145));

	printf("\nft_isdigit :\n");
	printf("%d ", ft_isdigit('7'));
	printf("%d\n", ft_isdigit(' '));
	printf("%d ", isdigit('7'));
	printf("%d\n", isdigit(' '));

	printf("\nft_isprint :\n");
	printf("%d ", ft_isprint(89));
	printf("%d\n", ft_isprint(127));
	printf("%d ", isprint(89));
	printf("%d\n", isprint(127));

	printf("\nft_strlen :\n");
	printf("%zu\n", ft_strlen("Salut"));
	printf("%zu\n", strlen("Salut"));

	printf("\nft_memset :\n");
	printf("%s\n", ft_memset("Salut a tous", '0', 4));
	printf("%s\n", ft_memset("", '0', 4));
	printf("%s\n", memset("Salut a tous", '0', 4));
	printf("%s\n", memset("", '0', 4));

	printf("\nft_bzero : \n");
	char	str3[10] = "Salut";
	ft_bzero(str3, 2);
	printf("%d ", str3[1]);
	ft_bzero(str3, 2);
	printf("%c ", str3[2]);
	ft_bzero(str3, 0);
	printf("%s\n", str3);
	bzero(str3, 2);
	printf("%d ", str3[1]);
	bzero(str3, 2);
	printf("%c\n", str3[2]);

	printf("\nft_memcpy : \n");
	printf("%s\n", ft_memcpy("Salut", "Bonjour", 4));
	printf("%s\n", memcpy("Salut", "Bonjour", 4));
	printf("%s\n", ft_memcpy("Salut", "Bonjour", 7));

	printf("\nft_strlcpy :\n");
	printf("%lu ", ft_strlcpy("Salut", "Bonjour a tous", 8));
	printf("%lu ", ft_strlcpy("Salut", "Bonjour a tous", 0));
	printf("%lu ", strlcpy("Salut", "Bonjour a tous", 8));
	printf("%lu ", strlcpy("Salut", "Bonjour a tous", 0));
	
	printf("\nft_memmove :\n");
	printf("%s\n", ft_memmove("Salut", "Bonjour", 4));
	printf("%s\n", memmove("Salut", "Bonjour", 4));

	printf("\nft_toupper :\n");
	printf("%c ", ft_toupper('d'));
	printf("%c\n", ft_toupper('D'));
	printf("%c ", toupper('d'));
	printf("%c\n", toupper('D'));

	printf("\nft_tolower :\n");
	printf("%c ", ft_tolower('d'));
	printf("%c\n", ft_tolower('D'));
	printf("%c ", tolower('d'));
	printf("%c\n", tolower('D'));

	printf("\nft_strchr :\n");
	printf("%s\n", ft_strchr("Salut a tosu", 't'));
	printf("%s\n", ft_strchr("Salut a tosu", '\0'));
	printf("%s\n", strchr("Salut a tosu", 't'));
	printf("%s\n", strchr("Salut a tosu", '\0'));

	printf("\nft_strrchr :\n");
	printf("%s\n", ft_strrchr("Salut a tosu", 't'));
	printf("%s\n", ft_strrchr("Salut a tosu", '\0'));
	printf("%s\n", strrchr("Salut a tosu", 't'));
	printf("%s\n", strrchr("Salut a tosu", '\0'));

	printf("ft_strncmp :\n");
    printf("%d \n",ft_strncmp("abc","abdwgwgwe",7));
    printf("%d \n",strncmp("abc","abdwgwgwe",7));

	printf("\nft_memchr :\n");
	printf("%s ", ft_memchr("Sal\0t a tous", 't', 3));
	printf("%s ", ft_memchr("Sal\0t a tous", 't', 5));
	printf("%s\n", ft_memchr("Sal\0t a tous", '\0', 7));
	printf("%s ", memchr("Sal\0t a tous", 't', 3));
	printf("%s ", memchr("Sal\0t a tous", 't', 5));
	printf("%s\n", memchr("Sal\0t a tous", '\0', 7));

	printf("\nft_memcmp :\n");
	size_t	n = 4;
	size_t	n2 = 8;
	printf("%d ", ft_memcmp("Sal\0t a tous", "Sal\0t A tous", n));
	printf("%d\n", ft_memcmp("Sal\0t a tous", "Sal\0t A tous", n2));
	printf("%d ", memcmp("Sal\0t a tous", "Sal\0t A tous", n));
	printf("%d\n", memcmp("Sal\0t a tous", "Sal\0t A tous", n2));

	printf("\nft_memmove :\n");
	char src[] = "lorem ipsum dolor sit amet";
	char *dest;
	dest = src + 1;
	if (dest != ft_memmove(dest, src, 8))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dest, 22);

	printf("\nft_strlcat :\n");
	char	str1[15] = "abcdefg";
	char	str2[7] = "123456";
	printf("%lu ", ft_strlcat(str1, str2, 6));
	printf("%lu\n", ft_strlcat(str1, str2, 0));
	printf("%lu ", strlcat(str1, str2, 6));
	printf("%lu\n", ft_strlcat(str1, str2, 0));

	printf("\nft_strnstr :\n");
	const char	haytstack[] = "Foo BaBaz";
	const char	needle[] = "Baz";
	int			len = 10;
	printf("%s\n", ft_strnstr(haytstack, needle, len));
    printf("%s\n", strnstr(haytstack, needle, len));

	printf("\nft_atoi :\n");
	const char	str[] = " 	  -15463Foo BaBaz";
	printf("%d\n", ft_atoi(str));
    printf("%d\n", atoi(str));

	printf("\nft_strdup :\n");
	const char	str[] = "Foo BaBaz";
	printf("%s\n", ft_strdup(str));
    printf("%s\n", strdup(str));

	printf("\nft_strjoin :\n");
	const char	str1[] = "abcdefg";
	const char	str2[] = "123456";
	printf("%s\n", ft_strjoin(str1, str2));
	
	printf("\nft_strtrim :\n");
	char const	str1[] = "      ";
	char const	str2[] = " ";
	printf("%s\n", ft_strtrim(str1, str2));

	printf("\nft_split :\n");
	char const	*str = "split this for me !";
	char		c = ' ';
	printf("%s\n", ft_split(str, c));
	return (0);
}
