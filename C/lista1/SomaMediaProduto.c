/* Escreva um programa que leia 3 números inteiros. Apresente a soma, média e o produto dos números. */

#include <stdio.h>

int main()
{
float n1, n2, n3, Soma, Média, Produto;

printf("Digite 3 números inteiros:\n");
scanf("%f" "%f" "%f", &n1, &n2, &n3);

Soma = n1 + n2 + n3;
Média = Soma/3;
Produto = n1 * n2 * n3;

printf("Soma: %f \n Média: %f \n Produto: %f", Soma, Média, Produto);
	return 0;
}
