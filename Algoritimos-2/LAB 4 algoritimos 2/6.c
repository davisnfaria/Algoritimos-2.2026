#include <stdio.h>
#include <stdlib.h>

int main() {
    int bytes, n_inteiros;
    printf("Tamanho da memoria (em bytes, multiplo de %lu): ", sizeof(int));
    scanf("%d", &bytes);
    
    n_inteiros = bytes / sizeof(int);
    int *memoria = (int *)calloc(n_inteiros, sizeof(int)); // Inicia zerado
    
    int op, pos, val;
    do {
        printf("\n1-Inserir | 2-Consultar | 0-Sair: ");
        scanf("%d", &op);
        if (op == 1) {
            printf("Posicao (0 a %d) e Valor: ", n_inteiros - 1);
            scanf("%d %d", &pos, &val);
            if(pos >= 0 && pos < n_inteiros) memoria[pos] = val;
        } else if (op == 2) {
            printf("Posicao (0 a %d): ", n_inteiros - 1);
            scanf("%d", &pos);
            if(pos >= 0 && pos < n_inteiros) printf("Valor: %d\n", memoria[pos]);
        }
    } while (op != 0);
    
    free(memoria);
    return 0;
}