#include <stdio.h>
#include "funciones.h"

int main() {
    int numeros[10];
    float media, mediana;
    int moda, maximo, minimo;

    printf("Introduce 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    c_estadisticas(numeros, 10, &media, &moda, &mediana, &maximo, &minimo);

    printf("\nEstadisticas:\n");
    printf("Minimo: %d\n", minimo);
    printf("Maximo: %d\n", maximo);
    printf("Media: %.2f\n", media);
    printf("Mediana: %.2f\n", mediana);
    printf("Moda: %d\n", moda);

    
    

    return 0;
}