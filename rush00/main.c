#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);
void rush(int x, int y);

int main()
{
	rush(5, 5);
	return 0;
}

void rush(int x, int y)
{
	int mid_x = 0;
	
	while(mid_x < x)
	{ 
		int mid_y = 0;
		while(mid_y < y)
		{
			if(mid_x == 0 || mid_y == 0 || mid_x == x || mid_y == y)
				ft_putchar('o');
			mid_y++;
		}
		write(1, "\n", 1);
		mid_x++;
	}	
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
