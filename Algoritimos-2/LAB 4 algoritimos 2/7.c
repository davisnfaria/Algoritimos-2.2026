#include <stdio.h>
#include <stdlib.h>

int main() {
    int sorteados[6], aposta[6], acertos = 0;
    printf("Digite os 6 numeros sorteados:\n");
    for(int i=0; i<6; i++) scanf("%d", &sorteados[i]);
    
    printf("Digite os 6 numeros da sua aposta:\n");
    for(int i=0; i<6; i++) scanf("%d", &aposta[i]);
    
    for(int i=0; i<6; i++) {
        for(int j=0; j<6; j++) {
            if(aposta[i] == sorteados[j]) acertos++;
        }
    }
    
    int *vet_acertos = (int *)malloc(acertos * sizeof(int));
    int idx = 0;
    for(int i=0; i<6; i++) {
        for(int j=0; j<6; j++) {
            if(aposta[i] == sorteados[j]) vet_acertos[idx++] = aposta[i];
        }
    }
    
    printf("Sorteados: ");
    for(int i=0; i<6; i++) printf("%d ", sorteados[i]);
    printf("\nSeus Acertos: ");
    for(int i=0; i<acertos; i++) printf("%d ", vet_acertos[i]);
    
    free(vet_acertos);
    return 0;
}