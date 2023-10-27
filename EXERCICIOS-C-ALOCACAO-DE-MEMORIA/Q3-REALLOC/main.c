#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

struct Veiculo{
char chassi[10];
char marca[10];
char modelo[6];
double preco;
};

struct Veiculo* AlocacaoMemoriaPorMalloc(int tamanho){
   struct Veiculo *array = (struct Veiculo*)malloc(tamanho * sizeof(struct Veiculo));
        if (array == NULL) {
        printf("Falha na alocação de memória.\n");
        return NULL;
        }
        return array;
}

void PreencherArray(struct Veiculo *vetor, int inicio, int fim) //inicio e fim: especificam o intervalo de índices que devem ser preenchidos no array.
{
    int i = 0;

    for (i = inicio; i < fim; i++) {
        printf("Digite o NUMERO DO CHASI %d: ", i + 1);
        scanf("%s", vetor[i].chassi);
        printf("Digite a MARCA do veiculo %d: ", i + 1);
        scanf("%s", vetor[i].marca);
        printf("Digite o MODELO do veiculo %d: ", i + 1);
        scanf("%s", vetor[i].modelo);
        printf("Digite o PREÇO do veiculo %d: ", i + 1);
        scanf("%lf", &vetor[i].preco);

    }
}

void imprimirArray (struct Veiculo *vetor , int tamanho){
printf("Array (antes da realocação): ");
    int i=0;
     for (i = 0; i < tamanho; i++) {
        printf("CHASSI: %s\n", vetor[i].chassi);
        printf("MARCA: %s\n", vetor[i].marca);
        printf("MODELO: %s\n", vetor[i].modelo);
        printf("PREÇO: %.2lf\n", vetor[i].preco);
        printf("\n");
    }
}

struct Veiculo* RealocNovoTamanho (struct Veiculo* vetor, int novo_tamanho){

    vetor = (struct Veiculo *)realloc(vetor, novo_tamanho * sizeof(struct Veiculo));
    if (vetor == NULL) {
    printf("Falha na realocação de memória.\n");
    return NULL;
    } // FIM DO IF
    return vetor;
} // fim da função REALLOC

int main() {
setlocale(LC_CTYPE, "");
int tamanho=0;

printf("Digite o tamanho inicial do vetor: ");
scanf("%d", &tamanho);

struct Veiculo*vetor= AlocacaoMemoriaPorMalloc(tamanho);

PreencherArray(vetor, 0, tamanho);

imprimirArray(vetor, tamanho);

int novo_tamanho=0;
printf("Digite o novo tamanho do vetor: ");
scanf("%d", &novo_tamanho);

vetor = RealocNovoTamanho(vetor, novo_tamanho);

PreencherArray(vetor, tamanho, novo_tamanho);

imprimirArray(vetor, novo_tamanho);

free(vetor);
return 0;
}
