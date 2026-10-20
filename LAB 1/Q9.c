#include <stdio.h>

double volumedoCilindro(double raio, double altura);
#define PI 3.14159

int main() {
    double raio, altura, volume;

    printf("Digite o valor do raio e a altura do cilindro: \n");
    scanf("%lf %lf", &raio, &altura);

    volume = volumedoCilindro(raio, altura);
    printf("O volume do cilindro e: %.2f\n", volume);
}

double volumedoCilindro(double raio, double altura) {
    return PI * raio * raio * altura;
}