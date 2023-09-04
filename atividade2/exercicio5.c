#include <stdio.h>

void multiplica_array(int arr1[], int arr2[], int resultado[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = arr1[i] * arr2[i];
    }
}

int main() {
    int arr1[] = {5, 7, 9, 6};
    int arr2[] = {5, 7, 9, 6};
    int resultado[4];

    int soma = soma_array(arr1, 4);
    printf("Soma: %d\n", soma);

    int menor, maior;
    menor_maior_array(arr1, 4, &menor, &maior);
    printf("Menor: %d, Maior: %d\n", menor, maior);

    char *strings[] = {"texto", "J", "EDA"};
    int existe = busca_string(strings, 3, "EDO");
    printf("Existe: %d\n", existe);

    int ocorrencias = conta_int_array(arr1, 4, 7);
    printf("Ocorrências de 7: %d\n", ocorrencias);

    multiplica_array(arr1, arr2, resultado, 4);
    printf("Resultado da multiplicação: [%d, %d, %d, %d]\n", resultado[0], resultado[1], resultado[2], resultado[3]);

    return 0;
}