/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 15:29:18 by sakitaha          #+#    #+#             */
/*   Updated: 2023/12/27 02:25:03 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * The ft_isspace() function tests for the white-space characters.
 * For any locale, this includes the following standard characters:
 * ``\t''   ``\n''   ``\v''   ``\f''   ``\r''   `` ''
 */

int	ft_isspace(int c)
{
	return (('\t' <= c && c <= '\r') || c == ' ');
}
