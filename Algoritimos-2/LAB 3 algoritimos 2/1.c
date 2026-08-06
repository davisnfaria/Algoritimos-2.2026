#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = (int *)malloc(5 * sizeof(int));
    if (vetor == NULL) return 1;

    printf("Digite 5 numeros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("Numeros digitados:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    return 0;
}
