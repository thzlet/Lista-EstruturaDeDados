#include <stdio.h>

double pi(int n);

int main() {
    int n = 1000000; // numero de termoos na aproximação
    printf("Aproximação de pi com %d termos: %.15f\n", n, pi(n));
    return 0;
}

double pi(int n) {
    double resultado = 0.0;
    int sinal = 1;

    for(int i = 0; i < n; i++) {
        resultado += sinal * (1.0 / (2 * i + 1));

        sinal = -sinal;
    }

    return 4 * resultado;
}