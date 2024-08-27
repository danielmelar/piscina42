#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"

#include <stdio.h>
#include <string.h>

void testa_ex00();
void testa_ex01();
void testa_ex02();
void testa_ex03();
void testa_ex04();
void testa_ex05();
void testa_ex06();
void testa_ex07();
void testa_ex08();
void testa_ex09();

int main()
{
    // testa_ex00();
    // testa_ex01();
    //testa_ex02();
    // testa_ex03();
    // testa_ex04();
    // testa_ex05();
    // testa_ex06();
    //testa_ex07();
    //testa_ex08();
    testa_ex09();

    return 0;
}

void testa_ex00()
{
    printf("ex00================\n");

    char nome[] = "daniel perdeu o exame e teve um pessimo dia";
    char nome_copia[100];

    ft_strcpy(nome_copia, nome);

    printf("nome: %s\n", nome);
    printf("nome_copiado: %s\n", nome_copia);

    printf("ex00================\n");
    printf("\n");
}

void testa_ex01()
{
    printf("ex01================\n");

    char nome[] = "daniel lais 42sp";
    char nome_copia[100];
    int n = 10;
    ft_strncpy(nome_copia, nome, n);
    printf("nome: %s\n", nome);
    printf("nome_copiado: %s\n", nome_copia);

    printf("ex01================\n");
    printf("\n");
}

void testa_ex02()
{
    printf("ex02================\n");

    char str[] = "lkasjd";
    int is_alpha = ft_str_is_alpha(str);
    printf("%d\n", is_alpha);

    char *str2 = "";
    int is_alpha2;
    is_alpha2 = ft_str_is_alpha(str2);
    printf("%d\n", is_alpha2);

    char *str3 = "\t/***sadasda";
    int is_alpha3;
    is_alpha3 = ft_str_is_alpha(str3);
    printf("%d\n", is_alpha3);

    printf("ex02================\n");
    printf("\n");
}

void testa_ex03()
{
    printf("ex03================\n");

    char *str = "42sp";
    int is_alpha;
    is_alpha = ft_str_is_numeric(str);
    printf("%d\n", is_alpha);

    char *str1 = "42";
    int is_alpha1;
    is_alpha1 = ft_str_is_numeric(str1);
    printf("%d\n", is_alpha1);

    char *str2 = "\t";
    int is_alpha2;
    is_alpha2 = ft_str_is_numeric(str2);
    printf("%d\n", is_alpha2);

    char *str3 = "";
    int is_alpha3;
    is_alpha3 = ft_str_is_numeric(str3);
    printf("%d\n", is_alpha3);

    printf("ex03================\n");
    printf("\n");
}

void testa_ex04()
{
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
}

void testa_ex05()
{
    printf("ex05================\n");

    char *str1 = "42sp";
    int is_alpha1;
    is_alpha1 = ft_str_is_uppercase(str1);
    printf("%d\n", is_alpha1);

    char *str2 = "ABCSP";
    int is_alpha2;
    is_alpha2 = ft_str_is_uppercase(str2);
    printf("%d\n", is_alpha2);

    char *str3 = "";
    int is_alpha3;
    is_alpha3 = ft_str_is_uppercase(str3);
    printf("%d\n", is_alpha3);

    printf("ex05================\n");
    printf("\n");
}

void testa_ex06()
{
    printf("ex06================\n");
    char *str1 = "42sp";
    int is_alpha1;
    is_alpha1 = ft_str_is_printable(str1);
    printf("%d\n", is_alpha1);

    char *str3 = "";
    int is_alpha3;
    is_alpha3 = ft_str_is_printable(str3);
    printf("%d\n", is_alpha3);
    printf("ex06================\n");
    printf("\n");
}

void testa_ex07()
{
    printf("ex07================\n");

    char str1[] = "42sp Ee uma escola muito lagalxx";
    printf("%s\n", str1);
    ft_strupcase(str1);
    printf("%s\n", str1);

    printf("ex07================\n");
    printf("\n");
}

void testa_ex08()
{
    printf("ex08================\n");
    
    char str1[] = "42SP";

    printf("%s\n", str1);
    ft_strlowcase(str1);
    printf("%s\n", str1);

    printf("ex08================\n");
    printf("\n");
}

void testa_ex09()
{
    printf("ex09================\n");

    char nome[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
    printf("%s\n", nome);
    ft_strcapitalize(nome);
    printf("%s\n", nome);

    printf("ex09================\n");
    printf("\n");
}