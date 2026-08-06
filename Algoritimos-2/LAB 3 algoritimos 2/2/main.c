#include <stdio.h>
#include "mstring.h"

int main() {
    char texto[100];
    
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);
    
    // Remove o '\n' inserido pelo fgets
    int len = mstrlen(texto);
    if(len > 0 && texto[len-1] == '\n') {
        texto[len-1] = '\0';
    }
    
    printf("\nTamanho da string: %d\n", mstrlen(texto));
    printf("Quantidade de vogais: %d\n", mcount_vogais(texto));
    
    mstrupper(texto);
    printf("Em maiusculas: %s\n", texto);
    
    mremove_espacos(texto);
    printf("Sem espacos: %s\n", texto);
    
    if(meh_palindromo(texto)) {
        printf("A string (sem espacos) eh um palindromo!\n");
    } else {
        printf("A string (sem espacos) nao eh um palindromo.\n");
    }
    
    return 0;
}
