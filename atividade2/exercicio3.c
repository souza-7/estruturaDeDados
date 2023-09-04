#include <stdio.h>

int busca_string(char *arr[], int tamanho, char *busca) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(arr[i], busca) == 0) {
            return 1; 
        }
    }
    return 0; 
}
