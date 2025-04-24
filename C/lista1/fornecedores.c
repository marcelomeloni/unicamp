/******************************************************************************

Faça um programa para fazer cotação de um produto em 3 fornecedores
diferentes. O usúario irá informar os preços dos três fornecedores e você irá
mostrar o mais barato dos 3. Exiba também o produto mais caro

marcelomeloni

*******************************************************************************/
#include <stdio.h>

int main()
{

	float f1,f2,f3;
	
	printf("Digite o ppreço do 1° fornecedor:");
	scanf("%f", &f1);

	printf("Digite o preço do 2° fornecedor:");
	scanf("%f", &f2);

	printf("Digite o preço do 3° fornecedor:");
	scanf("%f", &f3);
	
	if (f1 < f2 && f1 < f3){
	    printf("O mais barato é o fornecedor 1 (%.1f) \n", f1);
	} else if(f2 < f1 && f2 < f3){
	    printf("O mais barato é o fornecedor 2 (%.1f) \n", f2);
	} else{
	    printf("O mais barato é o fornecedor 3 (%.1f) \n", f3);
	}
	
		if (f1 > f2 && f1 > f3){
	    printf("O mais caro é o fornecedor 1 (%.1f)", f1);
	} else if(f2 > f1 && f2 > f3){
	    printf("O mais caro é o fornecedor 2(%.1f)", f2);
	} else{
	    printf("O mais caro é o fornecedor 3(%.1f)", f3);
	}

	return 0;
}
