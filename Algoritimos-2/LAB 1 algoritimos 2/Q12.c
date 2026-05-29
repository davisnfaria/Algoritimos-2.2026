#include <stdio.h>

int somaAlgarismos(int numero);

int main() {
    int numero, soma;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    if (numero < 0) {
        printf("Numero invalido! Deve ser positivo.\n");
        return 1;
    }
    soma = somaAlgarismos(numero);
    printf("A soma dos algarismos de %d eh: %d\n", numero, soma);
    return 0;
}
int somaAlgarismos(int numero) {
    int soma = 0;
    while (numero > 0) {
        soma += numero % 10; // Adiciona o ultimo algarismo
        numero /= 10;        // Remove o ultimo algarismo
    }
    return soma;
}