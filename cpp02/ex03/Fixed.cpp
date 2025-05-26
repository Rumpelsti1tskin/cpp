#include "Fixed.hpp"

Fixed::Fixed() : _fix_num_value(0)
{
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->_fix_num_value = other.getRawBits();
	return ;
}

Fixed::Fixed(const int val)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_fix_num_value = val << Fixed::_frac_bits;
	return ;
}

Fixed::Fixed(const float val)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_fix_num_value = roundf(val * (1 << Fixed::_frac_bits));
	return ;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fix_num_value = other._fix_num_value;
	return (*this);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (_fix_num_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fix_num_value = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fix_num_value / (1 << Fixed::_frac_bits));
}

int	Fixed::toInt(void) const
{
	return (this->_fix_num_value >> Fixed::_frac_bits);
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (this->_fix_num_value > other._fix_num_value);
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (this->_fix_num_value < other._fix_num_value);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (this->_fix_num_value >= other._fix_num_value);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (this->_fix_num_value <= other._fix_num_value);
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (this->_fix_num_value == other._fix_num_value);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (this->_fix_num_value != other._fix_num_value);
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	if (other.toFloat() == 0)
	{
		std::cout << "Cannot divide to 0" << std::endl;
		return (*this);
	}
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed	&Fixed::operator++()
{
	++this->_fix_num_value;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	--this->_fix_num_value;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;

	this->_fix_num_value++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;

	this->_fix_num_value--;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &Fixed1, Fixed &Fixed2)
{
	if (Fixed1 < Fixed2)
		return (Fixed1);
	return (Fixed2);
}

const Fixed	&Fixed::min(const Fixed &Fixed1, const Fixed &Fixed2)
{
	if (Fixed1 < Fixed2)
		return (Fixed1);
	return (Fixed2);	
}

Fixed	&Fixed::max(Fixed &Fixed1, Fixed &Fixed2)
{
	if (Fixed1 > Fixed2)
		return (Fixed1);
	return (Fixed2);
}

const Fixed	&Fixed::max(const Fixed &Fixed1, const Fixed &Fixed2)
{
	if (Fixed1 > Fixed2)
		return (Fixed1);
	return (Fixed2);
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}
