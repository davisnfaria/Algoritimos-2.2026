#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pares = 0, impares = 0;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    int *v = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0) pares++;
        else impares++;
    }
    printf("Pares: %d, Impares: %d\n", pares, impares);
    
    free(v);
    return 0;
}