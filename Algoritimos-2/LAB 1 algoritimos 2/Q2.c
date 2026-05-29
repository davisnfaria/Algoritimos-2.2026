#include <stdio.h>

int imprimirDataExtenso(int dia, int mes, int ano); 

int main() {
    int dia, mes, ano;
    printf("Digite dia mês ano: ");
    if (scanf("%d %d %d", &dia, &mes, &ano) != 3) return 1;
    printf("Data: %02d/%02d/%04d, Imprimir: ", dia, mes, ano);
    imprimirDataExtenso(dia, mes, ano);
    return 0;
}

int imprimirDataExtenso(int dia, int mes, int ano){
    const char *meses[] = {
        "janeiro","fevereiro","março","abril","maio","junho",
        "julho","agosto","setembro","outubro","novembro","dezembro"
    };
    if (mes < 1 || mes > 12) {
        printf("Mês inválido\n");
        return 0;
    }
    printf("%d de %s de %d\n", dia, meses[mes - 1], ano);
}