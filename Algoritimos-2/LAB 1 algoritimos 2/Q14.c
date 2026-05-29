#include <stdio.h>

float consumokm(int distancia, int litros);

int main() {
    int distancia, litros;
    float consumo;
    printf("Digite a distancia percorrida em km: ");
    if (scanf("%d", &distancia) != 1) return 1;
    printf("Digite a quantidade de litros consumidos: ");
    if (scanf("%d", &litros) != 1) return 1;

    consumo = consumokm(distancia, litros);

    if (litros > 0)
        printf("Consumo = %.2f km/l\n", consumo);

    return 0;
}

float consumokm(int distancia, int litros){
    if (litros <= 0) {
        printf("Erro: quantidade de litros inválida (deve ser > 0).\n");
        return 0.0f;
    }

    float consumo = (float)distancia / (float)litros;

    if (consumo < 8.0f) {
        printf("Venda o carro!\n");
    } else if (consumo <= 14.0f) {
        printf("Econômico!\n");
    } else {
        printf("Super econômico!\n");
    }

    return consumo;
}