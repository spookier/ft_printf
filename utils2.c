#include "ft_printf.h"

int	ft_unsigned_int(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb > 9)
	{
		len += (ft_unsigned_int(nb / 10));
		len += (ft_unsigned_int(nb % 10));
	}
	else
		len += (ft_putchar(nb + 48));
	return (len);
}