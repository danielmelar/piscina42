#include <stdio.h>

int main()
{
	int table[6][6];
	
	for(int x = 0; x<6; x++)
	{
		for(int y = 0; y<6; y++)
		{
			if(x == 0 && y == 0)
				table[x][y] = 0;
			else if(x == 0 && y == 5)
				table[x][y] = 0;
			else if(x == 5 && y == 0)
				table[x][y] = 0;
			else if(x == 5 && y == 5)
				table[x][y] = 0;
			else
				table[x][y] = 5;
			printf("%3d", table[x][y]);
		}
		printf("\n");	
	}
	printf("\n");
}
