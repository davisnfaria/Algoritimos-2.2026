#include <stdio.h>

int maiorNumero(int a, int b);

int main () {
    int n1, n2, maior;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    maior = maiorNumero(n1, n2);
    printf("O maior numero entre %d e %d eh: %d\n", n1, n2, maior);
    return 0;
}

int maiorNumero(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}