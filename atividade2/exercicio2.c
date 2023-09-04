#include <stdio.h>

void menor_maior_array(int arr[], int tamanho, int *menor, int *maior) {
    *menor = *maior = arr[0];
    for (int i = 1; i < tamanho; i++) {
        if (arr[i] < *menor) {
            *menor = arr[i];
        }
        if (arr[i] > *maior) {
            *maior = arr[i];
        }
    }
}