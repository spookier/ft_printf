#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int i;
	
	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while(s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return(1);
}

int	count_flags(const char *str, char *flags)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	while(str[i] && str[i + 1])
	{
		j = 0;
		if(str[i] == '%' && str[i + 1])
		{
			while(flags[j] && str[i + 1] != flags[j])
			{
				j++;
			}
			if(flags[j] && str[i + 1] == flags[j])
			{
				count++;
			}
		} 
		i++;
	}
	return(count);
}

int	ft_hexa(unsigned long nb, int sign)
{
	int	len;

	len = 0;
	if (nb >= 16)
		len += ft_hexa(nb / 16, sign);
	if (nb % 16 < 10)
		len += ft_putchar((nb % 16) + 48);
	else
	{
		if (sign == 1)
			len += ft_putchar((nb % 16) + 87);
		else
			len += ft_putchar((nb % 16) + 55);
	}
	return (len);
}

int	ft_putnbr(int nb)
{
	int	len;

	len = 0;
	if (nb == -2147483648)
	{
		len += (ft_putstr("-2147483648"));
		return (len);
	}
	if (nb < 0)
	{
		len += (ft_putchar('-'));
		nb = -nb;
	}
	if (nb > 9)
	{
		len += (ft_putnbr(nb / 10));
		len += (ft_putnbr(nb % 10));
	}
	else
		len += (ft_putchar(nb + 48));
	return (len);
}