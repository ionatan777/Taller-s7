#include <stdio.h>
#include "funciones.h"

void o_numeros(int *numeros, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (numeros[i] > numeros[j]) {
                int temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }
}

void c_moda(int *numeros, int n, int *moda) {
    int maxCount = 0;
    *moda = numeros[0];
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (numeros[j] == numeros[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            *moda = numeros[i];
        }
    }
}

void c_estadisticas(int *numeros, int n, float *media, int *moda, float *mediana, int *maximo, int *minimo) {
    int suma = 0;
    *maximo = numeros[0];
    *minimo = numeros[0];

    for (int i = 0; i < n; i++) {
        suma += numeros[i];
        if (numeros[i] > *maximo) {
            *maximo = numeros[i];
        }
        if (numeros[i] < *minimo) {
            *minimo = numeros[i];
        }
    }

    *media = (float)suma / n;

    o_numeros(numeros, n);
    
    if (n % 2 == 0) {
        *mediana = (numeros[n / 2 - 1] + numeros[n / 2]) / 2.0;
    } else {
        *mediana = numeros[n / 2];
    }

    c_moda(numeros, n, moda);
}