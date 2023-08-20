/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:28:52 by sawang            #+#    #+#             */
/*   Updated: 2023/08/20 15:12:12 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dash.h"

int	main(int argc, char **argv)
{
	int	*arr;

	(void) argc;
	(void) argv;
	arr = calloc(BUF_SIZE, 1);
	if (arr == NULL)
		return (1);
	int arr_stack[] =
				{0, 1, 1, 0, 1, \
				 1, 1, 0, 1, 0, \
				 0, 1, 1, 1, 0, \
				 1, 1, 1, 1, 0, \
				 1, 1, 1, 1, 1, \
				 0, 0, 0, 0, 0};
	(void)arr_stack;
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 0;
	arr[4] = 1;
	arr[5] = 1;
	arr[6] = 1;
	arr[7] = 0;
	arr[8] = 1;
	arr[9] = 0;
	arr[10] = 0;
	arr[11] = 1;
	arr[12] = 1;
	arr[13] = 1;
	arr[14] = 0;
	arr[15] = 1;
	arr[16] = 1;
	arr[17] = 1;
	arr[18] = 1;
	arr[19] = 0;
	arr[20] = 1;
	arr[21] = 1;
	arr[22] = 1;
	arr[23] = 1;
	arr[24] = 1;
	arr[25] = 0;
	arr[26] = 0;
	arr[27] = 0;
	arr[28] = 0;
	arr[29] = 0;
	find_square(arr, WIDTH, HEIGHT);
	free(arr);
	return (0);
}
