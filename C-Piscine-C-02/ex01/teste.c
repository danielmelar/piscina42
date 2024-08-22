#include "ft_strncpy.c"

#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *source, unsigned int n);

int main()
{
    char nome[] = "daniel"; // '0'
    char nome_copia[100];
    unsigned int n;

    n = 3;

    ft_strncpy(nome_copia, nome, n);

    printf("nome: %s\n", nome);
    printf("nome_copiado: %s\n", nome_copia);

    return 0;
}