#include <stdio.h>
#include <math.h>

int primo(int n);

int main() {

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (primo(num)) {
        printf("Eh primo");
    } else {
        printf("Não eh primo");
    }
    return 0;
}

int primo(int n) {
    if (n<=1) {
        return 0; //numeros <= 1 não sao primos
    } 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n%i==0) {
            return 0;
        }
    }
    return 1;
}
