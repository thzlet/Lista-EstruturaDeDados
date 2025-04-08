#include <stdio.h>
#include <math.h>

void calc_esfera(float r, float* area, float* volume);

int main() {
    float r;
    float area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &r);

    calc_esfera(r, &area, &volume);
    printf("Area: %.2f\n", area);
    printf("Volume: %.2f\n", volume);
    return 0;

}

void calc_esfera (float r, float* area, float* volume) {
    *area = 4 * M_PI * r * r;
    *volume = (4.0 / 3.0) * M_PI * r * r * r;
}