#include "Point.hpp"
#include "Fixed.hpp"

static float	get_area(Point const a, Point const b, Point const c)
{
	float	area;

	area = ((a.get_x().toFloat() * (b.get_y().toFloat() - c.get_y().toFloat()))
		+ (b.get_x().toFloat() * (c.get_y().toFloat() - a.get_y().toFloat()))
		+ (c.get_x().toFloat() * (a.get_y().toFloat() - b.get_y().toFloat()))) / 2;

	if (area < 0)
		area = -area;

	return (area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	area = get_area(a, b, c);
	float	small_area_1 = get_area(a, b, point);
	float	small_area_2 = get_area(a, point, c);
	float	small_area_3 = get_area(point, b, c);

	if (area == 0 || small_area_1 == 0 || small_area_2 == 0 || small_area_3 == 0)
		return (false);

	return (area == small_area_1 + small_area_2 + small_area_3);
}