#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	main(int c, char **v)
{
	(void)c;
	printf("Verdadeira = %d\n", isdigit(v[1][0]));
	printf("     Minha = %d\n", ft_isdigit(v[1][0]));
}
