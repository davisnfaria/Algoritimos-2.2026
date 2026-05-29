#include <stdio.h>

float calcularMedia(float a, float b, float c, char tipoMedia);

int main() {
    int nota1, nota2, nota3;
    char tipo;

    printf("Digite tres notas inteiras: ");
    scanf("%d %d %d", &nota1, &nota2, &nota 3);
    printf("Digite o tipo de media (A para aritmetica, P para ponderada): ");
    scanf(" %c", &tipo);
    if(tipo != 'A' && tipo != 'P') {
        printf("Tipo de media invalido!\n");
        return 1;
    }
    float media = calcularMedia(nota1, nota2, nota3, tipo);
    printf("A media calculada eh: %.2f\n", media);
    return 0;
}

float calcularMedia(float a, float b, float c, char tipoMedia) {
    if (tipoMedia == 'A') {
        return (a + b + c) / 3.0;
    } else if (tipoMedia == 'P') {
        return (a * 5 + b * 3 + c * 2) / 10.0;
    }
    return 0.0;
}