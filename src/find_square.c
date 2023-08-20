/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:36:08 by sawang            #+#    #+#             */
/*   Updated: 2023/08/20 20:59:27 by sawang           ###   ########.fr       */
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

	int i = 0;
	if (height <= 1)
	{
		while (i < width)
		{
			if (arr[i] == 1)
			{
				arr[i] = 1;
				max_of_s = 1;
				max_of_s_i = 0;
				max_of_s_j = i;
				break;
			}
			else
				arr[i] = 0;
			i++;
		}
		printf("%d,%d|%d,%d\n", max_of_s_i, max_of_s_j, max_of_s_i, max_of_s_j);
		return ;
	}
	int j = 0;
	if (width <= 1)
	{
		while (j < height)
		{
			if (arr[j] == 1)
			{
				arr[j] = 1;
				max_of_s = 1;
				max_of_s_i = j;
				max_of_s_j = 0;
				break;
			}
			else
				arr[j] = 0;
			j++;
		}
		printf("%d,%d|%d,%d\n", max_of_s_i, max_of_s_j, max_of_s_i, max_of_s_j);
		return ;
	}
	i = 0;
	if (width == 2)
	{
		while (i < height * width)
		{
			if (i % 2 == 1)
			{
				if (arr[i] == 1)
				{
					printf("%d,%d|%d,%d\n", i , 0, 1, 0);
					break;
				}
				else
					arr[i] = 0;
			}
		}
	}
	j = 0;
	if (height == 2)
	{
		while (j < height * width)
		{
			if (j % 2 == 1)
			{
				if (arr[j] == 1)
				{
					printf("%d,%d|%d,%d\n", 0, j, 0, 1);
					break;
				}
				else
					arr[j] = 0;
			}
		}
	}
	i = 1;
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
