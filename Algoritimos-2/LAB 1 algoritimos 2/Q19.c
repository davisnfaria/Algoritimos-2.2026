#include <stdio.h>

int fatorial(int n);

int main () {
    int n, resultado;
    printf("Digite um numero inteiro nao negativo:\n");
    scanf("%d", &n);
    resultado = fatorial(n);
    printf("Fatorial de %d eh: %d\n", n, resultado);
}

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}