#include <stdio.h>
#include <stdlib.h>

int main()
{
    //INICIALIZAÇÃO VAR
    double peso_pessoa=0.0;
    double novo_peso=0.0;
    char lixo="";

    // ENTRADAS

    printf("Digite seu peso atual em kg: \n");
    scanf("%lf", &peso_pessoa);
    scanf("%c", &lixo);

    // PROCESSAMENTO
    novo_peso= ((peso_pessoa)+(peso_pessoa * 0.15));// aumentando 15%
    printf_s("Seu peso aumentou 15%%. Seu novo peso : %0.3lf  kg. \n",novo_peso);

    novo_peso= ((peso_pessoa )+(peso_pessoa* 0.20));// aumentando 20%
    printf_s("Seu peso aumentou 20%%. Seu novo peso : %0.3lf  kg. \n",novo_peso);


    return 0;
}
