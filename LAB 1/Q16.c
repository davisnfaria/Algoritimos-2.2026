#include <stdio.h>

int desenha_linha(int n) {
    for (int i = 0; i < n; i++) {
        printf("=");
    }
    return 0;
}

int main() {
    int n;

    printf("Digite o numero de linhas para o quadrado:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        desenha_linha(n);
    }

    return 0;
}