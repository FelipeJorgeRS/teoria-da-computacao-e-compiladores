#include <stdio.h>
#include <stdlib.h>

int potencializacao(int x, int n) {
    if (n == 0) // SEGUNDO O AXIOMA MATEMÁTICO: TODO NUMERO ELEVADO A 0 RETORNA 1.
        return 1;
    else
        return x * potencializacao(x, n - 1);
}

int main() {
    int base = 0;
    int expoente = 0;
    int resultado = 0;

    printf("Digite a base\n");
    scanf("%d", &base);

    printf("Digite o expoente\n");
    scanf("%d", &expoente);

    resultado = potencializacao(base, expoente);
    printf("O resultado da potencia: %d\n", resultado);

    return 0;
}
