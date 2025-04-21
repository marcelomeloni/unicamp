/* Desenvolva um programa que leia a idade de uma pessoa e verifique se ela é maior de idade.
 */
#include <stdio.h>

int main()
{
   int idade;
    
    printf("Qual sua idade? \n");
    scanf("%d", &idade);
    
    if(idade>=18){
        printf("Você é maior de idade!");
    } else{
         printf("Você não é maior de idade!");
    }
    
    return 0;
}
