#include <stdio.h>

int main() {
    int vari = 10;
    int *ponteiroi = &vari;
    
    float varf = 5.5;
    float *ponteirof = &varf;
    
    char varc = 'A';
    char *ponteiroc = &varc;

    printf("Antes da modificacao:\n");
    printf("Int: %d | Float: %.2f | Char: %c\n", vari, varf, varc);

    // Modificando os valores usando os ponteiros
    *ponteiroi = 50;
    *ponteirof = 12.3;
    *ponteiroc = 'X';

    printf("\nApos a modificacao:\n");
    printf("Int: %d | Float: %.2f | Char: %c\n", vari, varf, varc);

    return 0;
}