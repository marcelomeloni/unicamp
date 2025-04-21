/******************************************************************************

            Escreva um programa que leia um número e exiba todos os números de 0 até esse número, utilizando um loop while.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, i;
    i = 0;
   printf("Digite um número inteiro: \n");
   scanf("%d", &num);
   
   while (i <= num){
       printf("%d \n", i);
        i++;
   }
}
