#include <stdio.h>

void frac(float num, int *inteiro, float *frac);

int main() {
    float numero, fracionario;
    int inteiro;
    
    printf("Digite um numero real (ex: 5.75): \n");
    scanf("%f", &numero);
    
    frac(numero, &inteiro, &fracionario);
    
    printf("O valor inteiro eh: %d \nO valor fracionado eh: %f \n", inteiro, fracionario);
    
    return 0;
}

void frac(float num, int *inteiro, float *frac) {
    *inteiro = (int)num;            // Converte para int para truncar
    *frac = num - *inteiro;         // Subtrai a parte inteira para sobrar a fração
}