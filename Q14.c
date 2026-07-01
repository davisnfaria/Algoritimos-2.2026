#include <stdio.h>

void calcular_medias(float n1, float n2, float *media_simples, float *media_ponderada);

int main() {
    float n1, n2, media_s, media_p;
    
    printf("Digite as duas notas: \n");
    if (scanf("%f %f", &n1, &n2) != 2) return 1;
    
    calcular_medias(n1, n2, &media_s, &media_p);
    
    printf("Media Simples: %.2f\n", media_s);
    printf("Media Ponderada: %.2f\n", media_p);
    
    return 0;
}

void calcular_medias(float n1, float n2, float *media_simples, float *media_ponderada) {
    *media_simples = (n1 + n2) / 2.0;
    // Assumindo peso 1 para a n1 e peso 2 para a n2, conforme padrão de avaliações
    *media_ponderada = ((n1 * 1.0) + (n2 * 2.0)) / 3.0; 
}