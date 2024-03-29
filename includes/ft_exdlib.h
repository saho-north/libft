/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 21:48:55 by sakitaha          #+#    #+#             */
/*   Updated: 2024/03/17 09:29:45 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EXDLIB_H
# define FT_EXDLIB_H

# include "ft_stdlib.h"
# include <stdbool.h>

void	**ft_alloc2d(size_t height, size_t width, size_t elem_size);
void	ft_free2d(void **array, size_t size);
void	ft_free2dnull(void **array);
double	ft_interpolate(double start, double end, double t);
char	*ft_itoa(int n);
int		ft_lerpcolor(int color_1, int color_2, double t);

#endif
