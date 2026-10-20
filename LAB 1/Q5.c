#include <stdio.h>
#include <stdlib.h>

double volumeEsfera(double raio);

int main(void) {
    double r;
    printf("Digite o raio da esfera: ");
    if (scanf("%lf", &r) != 1) return 1;

    
    double v = volumeEsfera(r);
    if (v < 0) {
        printf("Raio inválido (negativo).\n");
        return 1;
    }
    printf("Volume da esfera de raio %.6f = %.6f\n", r, v);
    return 0;
}

double volumeEsfera(double raio) {
    const double pi = 3.14159265358979323846;
    if (raio < 0) return -1.0;
    return (4.0 / 3.0) * pi * raio * raio * raio;
}
