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
printf("\n\n Vamos verificar se a strign %c é uma letra", string1);
        if(isalpha(string1)){
        printf("\n A String %c é uma letra ", string1);
        } else{
             printf("\n A String %c, NÃO é uma letra ", string1);

    }


 //IS DIGIT
printf("\n\n Vamos verificar se a strign %c é uma NÚMERO", string1);
//estado = isdigit(string1);
         if(isdigit(string1)){
            printf("\n A String %c é um NÚMERO ", string1);
         } else{
                 printf("\n A String %c NÃO é um NUMERO", string1);

    }
// ISUPPER
 printf("\n\n Vamos verificar se a strign %c é uma letra MAIUSCULA", string1);
         if(isupper(string1)){
            printf("\n A String %c é uma letra MAIUSCULA ", string1);
         } else{
                 printf("\n A String %c NÃO uma letra MAIUSCULA", string1);

    }
// ISLOWER
 printf("\n\n Vamos verificar se a strign %c é uma letra minuscula", string1);
         if(islower(string1)){
            printf("\n A String %c é uma letra minuscula ", string1);
         } else{
                 printf("\n A String %c NÃO uma letra minuscula", string1);

    }
 // ISALNUM
 printf("\n\n Vamos verificar se a strign %c é uma letra ou um número", string1);
         if(isalnum(string1)){
            printf("\n A String %c é uma letra ou um número", string1);
         } else{
                 printf("\n A String %c é um caractere especial (diferente de letra ou número)", string1);

    }


    return 0;
}
