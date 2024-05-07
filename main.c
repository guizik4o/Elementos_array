#include <stdio.h>
#include <stdlib.h>

void encontraMaiorElemento(int array[], int tamanho, int *maior, int *ocorrencias) {

    *maior = array[0];
    *ocorrencias = 1;

    for (int i = 1; i < tamanho; i++) {
        if (array[i] > *maior) {
            *maior = array[i];
            *ocorrencias = 1;
        } else if (array[i] == *maior) {
            (*ocorrencias)++;
        }
    }
}

int main(int argc, char *argv[]) {
	
    int array[] = {5, 2, 15, 3, 7, 15, 8, 6, 15};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int maior, ocorrencias;

    encontraMaiorElemento(array, tamanho, &maior, &ocorrencias);

    printf("Maior elemento: %d\n", maior);
    printf("Numero de ocorrencias: %d\n", ocorrencias);

    return 0;
}
