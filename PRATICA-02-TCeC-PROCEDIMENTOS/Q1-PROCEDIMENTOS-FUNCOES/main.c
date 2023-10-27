#include <stdio.h>
#include <stdlib.h>


/*(A)
procedimento/função que leia duas sequências finitas de números naturais (N)
a partir do teclado, apresente-as na tela e, depois, armazene-as em um arquivo no
formato texto. */
int sequenciaFinitaDeNumeros(int primeiraSequencia[] , int segundaSequencia []){
    // imprimindo as sequencias na tela
    printf("Primeira Sequencia: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", primeiraSequencia[i]);
    }
    printf("\nSegunda Sequencia: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", segundaSequencia[i]);
    }
    FILE *arq;
    arq =fopen("ARQUIVO.txt", "w");
       if(arq == NULL){
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
       }
    // gravando as sequencias no arquivo
    // cada número das sequências é escrito no arquivo, seguido por um espaço.
    fprintf(arq, "PRIMEIRA SEQUENCIA: ");
    for(int i = 0; i < 5; i++) {
        fprintf(arq, "%d ", primeiraSequencia[i]);
    }
    fprintf(arq, "\n"); // quebra de linha para separa as duas sequencias
    fprintf(arq, "SEGUNDA SEQUENCIA: ");
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
int lerSequenciaDeNumerosEmUmArquivo(int arr1[], int *size1, int arr2[], int *size2) {
    FILE *file = fopen("ARQUIVO.txt", "rt");
    if (file == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
    }

    int temp; //armazenar temporariamente cada número lido do arquivo.

    // Lê a primeira sequência de números
    while (fscanf(file, "%d", &temp) == 1) {
        arr1[(*size1)++] = temp;
    }

    // Lê a segunda sequência de números
    while (fscanf(file, "%d", &temp) == 1) {
        arr2[(*size2)++] = temp;
    }

    fclose(file);
}


int main()
{
        int primeiraSequencia[]= {1,2,3,4,5};
        int segundaSequencia []={6,7,8,9,10};
/*a)*/  sequenciaFinitaDeNumeros(primeiraSequencia,segundaSequencia);

/*b)*/ int tamanhoArray1= sizeof(primeiraSequencia);
       int tamanhoArray2= sizeof(segundaSequencia);
       lerSequenciaDeNumerosEmUmArquivo(primeiraSequencia,tamanhoArray1,segundaSequencia,tamanhoArray2);


    return 0;
}
