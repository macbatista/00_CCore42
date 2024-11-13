
int main(int c, char **v) {
    
    strchr(c[1],c[2][0]);

    char *result = manual_strchr(string, target);
    if (result) {
        printf("Caractere '%c' encontrado na posição: %ld\n", target, result - string);
    } else {
        printf("Caractere '%c' não encontrado.\n", target);
    }
    
    return 0;
}