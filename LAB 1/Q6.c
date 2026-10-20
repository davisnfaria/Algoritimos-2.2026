#include <stdio.h>

int conversorSegundos(int horas, int minutos, int segundos);

int main() {
    int horas, minutos, segundos, totalSegundos;

    printf("Digite o valor das horas, minutos e segundos: \n");
    if (scanf("%d %d %d", &horas, &minutos, &segundos) != 3) {
        printf("Entrada invalida.\n");
        return 1;
    }

    totalSegundos = conversorSegundos(horas, minutos, segundos);
    printf("O total em segundos e: %d\n", totalSegundos);

    return 0;
}

int conversorSegundos(int horas, int minutos, int segundos) {
    return horas * 3600 + minutos * 60 + segundos;
}