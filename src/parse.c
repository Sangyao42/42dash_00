#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*fill_array(FILE *fp, int *x, int *y)
{
	int	*array;
	int	i;

	i = 0;
	array = malloc(50000000);
	if (!array)
		return (NULL);
	while (array[i] != EOF)
	{
		array[i] = fgetc(fp);
		if (array[i] == EOF)
			break;
		//printf("%i -- ", array[i]);
		if (array[i] == 46)
			array[i] = 1;
		if (array[i] == 111)
			array[i] = 0;
		printf("%i", array[i]);
		if (array[i] == '\n')
			(*y)++;
		if (array[i] != '\n')
			i++;
	}
	*x = (i) / ((*y));
	printf("\n%i\n", *x);
	printf("%i\n", *y);

	return (array);
}

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
	if (ac == 2)
	{
		fp = fopen (argv[1], "r");
		if (!fp)
			return (0);
		array = fill_array(fp, &x, &y);
	}
	//algorithm(array);
	return (free(array), 0);
}
