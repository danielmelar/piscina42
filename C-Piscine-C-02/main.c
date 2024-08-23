#include "ex00/ft_strcpy.c"

//#include "ex02/ft_str_is_alpha.c"
//#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"

#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *source);

int main()
{
    // printf("ex00================\n");
    // char nome[] = "daniel perdeu o exame e teve um pessimo dia"; // '0'
    // char nome_copia[100];

    // ft_strcpy(nome_copia, nome);

    // printf("nome: %s\n", nome);
    // printf("nome_copiado: %s\n", nome_copia);
    // printf("ex00================\n");

    // printf("ex01================\n");
    // char nome[] = "daniel perdeu o exame e teve um pessimo dia"; // '0'
    // char nome_copia[100];

    // ft_strcpy(nome_copia, nome);

    // printf("nome: %s\n", nome);
    // printf("nome_copiado: %s\n", nome_copia);
    // printf("ex01================\n");
    // printf("\n");

    // printf("ex02================\n");
    // char *str = "42sp";
    // int is_alpha;
    
    // is_alpha = ft_str_is_alpha(str);
    // printf("%d\n", is_alpha);

    // char *str2 = "spSp!";
    // int is_alpha2;
    
    // is_alpha2 = ft_str_is_alpha(str2);
    // printf("%d\n", is_alpha2);


    // char *str3 = "";
    // int is_alpha3;
    // is_alpha3 = ft_str_is_alpha(str3);
    // printf("%d\n", is_alpha3);
    // printf("ex02================\n");
    // printf("\n");

    // printf("ex03================\n");
    // char *str = "42sp";
    // int is_alpha;
    
    // is_alpha = ft_str_is_numeric(str);
    // printf("%d\n", is_alpha);

    // char *str2 = "123";
    // int is_alpha2;
    
    // is_alpha2 = ft_str_is_numeric(str2);
    // printf("%d\n", is_alpha2);


    // char *str3 = "";
    // int is_alpha3;
    // is_alpha3 = ft_str_is_numeric(str3);
    // printf("%d\n", is_alpha3);
    // printf("ex03================\n");
    // printf("\n");

    printf("ex04================\n");
    char *str1 = "42sp";
    int is_alpha1;
    is_alpha1 = ft_str_is_lowercase(str1);
    printf("%d\n", is_alpha1);

    char *str2 = "abcsp";
    int is_alpha2;
    is_alpha2 = ft_str_is_lowercase(str2);
    printf("%d\n", is_alpha2);

    char *str3 = "";
    int is_alpha3;
    is_alpha3 = ft_str_is_lowercase(str3);
    printf("%d\n", is_alpha3);
    printf("ex04================\n");
    printf("\n");


    printf("ex03================\n");
    printf("ex03================\n");
    printf("\n");

    return 0;
}
