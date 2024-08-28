#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"

#include <stdio.h>
#include <string.h>

void test_ex00();
void test_ex01();

int main()
{

}

void test_ex00()
{
	char src[] = "lais";
	char cmp[] = "lais";

	int result = strcmp(src, cmp); // src -> cmp
	int	result2 = ft_strcmp(src, cmp);

	printf("%d\n", result);
	printf("%d\n", result2);
}

void test_ex01()
{
	char src[] = ""; 
	char cmp[] = "";

	int result = strncmp(src, cmp, 1); // limite de bites tamanho de src. 
	int	result2 = ft_strncmp(src, cmp, 1);

	printf("%d\n", result);
	printf("%d\n", result2);
}