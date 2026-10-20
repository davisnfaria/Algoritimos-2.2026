#include <stdio.h>

void comparar_conteudo(int *p1, int *p2);

int main() {
    int a, b;
    printf("Digite dois valores para compara-los: \n");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    
    comparar_conteudo(&a, &b);
    return 0;
}

void comparar_conteudo(int *p1, int *p2) {
    if (p1 > p2) {
        printf("O conteudo do maior endereco eh: %d\n", *p1);
    } else {
        printf("O conteudo do maior endereco eh: %d\n", *p2);
    }
}