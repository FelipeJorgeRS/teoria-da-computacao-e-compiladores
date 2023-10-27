#include <stdio.h>
#include <stdlib.h>

// ESTE PROGRAMA CONVERTE A TEMPERATURA DE GRAUS CELCIUS PARA GRAUS fahrenheit

int main()
{
    // INICIALIZAÇAO VARIAVEIS
    double temperatura_celsius= 0.0;
    double temperatura_fahrenheit =0.0;
    char lixo="";

    // ENTRADA
    printf("Digite a temperatura em graus Celcius: \n");
    scanf("%lf", &temperatura_celsius);
    scanf("%c", &lixo);


    // PROCESSAMENTO
    temperatura_fahrenheit =((temperatura_celsius * 1.8) +32) ;

    // SAÍDA
    printf_s("A temperatura convertida para fahrenheit e: %0.3lf \n",temperatura_fahrenheit );

    return 0;
}
