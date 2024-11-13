#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;

    while ((s1[i] || s2[i]) && i < n)
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return 0;
}

/* int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        printf("Usage: %s <str1> <str2> <n>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[3]);
    int res1 = strncmp(argv[1], argv[2], n);
    int res = ft_strncmp(argv[1], argv[2], n);

    if (res1 == 0)
    {
        printf("<str1> and <str2> are equal");
        if (argc > 3)
            printf(" in the first %d bytes\n", n);
        printf("\n");
    }
    else if (res1 < 0)
    {
        printf("<str1> is less than <str2> (%d)\n", res1);
    }
    else
    {
        printf("<str1> is greater than <str2> (%d)\n", res1);
    }

    if (res == 0)
    {
        printf("<str1> and <str2> are equal");
        if (argc > 3)
            printf(" in the first %d bytes\n", n);
        printf("\n");
    }
    else if (res < 0)
    {
        printf("<str1> is less than <str2> (%d)\n", res);
    }
    else
    {
        printf("<str1> is greater than <str2> (%d)\n", res);
    }

    return 0;
} */