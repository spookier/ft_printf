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

static int	ft_putpointer(unsigned long nb)
{
	int	len;

	len = 0;
	
	if (nb >= 16)
		len += ft_putpointer(nb / 16);
	if (nb % 16 < 10)
		len += ft_putchar((nb % 16) + 48);
	else
	{
		len += ft_putchar((nb % 16) + 87);
	}
	return (len);
}

int	ft_putpointer_check(unsigned long nb)
{
	if(!nb)
	{
		ft_putstr("(nil)");
		return(5);
	}
	else
	{
		ft_putstr("0x");
		return(2 + ft_putpointer(nb));
	}
}
