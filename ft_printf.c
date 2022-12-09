#include "ft_printf.h"

static int check_size(const char *str)
{
	int size;
	char *flags;

	size = 0;
	flags = "cspdiuxX";

	size = count_flags(str, flags);
	//printf("Number of arguments = %d\n", size);

	return(size);
}


static void print_flags(va_list args, int select)
{
	if(select == 1)
		ft_putchar((char) va_arg(args, int));
	else if(select == 2)
		ft_putstr(va_arg(args, char *));
	
}


static void print_all(va_list args, const char *str, int num_args)
{
	int i;

	i = 0;
	while(str[i] && num_args >= 0)
	{
		if(str[i] == '%' && str[i + 1])
		{
			if(str[i + 1] == 'c')
				print_flags(args, 1);
			else if(str[i + 1] == 's')
				print_flags(args, 2);
			i++;
			num_args--;
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*
void	ft_print_arg(char c, va_list ap, int *i)
{
	if (c == 'c')
		*i += ft_putchar(va_arg(ap, int));
	else if (c == 's')
		*i += ft_putstr(va_arg(ap, char *));
	else
		*i += ft_putchar(c);
}

 static int print_all(va_list args, const char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '\0')
				return (i);
			ft_print_arg(*str, args, &i);
		}
		else
		{
			ft_putchar(*str);
			i++;
		}
		str++;
	}
	return(0);
}

*/

int ft_printf(const char *str, ... )
{
	int num_args;
	va_list args;

	num_args = check_size(str);

	va_start(args, str);

	//print_all(args, str, num_args);
	print_all(args, str, num_args);
	va_end(args);



	return (0);
}
