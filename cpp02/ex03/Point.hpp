#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class	Point
{
public :

	Point(void);
	Point(const Point &other);
	Point	&operator=(const Point &other);
	~Point();

	Point(const float &x, const float &y);

	const Fixed	get_x(void) const;
	const Fixed	get_y(void) const;

private :

	const Fixed	_x;
	const Fixed	_y;

};

#endif