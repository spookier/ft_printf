#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>


# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putstr(char *s);
int		ft_putchar(char c);
int		count_flags(const char *str, char *flags);
int 	print_all(va_list args, const char *str, int num_args);
int		ft_putnbr(int nb);
int		ft_hexa(unsigned long nb, int sign);

#endif