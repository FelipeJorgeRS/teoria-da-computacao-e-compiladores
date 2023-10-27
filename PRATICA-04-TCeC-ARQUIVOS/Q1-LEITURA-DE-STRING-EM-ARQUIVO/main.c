#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int tamanho_string (char *str){
    if(*str =='\0') // '\0' � o ultimo caractere de leitura
    {
        return 0;
    } else{
    return 1 + tamanho_string(str +1);
    }
}

void inverte_string(char*str, int i, int j) // i � o primeiro indice da string. j � o ultimo. essses dois parametros delimitam o tamnho da string.
{
    if(i<j){
        char temp =str[i];
        str[i]= str[j];
        str[j]= temp;
        inverte_string(str, i+1, j-1);
    }
}


int main()
{
   setlocale(LC_CTYPE, "");
   FILE *arq;
   char str[] ="brilhar!";
   int tamanho= tamanho_string(str);

   // abrindo o arquivo no modo anexa��o(adicionar o tamanho do arquivo no final do arquivo)
   arq =fopen("ARQUIVO.txt", "at");
   if(arq == NULL){
    printf("N�o foi poss�vel abrir o arquivo.\n");
    return 1;
   }

   // escrevendo o tamanho da string no proprio arquivo
   fprintf(arq, "o tamanho da string \"%s\" �: %d\n",str, tamanho);

    printf("O tamanho da string foi escrito no arquivo.\n");

    inverte_string(str,0,strlen(str) - 1);// a fun��o strlen obtem o tamnho total da string. -1 porque o �ndice come�a em 1.
    fprintf(arq,"A sting inversa �: \"%s\" ", str );
    printf("A string foi invertida e escrita no arquivo.\n");

    //fechando o arquivo
    fclose(arq);

    return 0;
}
