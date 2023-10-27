#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //VARIAVEIS
    double raio=0.0;
    double comprimento=0.0;
    double area=0.0;
    double volume =0.0;
    char lixo="";
    const double PI= 3.14159;

    // ENTRDADA
    printf("DIGITE O VALOR DO RAIO: \n");
    scanf("%lf", &raio);
    scanf("%c", &lixo);

    //PROCESSAMENTO & IMPRESSAO
    // COMPRIMENTO
    comprimento= (2 *PI *raio);
    printf_s("O COMPRIMENJTO DA ESFERA E : %lf \n", comprimento);

    // AREA USANDO O DIAMETRO
    area=(PI *(pow(raio,2)));
    printf_s("A AREA DA ESFERA E : %lf \n", area);

    //VOLUME
    volume=((3/4) * PI *(pow(raio,3)));
    printf_s("O VOLUME DA ESFERA E : %lf \n", volume);







    return 0;
}
