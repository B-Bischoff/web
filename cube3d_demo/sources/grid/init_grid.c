#include "cube3d.h"

int	init_grid(t_data *data)
{
	data->cell_size = 50;
	data->tab_height = 15;
	data->tab_width = 20;
	data->tab = malloc(sizeof(int *) * data->tab_height);
	if (data->tab == NULL)
		return (1);
	for (int y = 0; y < data->tab_height; y++)
	{
		data->tab[y] = ft_calloc(data->tab_width, sizeof(int));
		if (data->tab[y] == NULL)
			return (1);
		for (int x = 0; x < data->tab_width; x++)
			data->tab[y][x] = (y * 2 + x % 2);
	}
	return (0);
}
