/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:36:08 by sawang            #+#    #+#             */
/*   Updated: 2023/08/20 22:40:43 by sawang           ###   ########.fr       */
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

	int i;
	int j;
	int index;

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			index = i * width + j;
			if (arr[index] == 1)
			{
				if (i != 0 && j != 0 )
					arr[index] = \
						min(arr[index - width], arr[index - 1], arr[index - width - 1]) + 1;
				if (arr[index] > max_of_s)
				{
					max_of_s = arr[index];
					max_of_s_i = i;
					max_of_s_j = j;
				}
			}
			// else
			// 	arr[i * width + j] = 0;
			j++;
		}
		i++;
	}
	if (max_of_s == 0)
		return ;
	printf("%d,%d|%d,%d\n", max_of_s_i - max_of_s + 1, max_of_s_j - max_of_s + 1, max_of_s_i, max_of_s_j);
	return ;
}
