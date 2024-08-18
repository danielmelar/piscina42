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
	int mid_y = 0;

	while(mid_y < y)
	{
		int mid_x = 0;	
		while(mid_x < x)
		{
			// canto superior esquerdo
			if (mid_y == 0 && mid_x == 0)
				ft_putchar('A');
			// canto superior direito
			else if (mid_y == 0 && mid_x == x - 1)
				ft_putchar('C');
			// canto inferior esquerdo
			else if (mid_y == y - 1 && mid_x == 0)
				ft_putchar('C');
			// canto inferior direito
			else if (mid_y == y - 1 && mid_x == x - 1)
				ft_putchar('A');

			// primeira linha
			else if((mid_y == 0 && mid_x < x))
				ft_putchar('B');
			// parede direita
			else if (mid_y < y - 1 && mid_x == x - 1)
				ft_putchar('B');
			//parede esquera
			else if((mid_y < y - 1 && mid_x == 0))
				ft_putchar('B');
			//ultima linha
			else if ((mid_y == y - 1 && mid_x < x - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			mid_x++;
		}
		write(1, "\n", 1);
		mid_y++;
	}	
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
