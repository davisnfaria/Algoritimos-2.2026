#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v = NULL;
    int num, tamanho = 0;
    
    while(1) {
        printf("Digite um numero (negativo para parar): ");
        scanf("%d", &num);
        if (num < 0) break;
        
        tamanho++;
        v = (int *)realloc(v, tamanho * sizeof(int));
        v[tamanho - 1] = num;
    }
    
    printf("Vetor final: ");
    for(int i = 0; i < tamanho; i++) printf("%d ", v[i]);
    
    free(v);
    return 0;
}