#include "cube3d.h"

int init_grid(t_data *data);

int main(int argc, char *argv[])
{
	t_data	data;
	
	(void)argc;
	(void)argv;
	if (init_grid(&data) == 1)
		exit (1);
	if (ft_init_vision(&data) == 1)
		exit (1);
	if (ft_mlx_init(&data) == 1)
		exit (1);
	if (ft_init_vision(&data) == 1)
		exit (1);

	// Player init
	data.player.pos.x = data.win_width / 4;
	data.player.pos.y = data.win_height / 4;
	data.player.angle = 0.0f;
	data.player.dir.x = -1;
	data.player.dir.y = 0;
	data.plane.x = data.player.pos.x + data.view_dst * data.player.dir.x;
	data.plane.y = data.player.pos.y + data.view_dst * data.player.dir.y;

	ft_mlx_hooks_and_loop(&data);

	exit (0);
}

