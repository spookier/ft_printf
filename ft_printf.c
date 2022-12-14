#include "ft_printf.h"

static int check_size(const char *str)
{
	int size;
	char *flags;

	size = 0;
	flags = "cspdiuxX%";

	size = count_flags(str, flags);
	//printf("Number of arguments = %d\n", size);

	return(size);
}


int ft_printf(const char *str, ... )
{
	int num_args;
	va_list args;
	int count;

	num_args = check_size(str);

	va_start(args, str);

	count = print_all(args, str, num_args);
	va_end(args);

	return (count);
}
