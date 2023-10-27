#include <stdio.h>
#include <stdlib.h>

int main()
{

    double primeira_nota=0.0;
    double segunda_nota=0.0;
    double terceira_nota=0.0;
    double nota_media=0.0;

    char lixo= "";

    // PRIMEIRA NOTA
    printf("Digite a primeira nota!\n");
    scanf("%d", &primeira_nota);
    scanf("%c", &lixo);

    //SEGUNDA NOTA
    printf("Digite a segunda nota!\n");
    scanf("%d", &segunda_nota);
    scanf("%c", &lixo);

    //TERCEIRA NOTA
    printf("Digite a terceira nota!\n");
    scanf("%d", &terceira_nota);
    scanf("%c", &lixo);

    // PROCESSAMENTO

    nota_media = ((primeira_nota + segunda_nota +terceira_nota ) /3);

    // SAÍDA
    printf_s("A MEDIA DAS TRES NOTAS E: %d \n",nota_media );
    //printf(nota_media);


    return 0;
}
