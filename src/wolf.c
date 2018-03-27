int		main(int ac, char **av)
{
	t_indication	id;

	if (ac == 1)
	{
		id.mlx = mlx_init();
		id.win = mlx_new_window(id.mlx, VARX, VARY, "RT");
		ft_init(&id);
		mlx_loop_hook(id.mlx, set_image, &id);
		mlx_hook(id.win, 2, 0, keypress, &id);
		mlx_hook(id.win, 3, 0, keyrelease, &id);
		mlx_hook(id.win, 17, 18, ft_exit, NULL);
		mlx_loop(id.mlx);
	}
	else
		ft_putstr("Erreur : usage\n");
	return (0);
}
