#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x, count = 0;
    printf("Digite N: ");
    scanf("%d", &n);
    
    int *v = (int *)malloc(n * sizeof(int));
    printf("Digite os %d elementos:\n", n);
    for(int i = 0; i < n; i++) scanf("%d", &v[i]);
    
    printf("Digite X: ");
    scanf("%d", &x);
    
    for(int i = 0; i < n; i++) {
        if(v[i] % x == 0) count++;
    }
    printf("Existem %d multiplos de %d no vetor.\n", count, x);
    
    free(v);
    return 0;
}