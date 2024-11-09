#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_isalpha(char c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	main(int c, char **v)
{
	(void)c;
	printf("Verdadeira = %d\n", isascii(v[1][0]));
	printf("     Minha = %d\n", ft_isalpha(v[1][0]));
    printf("      NULO = %d\n", ft_isalpha('\0'));
}