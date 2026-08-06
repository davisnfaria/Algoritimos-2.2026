#include <stdio.h>
#include "conversor.h"

int main() {
    int op;
    float temp;
    
    do {
        printf("\nMenu:\n");
        printf("1 - Converter Celsius -> Fahrenheit\n");
        printf("2 - Converter Fahrenheit -> Celsius\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        
        if (op == 1) {
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temp);
            printf("Resultado: %.2f Fahrenheit\n", celsius_fahrenheit(temp));
        } else if (op == 2) {
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temp);
            printf("Resultado: %.2f Celsius\n", fahrenheit_celsius(temp));
        }
    } while (op != 0);
    
    return 0;
}
