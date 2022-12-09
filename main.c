#include "ft_printf.h"

int main(void)
{
	char *s = "this is a string";
	char c = 'X';

	ft_printf("%s%c123", s, c);

	printf("\n");

	printf("%s%c123", s, c);

}
