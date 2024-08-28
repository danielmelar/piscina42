#include "ex00/ft_strcmp.c"

#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "lai";
	char cmp[] = "lais";

	int result = strcmp(src, cmp);
	int	result2 = ft_strcmp(src, cmp);

	printf("%d\n", result);
	printf("%d\n", result2);

}
