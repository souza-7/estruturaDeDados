#include <stdio.h>

int conta_int_array(int arr[], int tamanho, int busca) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] == busca) {
            contador++;
        }
    }
    return contador;
}