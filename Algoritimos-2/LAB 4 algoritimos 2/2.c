#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *vetor = (int *)malloc(n * sizeof(int));
    if (vetor == NULL) return 1;

    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Vetor lido: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    
    free(vetor);
    return 0;
}