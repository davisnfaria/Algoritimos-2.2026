#include <stdio.h>

void somaa(int *a, int *b);

int main() {
    int a, b;
    
    printf("Digite os valores de A e B: \n");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    
    somaa(&a, &b);
    
    printf("O valor de A (soma) eh: %d | O valor de B eh: %d\n", a, b);
    
    return 0;
}

void somaa(int *a, int *b) {
    *a = *a + *b;
}