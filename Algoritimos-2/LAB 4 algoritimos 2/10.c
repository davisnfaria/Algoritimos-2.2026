#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Quantos valores deseja armazenar (>= 10)? ");
    scanf("%d", &n);
    if(n < 10) n = 10;
    
    double *v = (double *)malloc(n * sizeof(double));
    
    for(int i = 0; i < 10; i++) {
        v[i] = rand() % 101; // Valores de 0 a 100
    }
    
    printf("Os 10 primeiros valores sao:\n");
    for(int i = 0; i < 10; i++) {
        printf("%.2f ", v[i]);
    }
    
    free(v);
    return 0;
}