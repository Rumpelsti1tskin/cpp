#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point	a(0, 0);
	Point	b(5, 0);
	Point	c(0, 5);

	Point	inside_point(1, 1);
	Point	outside_point(-10, 5);
	Point	vertex_point(0, 0);

	std::cout << "The test result for inside point is : " << (bsp(a, b, c, inside_point) ? "INSIDE" : "OUT") << " - Expected INSIDE" << std::endl;
	std::cout << "The test result for outside point is : " << (bsp(a, b, c, outside_point) ? "INSIDE" : "OUT") << " - Expected OUT" << std::endl;
	std::cout << "The test result for vertex point is : " << (bsp(a, b, c, vertex_point) ? "INSIDE" : "OUT") << " - Expected OUT" << std::endl;

	return (0);
}


// int main()
// {
// 	float	x1, x2, x3, xp, y1, y2, y3, yp;

// 	std::cout << "Enter the X coordinate of the first vertex" << std::endl;
// 	std::cin >> x1;
// 	std::cout << "Enter the Y coordinate of the first vertex" << std::endl;
// 	std::cin >> y1;

// 		std::cout << "Enter the X coordinate of the second vertex" << std::endl;
// 	std::cin >> x2;
// 		std::cout << "Enter the Y coordinate of the second vertex" << std::endl;
// 	std::cin >> y2;

// 		std::cout << "Enter the X coordinate of the third vertex" << std::endl;
// 	std::cin >> x3;
// 		std::cout << "Enter the Y coordinate of the third vertex" << std::endl;
// 	std::cin >> y3;

// 		std::cout << "Enter the X coordinate of the point" << std::endl;
// 	std::cin >> xp;
// 		std::cout << "Enter the Y coordinate of the point" << std::endl;
// 	std::cin >> yp;

// 	Point	a(x1, y1);
// 	Point	b(x2, y2);
// 	Point	c(x3, y3);
// 	Point	point(xp, yp);

// 	if (bsp(a, b, c, point))
// 		std::cout << "The point is inside the triangle" << std::endl;
// 	else
// 		std::cout << "The point is outside the triangle" << std::endl;

// 	return (0);
// }
