#include "ft_printf.h"

static int check_printf(const char *str)
{
	int size;
	char *flags;

	size = 0;
	flags = "cspdiuxX";

	size = count_flags(str, flags);
	printf("Number of arguments = %d\n", size);

	return(size);
}

static int replace_flags(const char *str)
{
	
}


int ft_printf(const char *str, ... )
{
	int num_args;

	va_list args;
	num_args = check_printf(str);
	va_start(args, num_args);
	va_end(args);
	return (0);
}
