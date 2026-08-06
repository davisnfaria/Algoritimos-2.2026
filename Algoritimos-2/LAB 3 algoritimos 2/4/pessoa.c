#include <stdio.h>
#include "pessoa.h"
// Usamos string.h aqui apenas internamente para a atribuição da struct, 
// pois a restrição de bibliotecas aplicava-se apenas ao exercício 2.
#include <string.h> 

Pessoa criarPessoa(char nome[]) {
    Pessoa p;
    strcpy(p.nome, nome);
    // A idade não é passada no protótipo original da folha, 
    // então inicializamos com 0, ou a função no main a atualizará.
    // Vamos apenas instanciar.
    p.idade = 0; 
    return p;
}

void mostrarPessoa(Pessoa p) {
    printf("Dados da Pessoa:\n");
    printf("- Nome: %s\n", p.nome);
    printf("- Idade: %d anos\n", p.idade);
}