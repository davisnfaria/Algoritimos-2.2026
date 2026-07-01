#include <stdio.h>

int dobrar_e_somar(int *a, int *b);

int main() {
    int a, b, soma;
    
    printf("Digite dois numeros: \n");
    scanf("%d %d", &a, &b);
    
    soma = dobrar_e_somar(&a, &b);
    
    printf("Variaveis dobradas: A=%d, B=%d\n", a, b);
    printf("A soma dos dobros das variaveis: %d\n", soma);
    
    return 0;
}

int dobrar_e_somar(int *a, int *b) {
    *a = *a * 2;
    *b = *b * 2;
    return *a + *b;
}