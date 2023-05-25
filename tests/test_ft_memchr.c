/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:04:55 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/25 04:32:06 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		text[] = "ABCDECFG";

static void	test_ft_memchr(const void *s, int c, size_t n)
{
	char	*result1;
	char	*result2;

	result1 = (char *)ft_memchr(s, c, n);
	result2 = (char *)memchr(s, c, n);
	printf("ft_memchr  %c in %s : %s\n", c, (char *)s, result1);
	printf("memchr     %c in %s : %s\n", c, (char *)s, result2);
}

int	main(void)
{
	test_ft_memchr(text, 'C', 5);
	test_ft_memchr(text, 'F', 7);
	test_ft_memchr(text, 'G', 8);
	test_ft_memchr(text, 'Z', 7);
	return (0);
}