#include "ft_printf.h"


static void print_arg(char c, va_list args, int *count)
{
	if(c == 'c')
		*count += ft_putchar((char)va_arg(args, int));
	else if(c == 's')
		*count += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
	{
		ft_putstr("0x");
		*count += 2 + ft_hexa(va_arg(args, unsigned long), 1);
	}
	else if(c == 'd' || c == 'i')
		*count += ft_putnbr(va_arg(args, int));
	else
		*count += ft_putchar(c);
}

int print_all(va_list args, const char *str, int num_args)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] && num_args >= 0)
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '\0')
				return (count);
			print_arg(str[i], args, &count);
			num_args--;
		}
		else
		{
			ft_putchar(str[i]);
			count++;
		}
		i++;
	}
	return(count);
}
