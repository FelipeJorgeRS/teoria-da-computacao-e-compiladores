#include <stdio.h>
#include <stdlib.h>

struct Veiculo{
char chassi[10];
char marca[10];
char modelo[6];
double preco;
};
// Aloca��o din�mica de mem�ria usando malloc
struct Veiculo* AlocacaoMemoriaPorMalloc(int tamanho){
   struct Veiculo *array = (struct Veiculo*)malloc(tamanho * sizeof(struct Veiculo));
        if (array == NULL) {
        printf("Falha na aloca��o de mem�ria.\n");
        return NULL;
        }
        return array;
}

// PRENCHER VETOR
void PreencherArray(struct Veiculo *vetor, int tamanho) {
    int i = 0;

    for (i = 0; i < tamanho; i++) {
        printf("Digite o NUMERO DO CHASI %d: ", i + 1);
        scanf("%s", vetor[i].chassi);
        printf("Digite a MARCA do veiculo %d: ", i + 1);
        scanf("%s", vetor[i].marca);
        printf("Digite o MODELO do veiculo %d: ", i + 1);
        scanf("%s", vetor[i].modelo);
        printf("Digite o PRE�O do veiculo %d: ", i + 1);
        scanf("%lf", vetor[i].preco);

    }
}


// Imprimir o array antes da realoca��o
void imprimirArray (struct Veiculo *vetor , int tamanho){
printf("Array (antes da realoca��o): ");
    int i=0;
     for (i = 0; i < tamanho; i++) {
        printf("CHASSI: %s\n", vetor[i].chassi);
        printf("MARCA: %s\n", vetor[i].marca);
        printf("MODELO: %s\n", vetor[i].modelo);
        printf("PRE�O: %.2lf\n", vetor[i].preco);
        printf("\n");
    }
}


// REALLOC: Realocar o array para um tamanho maior
struct Veiculo* RealocNovoTamanho (struct Veiculo* vetor, int novo_tamanho){

    vetor = (struct Veiculo *)realloc(vetor, novo_tamanho * sizeof(struct Veiculo));
    if (vetor == NULL) {
    printf("Falha na realoca��o de mem�ria.\n");
    return NULL;
    } // FIM DO IF
    return vetor;
} // fim da fun��o REALLOC


//MAIN
int main() {
int tamanho=0;


printf("Digite o tamanho inicial do vetor: ");
scanf("%d", &tamanho);


struct Veiculo*vetor= AlocacaoMemoriaPorMalloc(tamanho);

PreencherArray(vetor, tamanho);

imprimirArray(vetor, tamanho);

int novo_tamanho=0;
printf("Digite o novo tamanho do vetor: ");
scanf("%d", &novo_tamanho);
RealocNovoTamanho(vetor, novo_tamanho);

imprimirArray(vetor, novo_tamanho);

free(vetor);
return 0;
    }
// parei debiugando o c�digo
//FIM
