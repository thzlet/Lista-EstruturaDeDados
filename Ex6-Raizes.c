#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, float* x1, float* x2);

int main() {
    float a, b, c;
    float x1, x2;

    printf("Digite os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    int numRaizes = raizes(a, b, c, &x1, &x2);

    if (numRaizes == 0) {
        printf("Não existem raizes");
    } else if (numRaizes == 1) {
        printf("Existe apenas uma raiz");
    } else if (numRaizes == 2) {
        printf("Existem duas raizes");
    }
    
    return 0;
}

int raizes(float a, float b, float c, float* x1, float* x2) {
    //calculando delta
    float delta = b * b - 4 * a * c;

    if (delta < 0) {
        return 0; // nao tem raizes
    } else if (delta == 0) {
        *x1 = -b / (2*a);
        return 1; // raiz unica
    } else {
        *x1 = (-b + sqrt(delta)) / (2*a);
        *x2 = (-b + sqrt(delta)) / (2*a);
        return 2; // duas raizes
    }
}