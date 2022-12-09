#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>


# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *, ...);
int 	count_flags(const char *str, char *flags);

#endif