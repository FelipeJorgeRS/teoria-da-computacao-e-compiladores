#include <stdio.h>
#include <stdlib.h>

int main()
{
 double num_usuario =0.0;
 char lixo= "";

    // ENTRADA
    printf("Digite o numero que voce quer ver na tabuada!\n");
    scanf("%d", &num_usuario);
    scanf("%c", &lixo);


    printf_s("A TABUADA E: \n");
    printf_s("%d * 0 = %d \n" , num_usuario, num_usuario* 0 );
    printf_s("%d * 1 = %d \n" , num_usuario, num_usuario* 1 );
    printf_s("%d * 2 = %d \n" , num_usuario, num_usuario* 2 );
    printf_s("%d * 3 = %d \n" , num_usuario, num_usuario* 3 );
    printf_s("%d * 4 = %d \n" , num_usuario, num_usuario* 4 );
    printf_s("%d * 5 = %d \n" , num_usuario, num_usuario* 5 );
    printf_s("%d * 6 = %d \n" , num_usuario, num_usuario* 6 );
    printf_s("%d * 7 = %d \n" , num_usuario, num_usuario* 7 );
    printf_s("%d * 8 = %d \n" , num_usuario, num_usuario* 8 );
    printf_s("%d * 9 = %d \n" , num_usuario, num_usuario* 9 );
    printf_s("%d * 10 = %d \n" , num_usuario, num_usuario* 10 );



    return 0;
}
