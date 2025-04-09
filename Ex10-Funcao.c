#include <stdio.h>

int funcaoSegundoGrau(int x);

int funcaoSegundoGrau(int x) {
    return x * x - 6 * x + 8;
}

int main() {
    int x;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    int resultado = funcaoSegundoGrau(x);
    printf("f(%d) = %d\n", x, resultado);

    return 0;
}
