#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - two dimensional array maker
 * @width: width of array
 * @height: height of array
 * Return: pointer of NULL
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int w, h;

	if (width <= 0 || height <= 0)
		return ('\0');
	s = malloc(sizeof(*s) * height);
	if (s == NULL)
		return ('\0');
	for (h = 0; h < height; h++)
	{
		s[h] = malloc(sizeof(s) * width);
		if (s[h] == NULL)
		{
			for (w = h; w >= 0; w--)
				free(s[w]);
			free(s);
			return ('\0');
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			s[h][w] = 0;
	}
	return (s);
}
