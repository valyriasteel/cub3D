#include "../../inc/cub3d.h"

void	scale_and_cut(void *text, int width, int height, int start_pos[2], int area[2])
{
	int	scale_y;
}

void	handle_neg_scale(int *x, int *width, int *y, int *height)
{
	if (*height < 0)
	{
		*y += *height;
		*height *= -1;
	}
	if (*width < 0)
	{
		*x += *width;
		*width *= -1;
	}
}

void	draw_rectangle (void *frame, int x, int y, int width, int height)
{
	int	limit_x;
	int	limit_y;

	handle_neg_scale(&x, &width, &y, &height);
	limit_x = x + width;
	limit_y = y + height;
	while(y < limit_y)
	{
		while(x < limit_x)
		{
			pixel(frame, x, y, 0x0000FF00);
			x++;
		}
		x = limit_x - width;
		y++;
	}
}