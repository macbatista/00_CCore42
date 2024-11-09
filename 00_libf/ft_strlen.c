#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(int c, char **v)
{
	(void)c;
	printf("Verdadeira = %lu\n", strlen(v[1]));
	printf("     Minha = %lu\n", ft_strlen(v[1]));
}
