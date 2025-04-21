/******************************************************************************

Desenvolva um programa que exiba a tabuada de um número fornecido pelo usuário, utilizando um loop for.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int num;
   printf("Quer ver a tabuada de qual numero? Digite: \n");
   scanf("%d", &num);
   
   printf("----------------------\n");
   printf("TABUADA DO %d \n", num);
   for (int i = 0; i <= 10; i++){
       
       
       printf("%d x %d = %d \n", num, i, num*i);
   }
    return 0;
}
