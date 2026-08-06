#include <stdio.h>
#include <stdlib.h>

void aloca_e_processa(int n) {
    char *str = (char *)malloc((n + 1) * sizeof(char));
    printf("Digite a string: ");
    scanf(" %100[^\n]", str); // Lê até a quebra de linha

    printf("String sem vogais: ");
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c!='a' && c!='e' && c!='i' && c!='o' && c!='u' &&
            c!='A' && c!='E' && c!='I' && c!='O' && c!='U') {
            printf("%c", c);
        }
    }
    printf("\n");
    free(str);
}

int main() {
    int n;
    printf("Tamanho da string: ");
    scanf("%d", &n);
    aloca_e_processa(n);
    return 0;
}