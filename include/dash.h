/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dash.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:29:12 by sawang            #+#    #+#             */
/*   Updated: 2023/08/20 17:12:36 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DASH_H
# define DASH_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

# ifndef BUF_SIZE
#  define BUF_SIZE (UINT_MAX + INT_MAX)
# endif

int		*fill_array(FILE *fp, int *x, int *y);
void	find_square(int *arr, int width, int height);

#endif
