#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	return ;
}

Point::Point(const float &x, const float &y) : _x(x), _y(y)
{
	return ;
}

Point::Point(const Point &other) : _x(other._x), _y(other._y)
{
	return ;
}

Point::~Point()
{
	return ;
}

const Fixed	Point::get_x(void) const
{
	return (this->_x);
}

const Fixed	Point::get_y(void) const
{
	return (this->_y);
}

Point	&Point::operator=(const Point &other)
{
	(void)other;
	return (*this);
}
