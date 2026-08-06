#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char sobrenome[50];
    int ano_nascimento;
} Aluno;

int main() {
    int n;
    printf("Numero de alunos: ");
    scanf("%d", &n);
    
    Aluno *alunos = (Aluno *)malloc(n * sizeof(Aluno));
    
    for(int i = 0; i < n; i++) {
        printf("\nAluno %d - Matricula: ", i+1);
        scanf("%d", &alunos[i].matricula);
        printf("Sobrenome: ");
        scanf("%s", alunos[i].sobrenome);
        printf("Ano Nascimento: ");
        scanf("%d", &alunos[i].ano_nascimento);
    }
    
    printf("\n--- DADOS DOS ALUNOS ---\n");
    for(int i = 0; i < n; i++) {
        printf("%d | %s | %d\n", alunos[i].matricula, alunos[i].sobrenome, alunos[i].ano_nascimento);
    }
    
    free(alunos);
    return 0;
}