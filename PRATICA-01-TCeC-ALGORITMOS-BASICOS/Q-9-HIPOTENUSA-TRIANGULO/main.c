#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    //VARIAVEIS
    double cateto_b =0.0;
    double cateto_c =0.0;
    double hipotenusa_a =0.0;
    double cateto_quadrado_b =0.0;
    double cateto_quadrado_c =0.0;
    double hipotenusa_quadrada_a =0.0;


    char lixo="";

    // ENTRADAS
    printf("DIGITE O VALOR DO PRIMEIRO CATETO(B): \n");
    scanf("%lf", &cateto_b);
    scanf("%c", &lixo);

    printf("DIGITE O VALOR DO PRIMEIRO CATETO(C) \n");
    scanf("%lf", &cateto_c);
    scanf("%c", &lixo);

    //PROCESSSAMENTO
    cateto_quadrado_b= pow(cateto_b, 2);
    cateto_quadrado_c= pow(cateto_c, 2);
    hipotenusa_quadrada_a= cateto_quadrado_b + cateto_quadrado_c;
    hipotenusa_a =sqrt(hipotenusa_quadrada_a);

    //SAIDA
    printf_s("O VALOR DA HIPOTENUSA E: %0.3lf .\n", hipotenusa_a);


    return 0;
}
