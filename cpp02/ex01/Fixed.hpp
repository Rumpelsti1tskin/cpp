#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
public :

	Fixed(void);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();

	Fixed(const int val);
	Fixed(const float val);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;

private :

	int					_fix_num_value;
	static const int	_frac_bits = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &value);

#endif