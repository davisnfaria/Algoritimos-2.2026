#include <stdio.h>

int main() {
    float vetor[10];
    
    for (int i = 0; i < 10; i++) {
        printf("A posicao de %d eh: %p\n", i, (void*)&vetor[i]);
    }
    
    return 0;
}