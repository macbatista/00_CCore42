#include <string.h>
#include <stdio.h>

int main(int c, char **v)
{
    (void) c;
    (void) v;

    char big[] = "Hello World";
    char little[] = "ll";
    size_t len = 10;

    char *result = strnstr(big,little,len);

    if (result != NULL)
    printf("%s\n",result);
    else
    printf("NULL\n");
}
