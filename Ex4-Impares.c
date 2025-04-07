#include <stdio.h> 

int soma_impares(int n);

int main() {

    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("A soma é %d", soma_impares(n));
    return 0;
}

int soma_impares(int n) {
    int soma = 0;
    int i, numero_impar = 1;

    for(i = 0; i < n; i++) {
        soma += numero_impar;
        numero_impar += 2; //proximo numero impar
    }

    return soma;
}