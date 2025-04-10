// Escreva um programa que solicite ao usuário o primeiro elemento a de uma progressão aritmética (PA), a razão r desta PA, e o número n de elementos da PA.
// Apresente na tela todos os elementos da PA. Lembre-se que uma PA pode ser crescente ou decrescente.

#include <stdio.h>

int main()
{
    
    //formula pa -> an = a1 + (i-1)r
    
   float a1, r, n, an;
   
    printf("Digite o primeiro termo: ");
    scanf("%f", &a1);
    
    printf("Digite a razão: ");
    scanf("%f", &r);
    
    printf("Digite a quantidade de termos: ");
    scanf("%f", &n);
    
    for(int i = 1; i <= n; i++){
        an = (a1 + (i - 1) * r );
        printf("%.2f, ", an);
    }
    
    return 0;
}
