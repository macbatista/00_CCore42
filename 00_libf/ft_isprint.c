#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	main(int c, char **v)
{
	(void)c;
	printf("Verdadeira = %d\n", isprint(v[1][0]));
	printf("     Minha = %d\n", ft_isprint(v[1][0]));
}
