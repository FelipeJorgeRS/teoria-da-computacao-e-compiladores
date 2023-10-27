#include <stdio.h>
#include <stdlib.h>

int main()
{
    //INICIANDO VARIAVES
    double salario_atual=0.0;
    double novo_salario=0.0;
    char lixo="";

    // ENTRADAS
    printf("Digite seu salario atual: \n");
    scanf("%lf", &salario_atual);
    scanf("%c", &lixo);

    //PROCESSAMENTO// concede 25% de aumento no salário
     novo_salario= ( salario_atual+ (salario_atual *0.25));

     // SAÍDA
    printf_s("O seu novo salario e: %lf \n",novo_salario );

     return 0;
}
