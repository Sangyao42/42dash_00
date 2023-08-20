/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dash.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:29:12 by sawang            #+#    #+#             */
/*   Updated: 2023/08/20 15:53:05 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DASH_H
# define DASH_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

# ifndef BUF_SIZE
#  define BUF_SIZE INT_MAX
# endif

# define WIDTH 5
# define HEIGHT 6

void	find_square(int *arr, int width, int height);

#endif
