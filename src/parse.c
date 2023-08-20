#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*fill_array(FILE *fd, int *x, int *y)
{
	int	*array;
	int	i;

	i = 0;
	array = malloc(50000000);
	if (!array)
		return (0);
	while (array[i] != '\0')
	{
		array[i] = fgetc(fd);
		if (array[i] == 46)
			array[i] = 1;
		if (array[i] == 111)
			array[i] = 0;
		write (1, &array[i], 1);
		if (array[i] != '\n' && array[i] != '\0')
			i++;
		else
			(*y)++;
	}
	*x = (i + 1) / *y;
	return (array);
}

int	main(int ac, char **argv)
{
	FILE	*fd;
	int		*array;
	int		y;
	int		x;

	array = NULL;
	if (ac == 2)
	{
		fd = fopen (argv[1], O_RDONLY);
		array = fill_array(fd, &x, &y);
	}
	//algorithm(array);
	return (free(array), 0);
}
