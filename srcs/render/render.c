/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbosnak <bbosnak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:54:40 by bbosnak           #+#    #+#             */
/*   Updated: 2024/04/01 16:54:41 by bbosnak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/cub3d.h"
#include "../../mlx/mlx.h"

int	render_next_frame(t_cub *cube)
{
	t_render	*rend;

	rend = cube->rend;
	//ft_bzero(cube->img.addr, 1920 * 1080 * cube->img.bits_per_pixel / 8);
	mlx_put_image_to_window(cube->mlx, cube->win, cube->text[3].img.img, 0, 0);
	//render_walls(cube);
	//mlx_put_image_to_window(cube->mlx, cube->win, cube->img.img, 0, 0);
	return (1);
}
