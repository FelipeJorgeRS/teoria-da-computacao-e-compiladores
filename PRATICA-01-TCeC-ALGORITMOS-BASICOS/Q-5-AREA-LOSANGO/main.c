#include <stdio.h>
#include <stdlib.h>

int main()
{
    // INICIANDO VARIAVEIS
    double area =0.0;
    double diagonal_Maior=0.0;
    double diagonal_menor=0.0;
    char lixo="";

    // ENTRADAS
    printf("Digite o tamanho da diagonal Maior: \n");
    scanf("%lf", &diagonal_Maior);
    scanf("%c", &lixo);

    printf("Digite o tamanho da diagonal menor: \n");
    scanf("%lf", &diagonal_menor);
    scanf("%c", &lixo);

    // PROCESSAMENTO
    area= ((diagonal_Maior * diagonal_menor)/2);

    // IMPRIMINDO O RESULTADO NA TELA
    // SAÍDA // imprime 3 casas decimais. comando de impressão(0.3)
    printf_s("A area do losango e: %0.3lf \n",area );

    return 0;
}
