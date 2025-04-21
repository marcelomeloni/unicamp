/* Escreva um programa que leia o salário de um funcionário e exiba o valor do imposto de renda a ser pago, com base nas seguintes faixas de tributação:
até R$ 1.903,98 (isento)
de R$ 1.903,99 a R$ 2.826,65 (7,5%)
de R$ 2.826,66 a R$ 3.751,05 (15%)
de R$ 3.751,06 a R$ 4.664,68 (22,5%)
acima de R$ 4.664,68 (27,5%)..
 */
#include <stdio.h>

int main()
{
  float salario, imposto;
  
  printf("Qual seu salario? \n");
  scanf("%f", &salario);
  
  if(salario <= 1903.98){
      printf("Seu imposto é R$ 0");
  } else if(salario <= 2826.65){
      imposto = salario*0.075;
       printf("Seu imposto é R$ %f", imposto);
  } else if(salario <=  3751.05){
       imposto = salario*0.15;
       printf("Seu imposto é R$ %f", imposto);
  } else if(salario <= 4664.68){
       imposto = salario*0.225;
       printf("Seu imposto é R$ %f", imposto);
  } else if(salario > 4664.68){
       imposto = salario*0.275;
       printf("Seu imposto é R$ %f", imposto);
  }
    return 0;
}
