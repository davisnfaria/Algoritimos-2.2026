#include <stdio.h>

int main() {
    int vetor[5];
    
    printf("Digite 5 numeros inteiros: \n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        if (vetor[i] % 2 == 0) {
            printf("O endereco do numero par %d eh: %p\n", vetor[i], (void*)&vetor[i]);
        }
    }
    
    return 0;
}