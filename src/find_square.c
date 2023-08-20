/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:36:08 by sawang            #+#    #+#             */
/*   Updated: 2023/08/20 16:53:48 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dash.h"

static int	min(int a, int b, int c)
{
	int	min;

	min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	return (min);
}

void	find_square(int *arr, int width, int height)
{
	int	max_of_s = arr[0];
	int	max_of_s_i = 0;
	int	max_of_s_j = 0;

	int	i = 1;
	while (i < height)
	{
		int j = 1;
		while (j < width)
		{
			if (arr[i * width + j] == 1)
			{
				arr[i * width + j] = \
					min(arr[(i - 1) * width + j], arr[i * width + j - 1], arr[(i - 1) * width + j - 1]) + 1;
				if (arr[i * width + j] > max_of_s)
				{
					max_of_s = arr[i * width + j];
					max_of_s_i = i;
					max_of_s_j = j;
				}
			}
			else
				arr[i * width + j] = 0;
			j++;
		}
		i++;
	}
	printf("%d,%d|%d,%d\n", max_of_s_i - max_of_s + 1, max_of_s_j - max_of_s + 1, max_of_s_i, max_of_s_j);
	return ;
}
