/* Faça um programa que leia o salário de um funcionário e calcule o valor de um aumento de 10%, exibindo o novo salário. */
#include <stdio.h>

int main()
{
    float salario;
    
    printf("Digite seu sálario atual: \n");
    
    scanf("%f", &salario);
    printf("O novo sálario é: %2.f", salario*1.1);

    return 0;
}
