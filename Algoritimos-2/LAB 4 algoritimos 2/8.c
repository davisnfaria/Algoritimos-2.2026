#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v = (int *)calloc(1500, sizeof(int));
    int zeros = 0;
    
    // a) Verificar se tem 1500 zeros
    for(int i = 0; i < 1500; i++) {
        if(v[i] == 0) zeros++;
    }
    printf("Quantidade de zeros iniciais: %d\n", zeros);
    
    // b) Atribuir o índice
    for(int i = 0; i < 1500; i++) v[i] = i;
    
    // c) Mostrar 10 primeiros e 10 últimos
    printf("10 Primeiros: ");
    for(int i = 0; i < 10; i++) printf("%d ", v[i]);
    printf("\n10 Ultimos: ");
    for(int i = 1490; i < 1500; i++) printf("%d ", v[i]);
    
    free(v);
    return 0;
}