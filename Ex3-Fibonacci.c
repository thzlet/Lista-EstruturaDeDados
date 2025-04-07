#include <stdio.h>

int fibonacci(int n);

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = fibonacci(n);
    if (resultado == -1) {
        printf("Número deve ser maior que 0");
    } else {
        printf("O %d-ésimo numero é %d\n", n, resultado);
    }
    return 0;
}

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }

    int a = 1, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a+b;
        a = b;
        b = c;
    }

    return b;
}
