#include <stdio.h>
#include <stdlib.h>

//void PreencherArray(int tamanho);

int main() {
int *array, n;
printf("Digite o tamanho do array: ");
scanf("%d", &n);

array = AlocacaoMemoriaPorMalloc(n);

PreencherArray(array,n);

imprimir_vetor(array,n );

// Liberar a mem�ria alocada com malloc
free(array);
return 0;


}// fim da fun��o main

int AlocacaoMemoriaPorMalloc(int tamanho){
    int *vetor = (int*)malloc(tamanho * sizeof(int));
        if (vetor == NULL) {
        printf("Falha na aloca��o de mem�ria.\n");
        exit(1);
        }
        return vetor;
}// fim da fun��o AlocacaoMemoriaPorMalloc

void PreencherArray(int *vetor, int tamanho){
    int i=0;
    for (i = 0; i < tamanho; i++) {
    vetor[i] = i * 10;
    }
}// fim da fun�� PreencherArray


void imprimir_vetor (int *vetor, int tamanho){
    int i=0;
    for (i =0; i < tamanho; i++){
        printf("%d \n", vetor[i] );
    }
}// fim da fun��o imprimir_vetor

