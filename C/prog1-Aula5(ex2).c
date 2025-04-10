// Escreva um programa que leia tantos números quanto o usuário desejar. Apresente na tela a quantidade de números lidos e a soma deles.
#include <stdio.h>

int main() {
    float num, soma = 0;
    int qtd = 0;

    printf("Digite numeros (qualquer letra para parar):\n");
    
    while(1) {
        if(scanf("%f", &num) != 1) break;
        soma += num;
        qtd++;
    }

    printf("\nNumeros lidos: %d\nSoma total: %.2f\n", qtd, soma);
    return 0;
}