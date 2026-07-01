#include <stdio.h>

void calc_esfera(float R, float *area, float *volume);

int main() {
    float raio, area, volume;
    
    printf("Digite o raio da esfera: \n");
    scanf("%f", &raio);
    
    calc_esfera(raio, &area, &volume);
    
    printf("Area: %.2f \nVolume: %.2f\n", area, volume);
    
    return 0;
}

void calc_esfera(float R, float *area, float *volume) {
    float pi = 3.14159;
    *area = 4.0 * pi * (R * R);
    *volume = (4.0 / 3.0) * pi * (R * R * R);
}