#include <stdio.h>


void moverBispo(int x, int y) {
    printf("Movimentação do Bispo a partir de (%d, %d):\n", x, y);
    for (int i = 1; i < 8; i++) {
        printf("(%d, %d) ", x + i, y + i);
        printf("(%d, %d) ", x - i, y - i);
        printf("(%d, %d) ", x + i, y - i);
        printf("(%d, %d)\n", x - i, y + i);
    }
}


void moverTorre(int x, int y) {
    printf("Movimentação da Torre a partir de (%d, %d):\n", x, y);
    for (int i = 0; i < 8; i++) {
        if (i != x) printf("(%d, %d) ", i, y); // Movimentos verticais
    }
    for (int j = 0; j < 8; j++) {
        if (j != y) printf("(%d, %d) ", x, j); // Movimentos horizontais
    }
    printf("\n");
}


void moverRainha(int x, int y) {
    printf("Movimentação da Rainha a partir de (%d, %d):\n", x, y);
    moverBispo(x, y);
    moverTorre(x, y);
}

int main() {
    int x = 3, y = 3; 
    
    moverBispo(x, y);
    printf("\n");
    moverTorre(x, y);
    printf("\n");
    moverRainha(x, y);
    
    return 0;
}

