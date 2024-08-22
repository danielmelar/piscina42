#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

char pegar_caractere(int x, int y, int linha, int col) {
    if (linha == 0) { 
        if (col == 0) return 'A'; 
        if (col == x - 1) return 'C'; 
        return 'B'; 
    } else if (linha == y - 1) { 
        if (col == 0) return 'C'; 
        if (col == x - 1) return 'A'; 
        return 'B'; 
    } else { 
        if (col == 0 || col == x - 1) return 'B'; 
        return ' '; 
    }
}

void rush(int x, int y) {
    int linha = 0;
    int col = 0;

    while (linha < y) { 
        col = 0;
        while (col < x) { 
            ft_putchar(pegar_caractere(x, y, linha, col)); 
            col++; 
        }
        ft_putchar('\n'); 
        linha++; 
    }
}

int main() {
 rush(5, 5);
 return 0;
}