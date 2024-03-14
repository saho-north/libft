/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 21:48:55 by sakitaha          #+#    #+#             */
/*   Updated: 2024/03/14 22:21:39 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EXDLIB_H
# define FT_EXDLIB_H

# include "ft_stdlib.h"
# include <stdbool.h>

double	ft_interpolate(double start, double end, double t);
char	*ft_itoa(int n);
int		ft_lerpcolor(int color_1, int color_2, double t);

#endif
