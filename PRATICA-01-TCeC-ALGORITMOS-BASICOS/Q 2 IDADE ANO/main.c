#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ano_nascimento=0;
    int idade_atual=0;
    int idade_em_2050=0;
    int ano_atual=0;
    char lixo="";

    // RECEBENDO O ANO DE NASCIMENTO
    printf("Digite o ano que voce nasceu: \n");
    scanf("%d", &ano_nascimento);
    scanf("%c", &lixo);

    // RECEBENDO O ANO ATUAL
    printf("Digite o ano atual : \n");
    scanf("%d", &ano_atual);
    scanf("%c", &lixo);

    //CALCULANDO A IDADE NO ANO ATUAL
    idade_atual= (ano_atual -ano_nascimento);
    //printf("A sua idade no ano de %d", ano_atual,  " será de : %d", idade_atual, "anos de idade");
    printf("A sua idade no ano de %d é de : %d anos de idade \n",ano_atual , idade_atual);

    // CALCULANDO A IDADE EM 2050
    idade_em_2050= idade_atual+ (2050 - ano_atual);
    printf("A sua idade no ano de 2050 sera de: %d  anos de idade",idade_em_2050);

   /* printf("Hello world!\n");
    return 0; */
}
