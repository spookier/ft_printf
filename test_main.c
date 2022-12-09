#include "ft_printf.h"


int max(int args, ...);

int main(void)
{
	max(4, 3, 54, 8, 4);
}

int max(int num, ...)
{
	va_list list_args;

	va_start(list_args, num);

	int i = 0;
	int max = 0;
	if(num == 0)
		max = va_arg(list_args, int);
	else
	{
		while(i < num)
		{
			int x = va_arg(list_args, int);
			if(x > max)
			{
				max = x;
			}
			i++;
		}
	}

	printf("Max number is %d\n", max);
	va_end(list_args);
	return (0);
}