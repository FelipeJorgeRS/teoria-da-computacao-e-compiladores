#include <stdio.h>
#include <stdlib.h>

int main()
{


    //INICIANDO VARIAVES
    double  valor_sal_minimo_atual=0.0;
    double salario_funcionario=0.0;
    double quantidade_sal_minimos=0.0;
    char lixo="";

    // ENTRADAS
    printf("Digite o valor do salario minimo atual: \n " );
    scanf("%lf", &valor_sal_minimo_atual);
    scanf("%c", &lixo);


    printf("Digite seu salario atual: \n");
    scanf("%lf", &salario_funcionario);
    scanf("%c", &lixo);

    //PROCESSAMENTO// concede 25% de aumento no salário
     quantidade_sal_minimos=  (salario_funcionario/valor_sal_minimo_atual);

     // SAÍDA
    printf_s("Voce recebe: %0.3lf salarios minimos. \n",quantidade_sal_minimos );

    return 0;
}
