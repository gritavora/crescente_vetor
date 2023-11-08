#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

void ordenar_vetor(int vetor[], int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[i] > vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

int main() {
    int vetor[7];
    int valor;

    for (valor = 0; valor < 7; valor++) {
        printf("Digite um valor %d:\n", valor);
        scanf("%d", &vetor[valor]);
    }

    ordenar_vetor(vetor, 7);

    printf("Valores ordenados em ordem crescente:\n");
    for (valor = 0; valor < 7; valor++) {
        printf("%d ", vetor[valor]);
    }
    printf("\n");
}

