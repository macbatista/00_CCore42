#include <stdio.h>
#include <stdlib.h>
size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t slen;
    char *str;

    i = 0;
    if (!s)
        return (NULL);
    slen = ft_strlen(s);
    if (start > slen)
        len=0;
    str = (char*)malloc((len + 1) * sizeof(char));
    while (i < len && s[i])
    {
        str[i] = s[start + i];
        i++;
    }
        str[i] = '\0';
    return (str);
}

int main(int c, char **v)
{
    (void)c;
    int start = 6;
    size_t len = 5;

    char *str = ft_substr(v[1], start, len);

    printf("%s\n", str);
}