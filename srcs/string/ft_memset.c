/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:37:53 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/12/29 23:14:23 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)b;
	ch = (unsigned char)c;
	while (len--)
		*(str++) = ch;
	return (b);
}
