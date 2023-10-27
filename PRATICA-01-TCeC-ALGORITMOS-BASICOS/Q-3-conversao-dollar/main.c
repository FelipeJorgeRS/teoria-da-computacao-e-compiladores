#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valorReal=0.0;
    double valorDollar=0.0;
    double cotacao=0.0;
    char lixo="";

    // RECEBENDO A COTAÇÃO
     printf("Digite o valor a cotacao do dolar: \n");
    scanf("%lf", &cotacao);
    scanf("%c", &lixo);

    // RECEBENDO OS DOLLARS
     printf("Quantos dollars voce tem: \n");
    scanf("%lf", &valorDollar);
    scanf("%c", &lixo);

    // PROCESSAMENTO
   valorReal =(valorDollar * cotacao);


   // IMPRIMINDO O RESULTADO

    printf_s("Voce tem: R$ %lf Reais referente a: $ %lf Dollars \n",valorReal, valorDollar );



    return 0;
}
