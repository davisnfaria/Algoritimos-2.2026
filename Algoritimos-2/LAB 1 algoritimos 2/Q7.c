#include <stdio.h>
#include <stdlib.h>

double celsuisparaFahrenheit(double celsius);

int main() {
    double celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    if (scanf("%lf", &celsius) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    fahrenheit = celsuisparaFahrenheit(celsius);
    printf("A temperatura em Fahrenheit e: %.2f\n", fahrenheit);

    return 0;
}

double celsuisparaFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
