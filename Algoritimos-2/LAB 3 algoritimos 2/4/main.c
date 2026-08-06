#include <stdio.h>
#include <string.h>
#include "pessoa.h"

int main() {
    char nome[50];
    int idade;
    
    printf("Digite o nome da pessoa: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove o enter do final
    
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);
    
    Pessoa p = criarPessoa(nome);
    p.idade = idade; // Atribuindo a idade lida
    
    mostrarPessoa(p);
    
    return 0;
}
