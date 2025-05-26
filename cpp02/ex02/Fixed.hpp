#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
public :

	Fixed(void);
	Fixed(const Fixed &other);
	Fixed				&operator=(const Fixed &other);
	~Fixed();

	Fixed(const int val);
	Fixed(const float val);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;

	bool				operator>(const Fixed &other) const;
	bool				operator<(const Fixed &other) const;	
	bool				operator>=(const Fixed &other) const;
	bool				operator<=(const Fixed &other) const;
	bool				operator==(const Fixed &other) const;
	bool				operator!=(const Fixed &other) const;

	Fixed				operator+(const Fixed &other) const;
	Fixed				operator-(const Fixed &other) const;
	Fixed				operator*(const Fixed &other) const;
	Fixed				operator/(const Fixed &other) const;

	Fixed				&operator++();
	Fixed				&operator--();
	Fixed				operator++(int);
	Fixed				operator--(int);

	static Fixed		&min(Fixed &Fixed1, Fixed &Fixed2);
	const static Fixed	&min(const Fixed &Fixed1, const Fixed &Fixed2);
	static Fixed		&max(Fixed &Fixed1, Fixed &Fixed2);
	const static Fixed	&max(const Fixed &Fixed1, const Fixed &Fixed2);

private :

	int					_fix_num_value;
	static const int	_frac_bits = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &value);

#endif