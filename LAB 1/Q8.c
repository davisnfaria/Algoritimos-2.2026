#include <stdio.h>

int valordaIpotenusa(int a, int b);

int main() {
    int a, b, hipotenusa;

    printf("Digite o valor do cateto a: ");
    if (scanf("%d", &a) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Digite o valor do cateto b: ");
    if (scanf("%d", &b) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    hipotenusa = valordaIpotenusa(a, b);
    printf("O valor da hipotenusa e: %d\n", hipotenusa);

    return 0;
}

int valordaIpotenusa(int a, int b) {
    int somaDosQuadrados = (a * a) + (b * b);
    int hipotenusa = 0;
    while (hipotenusa * hipotenusa < somaDosQuadrados) {
        hipotenusa++;
    }
    return hipotenusa;
}