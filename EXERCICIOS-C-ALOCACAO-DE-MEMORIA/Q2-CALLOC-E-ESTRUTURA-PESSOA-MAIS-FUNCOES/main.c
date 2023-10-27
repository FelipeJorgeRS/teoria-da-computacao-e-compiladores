#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
    char CPF[12];
    char nome[50];
    double salario;
};

void PreencherArray(struct Pessoa *vetor, int tamanho) {
    int i = 0;
    for (i = 0; i < tamanho; i++) {
        printf("Digite o CPF da pessoa %d: ", i + 1);
        scanf("%s", vetor[i].CPF);
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", vetor[i].nome);
        printf("Digite o salário da pessoa %d: ", i + 1);
        scanf("%lf", &vetor[i].salario);
    }
}

void imprimir_vetor(struct Pessoa *vetor, int tamanho) {
    int i = 0;
    for (i = 0; i < tamanho; i++) {
        printf("CPF: %s\n", vetor[i].CPF);
        printf("Nome: %s\n", vetor[i].nome);
        printf("Salário: %.2lf\n", vetor[i].salario);
        printf("\n");
    }
}

struct Pessoa *AlocacaoMemoriaPorCalloc(int tamanho) {
    struct Pessoa *vetor = (struct Pessoa *) calloc(tamanho, sizeof(struct Pessoa));
    if (vetor == NULL) {
        printf("Falha na alocação de memória.\n");
        return NULL;
    }
    return vetor;
}

int main() {
    int n;

    printf("Digite o tamanho do array: ");
    scanf("%d", &

           n);

    struct Pessoa *vetor = AlocacaoMemoriaPorCalloc(n);

    PreencherArray(vetor, n);

    imprimir_vetor(vetor, n);

    free(vetor);

    return 0;
}
