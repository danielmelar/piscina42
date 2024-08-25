#include <stdio.h>

int main()
{
	int table[4][4];
	
	for(int x = 0; x<4; x++)
	{
		for(int y = 0; y<4; y++)
		{
			if(x == 0 && y == 0)
				table[x][y] = 0;
			else if(x == 0 && y == 3)
				table[x][y] = 0;
			else if(x == 3 && y == 0)
				table[x][y] = 0;
			else if(x == 3 && y == 3)
				table[x][y] = 0;
			else
				table[x][y] = 8;
			printf("%3d", table[x][y]);
		}
		printf("\n");	
	}
	printf("\n");
}
