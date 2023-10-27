#include <stdio.h>
#include <stdlib.h>

/*(A)
procedimento/função que leia duas sequências finitas de números naturais (N)
a partir do teclado, apresente-as na tela e, depois, armazene-as em um arquivo no
formato texto. */
void sequenciaFinitaDeNumeros(int primeiraSequencia[], int segundaSequencia[]){
    // imprimindo as sequencias na tela
    printf("\nPrimeira Sequencia: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", primeiraSequencia[i]);
    }
    printf("\nSegunda Sequencia: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", segundaSequencia[i]);
    }
    FILE *arq;
    arq = fopen("ARQUIVO.txt", "w");
    if(arq == NULL){
        printf("Não foi possível abrir o arquivo.\n");
        exit(1);
    }
    // gravando as sequencias no arquivo
    // cada número das sequências é escrito no arquivo, seguido por um espaço.
    fprintf(arq, "\nPRIMEIRA SEQUENCIA: ");
    for(int i = 0; i < 5; i++) {
        fprintf(arq, "%d ", primeiraSequencia[i]);
    }
    fprintf(arq, "\n"); // quebra de linha para separa as duas sequencias
    fprintf(arq, "\nSEGUNDA SEQUENCIA: ");
    for(int i = 0; i < 5; i++) {
        fprintf(arq, "%d ", segundaSequencia[i]);
    }
    fclose(arq);
    printf("\nSequencias gravadas no arquivo com sucesso!");
}

/*(B)
procedimento/função que leia as duas sequências de números naturais a partir
do arquivo, armazene-as em dois vetores e apresente os vetores na tela.
*/
void lerSequenciaDeNumerosEmUmArquivo(int arr1[], int arr2[]) {
    FILE *file = fopen("ARQUIVO.txt", "rt");
    if (file == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        exit(1);
    }

    int temp;
    char str[20];

    // Lê a primeira sequência de números
    fscanf(file, "%s", str); // Lê "PRIMEIRA SEQUENCIA:"
    for(int i = 0; i < 5; i++) {
        fscanf(file, "%d", &temp);
        arr1[i] = temp;
    }

    fscanf(file, "%s", str); // Lê "SEGUNDA SEQUENCIA:"
    for(int i = 0; i < 5; i++) {
        fscanf(file, "%d", &temp);
        arr2[i] = temp;
    }

    fclose(file);
}

/*C) procedimento/função que gere, e apresente na tela, o conjunto A a partir da
primeira sequência e o conjunto B a partir da segunda sequência. A e B também são
vetores. Armazene os conjuntos A e B no arquivo original. OBS: todos os elementos de
um conjunto são distintos, não há elementos repetidos.*/

int existeNoConjunto(int conjunto[], int tamanho, int elemento) {
    for (int i = 0; i < tamanho; i++) {
        if (conjunto[i] == elemento) {
            return 1;
        }
    }
    return 0;
}

void gravarConjuntoNoArquivo(FILE *arq, int conjunto[], int tamanho); // prototipo da função

void criarConjunto(int sequencia[], int conjunto[], int *tamanho, char* nomeConjunto) {
    for (int i = 0; i < 5; i++) {
        if (!existeNoConjunto(conjunto, *tamanho, sequencia[i])) {
            conjunto[(*tamanho)++] = sequencia[i];
        }
    }

    FILE *arq = fopen("ARQUIVO.txt", "a");
    
    if (arq == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        exit(1); // Encerra o programa se não conseguir abrir o arquivo
    }

    fprintf(arq, "\n%s: ", nomeConjunto);
    gravarConjuntoNoArquivo(arq, conjunto, *tamanho);

    fclose(arq);
}

void imprimirConjunto(int conjunto[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", conjunto[i]);
    }
    printf("\n");
}

void gravarConjuntoNoArquivo(FILE *arq, int conjunto[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        fprintf(arq, "%d ", conjunto[i]);
    }
    fprintf(arq, "\n");
}


int main() {
        int primeiraSequencia[5]= {1,2,3,4,5};
        int segundaSequencia [5]={6,7,8,9,10};
/*a)*/  sequenciaFinitaDeNumeros(primeiraSequencia,segundaSequencia);
        
/*b)*/  lerSequenciaDeNumerosEmUmArquivo(primeiraSequencia,segundaSequencia);
/*Imprime os vetores na tela*/ //sequenciaFinitaDeNumeros(primeiraSequencia,segundaSequencia);

/*c)*/  int conjuntoA[5]={11,12,13,14,15};
        int conjuntoB[5]={16,17,18,19,20};
        int tamanhoA = 5; 
        int tamanhoB = 5;
        
        criarConjunto(conjuntoA, conjuntoA, &tamanhoA, "Conjunto A");
        criarConjunto(conjuntoB, conjuntoB, &tamanhoB, "Conjunto B");
    
        printf("\nConjunto A: ");
        imprimirConjunto(conjuntoA, tamanhoA);
        
        printf("\nConjunto B: ");
        imprimirConjunto(conjuntoB, tamanhoB);
            return 0;
}
