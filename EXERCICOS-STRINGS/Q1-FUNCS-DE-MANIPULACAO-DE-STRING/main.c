#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
setlocale(LC_CTYPE, "");

    char string1;
    char string2;

    char caractereEspecial;
    char lixo="";

    printf("Digite uma sequencia de caractere quaisquer: \n");
    scanf("%c", &string1);
    scanf("%c", &lixo);

//IS ALPHA
printf("\n\n Vamos verificar se a strign %c � uma letra", string1);
        if(isalpha(string1)){
        printf("\n A String %c � uma letra ", string1);
        } else{
             printf("\n A String %c, N�O � uma letra ", string1);

    }


 //IS DIGIT
printf("\n\n Vamos verificar se a strign %c � uma N�MERO", string1);
//estado = isdigit(string1);
         if(isdigit(string1)){
            printf("\n A String %c � um N�MERO ", string1);
         } else{
                 printf("\n A String %c N�O � um NUMERO", string1);

    }
// ISUPPER
 printf("\n\n Vamos verificar se a strign %c � uma letra MAIUSCULA", string1);
         if(isupper(string1)){
            printf("\n A String %c � uma letra MAIUSCULA ", string1);
         } else{
                 printf("\n A String %c N�O uma letra MAIUSCULA", string1);

    }
// ISLOWER
 printf("\n\n Vamos verificar se a strign %c � uma letra minuscula", string1);
         if(islower(string1)){
            printf("\n A String %c � uma letra minuscula ", string1);
         } else{
                 printf("\n A String %c N�O uma letra minuscula", string1);

    }
 // ISALNUM
 printf("\n\n Vamos verificar se a strign %c � uma letra ou um n�mero", string1);
         if(isalnum(string1)){
            printf("\n A String %c � uma letra ou um n�mero", string1);
         } else{
                 printf("\n A String %c � um caractere especial (diferente de letra ou n�mero)", string1);

    }


    return 0;
}
