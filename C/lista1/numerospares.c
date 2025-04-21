/******************************************************************************

Escreva um programa que leia um número e exiba todos os números pares entre 1 e esse número, utilizando um loop while.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, i = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    while(i <= num) {
        if(i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
