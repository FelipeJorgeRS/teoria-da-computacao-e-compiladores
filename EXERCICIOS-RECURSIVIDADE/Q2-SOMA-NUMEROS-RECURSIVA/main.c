#include <stdio.h>
#include <stdlib.h>

int somaNaturais(int n) {
    if (n == 1)
        return 1;
    else
        return n + somaNaturais(n - 1);
}

int main()
{
    int numero=0;
    int resultado=0;

   printf("Digite o numero\n");
    scanf("%d", &numero);

    resultado = somaNaturais(numero);
    printf("O resultado da soma: %d\n", resultado);
    return 0;
}
