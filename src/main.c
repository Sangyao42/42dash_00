/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:28:52 by sawang            #+#    #+#             */
/*   Updated: 2023/08/20 18:14:15 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dash.h"

int	main(int ac, char **argv)
{
	FILE	*fp;
	int		*array;
	int		y;
	int		x;

	array = NULL;
	fp = NULL;
	y = 0;
	x = 0;
	if (ac != 2)
		return (0);
	fp = fopen (argv[1], "r");
	if (!fp)
		return (0);
	array = fill_array(fp, &x, &y);
	find_square(array, x, y);
	return (free(array), 0);
}
