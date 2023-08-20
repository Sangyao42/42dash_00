#include "dash.h"

int	*fill_array(FILE *fp, int *x, int *y)
{
	int	*array;
	int	i;

	i = 0;
	array = malloc(BUF_SIZE);
	if (!array)
		return (NULL);
	while (array[i] != EOF)
	{
		array[i] = fgetc(fp);
		if (array[i] == EOF)
			break;
		if (array[i] == 46)
			array[i] = 1;
		if (array[i] == 111)
			array[i] = 0;
		if (array[i] == '\n')
			(*y)++;
		if (array[i] != '\n')
			i++;
	}
	*x = (i) / ((*y));
	return (array);
}
