#include <stdio.h>

// Definindo macros para obter o menor e o maior valor
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

// Protótipos das funções
int minino(int a, int b);
int maximo(int a, int b);

// Função que retorna o menor valor entre dois inteiros
int minino(int a, int b) {
    return min(a, b);
}

// Função que retorna o maior valor entre dois inteiros
int maximo(int a, int b) {
    return max(a, b);
}

// Função principal para testar
int main() {
    int x = 10, y = 20;

    printf("Menor valor entre %d e %d é: %d\n", x, y, minino(x, y));
    printf("Maior valor entre %d e %d é: %d\n", x, y, maximo(x, y));

    return 0;
}
