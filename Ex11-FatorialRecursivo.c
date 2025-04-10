#include <stdio.h>

int fatorial(int n);

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    } else {
        return n * fatorial(n - 1); 
    }
}

int main() {
    int num;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Fatorial não definido para números negativos.\n");
    } else {
        printf("%d! = %d\n", num, fatorial(num));
    }

    return 0;
}
