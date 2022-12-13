#include "ft_printf.h"

int main(void)
{
	/*//char *s = "123";
	//char c = 'X';
	int a = 25;


	printf(" COUNT = %d", ft_printf("%d", a));
	printf("\n");
	printf(" COUNT = %d", printf("%d", a));

	printf("\n");
	*/
	char	*c;
	
	c = (char *)malloc(sizeof(char) * 2);
	c[0] = 0;
	c[1] = 0;
	printf("%s\n", c);
	printf("%c\n", c[0]);
	char *s = NULL;
	printf("%s\n", s);

}
