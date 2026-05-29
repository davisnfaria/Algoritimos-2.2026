#include <stdio.h>

void triangulo(int n);

int main() {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);

    triangulo(n);
    return 0;
}

void triangulo(int n) {
    for(int i = 1; i <= n; i++) {
        int espacos = n - i;
        int asteriscos = 2 * i - 1;

        for(int j = 0; j < espacos; j++) {
            printf(" ");
        }
        for(int j = 0; j < asteriscos; j++) {
            printf("*");
        }
        printf("\n");
    }
}