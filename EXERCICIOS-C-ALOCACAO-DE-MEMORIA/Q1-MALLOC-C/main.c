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

// Liberar a memória alocada com malloc
free(array);
return 0;


}// fim da função main

int AlocacaoMemoriaPorMalloc(int tamanho){
    int *vetor = (int*)malloc(tamanho * sizeof(int));
        if (vetor == NULL) {
        printf("Falha na alocação de memória.\n");
        exit(1);
        }
        return vetor;
}// fim da função AlocacaoMemoriaPorMalloc

void PreencherArray(int *vetor, int tamanho){
    int i=0;
    for (i = 0; i < tamanho; i++) {
    vetor[i] = i * 10;
    }
}// fim da funçã PreencherArray


void imprimir_vetor (int *vetor, int tamanho){
    int i=0;
    for (i =0; i < tamanho; i++){
        printf("%d \n", vetor[i] );
    }
}// fim da função imprimir_vetor

