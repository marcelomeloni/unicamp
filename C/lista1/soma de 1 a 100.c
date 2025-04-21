/******************************************************************************

Faça um programa que calcule a soma dos números de 1 a 100 utilizando um loop for.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, soma = 0;

    for (i = 1; i <= 100; i++) {
        soma += i; // soma = soma + i
    }

    printf("A soma dos números de 1 a 100 é: %d\n", soma);

    return 0;
}
