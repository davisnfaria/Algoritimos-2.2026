#include <stdio.h>

int dobro(int valor);

int main() {
    int num; 

    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("O dobro de %d eh %d.\n", num, dobro(num));
    return 0;
}

int dobro(int valor) {
    return valor * 2;
}