/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_color_code.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkaraaga <tkaraaga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:32:20 by tkaraaga          #+#    #+#             */
/*   Updated: 2024/05/18 14:32:20 by tkaraaga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/cub3d.h"

void	map_color_code(t_cub	*cube)
{
	cube->f_color_code = cube->f_color[0] * 65536;
	cube->f_color_code += cube->f_color[1] * 256;
	cube->f_color_code += cube->f_color[2] * 1;
	cube->c_color_code = cube->c_color[0] * 65536;
	cube->c_color_code += cube->c_color[1] * 256;
	cube->c_color_code += cube->c_color[2] * 1;
}
