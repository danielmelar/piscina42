#include "ex00/ft_strcpy.c"

#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *source);

int main()
{
    char nome[] = "daniel"; // '0'
    char nome_copia[100];

    ft_strcpy(nome_copia, nome);

    printf("nome: %s\n", nome);
    printf("nome_copiado: %s\n", nome_copia);

    return 0;
}