#include <stdio.h>

int main() {
    int vetor[5];
    
    printf("Digite 5 numeros inteiros: \n");
    
    for (int i = 0; i < 5; i++) {
        // Leitura sem usar &vetor[i]
        scanf("%d", vetor + i); 
    }
    
    printf("\nO dobro dos numeros digitados:\n");
    for (int i = 0; i < 5; i++) {
        // Acesso ao conteúdo e cálculo do dobro sem usar vetor[i]
        int dobro = 2 * (*(vetor + i)); 
        printf("%d\n", dobro);
    }
    
    return 0;
}