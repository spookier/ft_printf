#include "incs/ft_printf.h"

int main(void)
{
	int *N = NULL;

	ft_printf(" %p %p ", N, N);
	printf("\n");
	printf(" %p %p ", N, N);
	printf("\n");
	return (0);
}