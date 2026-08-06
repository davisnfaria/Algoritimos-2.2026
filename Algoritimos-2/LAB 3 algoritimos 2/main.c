#include <stdio.h>
#include "operacoes.h"

int main() {
    int op, a, b;
    
    printf("Menu de Operacoes:\n");
    printf("1. Soma\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n");
    printf("Escolha uma operacao: ");
    scanf("%d", &op);
    
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    
    switch(op) {
        case 1: printf("Resultado: %d\n", soma(a, b)); break;
        case 2: printf("Resultado: %d\n", subtrai(a, b)); break;
        case 3: printf("Resultado: %d\n", multiplica(a, b)); break;
        case 4: printf("Resultado: %d\n", divide(a, b)); break;
        default: printf("Operacao invalida!\n");
    }
    return 0;
}
