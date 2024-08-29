#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"

#include <stdio.h>
#include <string.h>

void test_ex00();
void test_ex01();
void test_ex02();
void test_ex03();

int main()
{
	test_ex02();

	return 0;
}

void test_ex00()
{
	char src[] = "";
	char cmp[] = "";

	int result = strcmp(src, cmp); // src -> cmp
	int	result2 = ft_strcmp(src, cmp);

	printf("%d\n", result);
	printf("%d\n", result2);
}

void test_ex01()
{
	char src[] = "texta para comparar"; 
	char cmp[] = "texto para comparar";

	int result = strncmp(src, cmp, 10); // limite de bites tamanho de src. 
	int	result2 = ft_strncmp(src, cmp, 10);

	printf("%d\n", result);
	printf("%d\n", result2);
}

void test_ex02()
{
	char dest[] = "bom dia com ";
	char to_concat[] = "bita e os animais";

	strcat(dest, to_concat);
	printf("%s\n", dest);

	char dest2[] = "bom dia com ";
	char to_concat2[] = "bita e os animais";

	ft_strcat(dest2, to_concat2);
	printf("%s\n", dest2);

/*
	bom
	b       -> 0
	o       -> 1
	m       -> 2

	bom -> 4
	b       -> 0
	o       -> 1
	m       -> 2
	'\0'    -> 3
*/
}

void test_ex03()
{
	char dest[] = "bom ";
	char to_concat[] = "dia";

	strncat(dest, to_concat, 1);
	printf("%s\n", dest);

	char dest2[] = "bom ";
	char to_concat2[] = "dia";

	ft_strncat(dest2, to_concat2, 1);
	printf("%s\n", dest2);
}
