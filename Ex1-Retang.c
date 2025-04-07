// verificando se o ponto (x,y) está dentro do retangulo
#include <stdio.h>

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y);

int main() {
    // declarando os pontos
    int x0 = 2, y0 = 2, x1 = 5, y1 = 5;
    int x = 3, y = 4;

    if (dentro_ret(x0, y0, x1, y1, x, y)) {
        printf("O ponto está dentro do retangulo!");
    } else {
        printf("Não está dentro do retangulo!");
    }
    return 0;
}

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y) {
    if (x >= x0 && x <= x1 && y >= y0 && y <= y1) { // x precisa estar entre x0 e x1 e y entre y0 e y1
        return 1;
    } else {
        return 0;
    }
}
