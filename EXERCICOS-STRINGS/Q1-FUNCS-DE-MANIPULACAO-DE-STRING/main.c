#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
setlocale(LC_CTYPE, "");

    char string1;
    char string2;
    int numero=1;
    char caractereEspecial;
    //int estado=0;
    char lixo="";

    // ENTRADAS
    scanf("%c", &string1);
    scanf("%c", &lixo);

//IS ALPHA
printf("\n Vamos verificar se a strign %d é uma letra", string1);
printf("Digite um caractere: \n");
scanf("%c", &string1);
//estado = isalpha(palavra1);

 if(isalpha(string1)){
    printf("\n A String %d é uma letra ", numero);
 } else{
         printf("\n A String %d, NÃO é uma letra ", numero);

 }

/*
 //IS DIGIT
printf("\n Vamos verificar se a strign %d é uma NÚMERO", numero);
estado = isdigit(numero);
 printf("%d",estado);

 if(estado==0){
    printf("\n A String %d é um NÚMERO ", numero);
 } else{
         printf("\n A String %d NÃO é um NUMERO", numero);

 }
 */
    return 0;
}
