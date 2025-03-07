#include <stdio.h>
#include <stdbool.h>

int main() {
    int opcao, num;
    float num1, num2;

    do {
        printf("\nCalculadora Simples:\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Verificar se o numero e par ou impar\n");
        printf("6. Verificar se o numero e primo\n");
        printf("8. Fatorial\n");
        printf("7. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);  // Aqui, o %d está correto, pois estamos lendo um int

        switch(opcao) {
            case 1:  // Soma
                printf("Digite dois numeros\n");
                scanf("%f %f", &num1, &num2);  // Aqui, usamos %f para float
                printf("Resultado da soma: %.2f\n", num1 + num2);  // %.2f para limitar a duas casas decimais
                break;

            case 2:  // Subtracao
                printf("Digite dois numeros\n");
                scanf("%f %f", &num1, &num2);
                printf("Resultado da subtracao: %.2f\n", num1 - num2);
                break;

            case 3:  // Multiplicacao
                printf("Digite dois numeros\n");
                scanf("%f %f", &num1, &num2);
                printf("Resultado da multiplicacao: %.2f\n", num1 * num2);
                break;

            case 4:  // Divisao
                printf("Digite dois numeros\n");
                scanf("%f %f", &num1, &num2);
                if (num2 == 0) {
                    printf("Erro! Divisao por zero.\n");
                } else {
                    printf("Resultado da divisao: %.2f\n", num1 / num2);  // Usando %.2f para mostrar resultado com casas decimais
                }
                break;

            case 5:  // Verificar se é par ou ímpar
                printf("Digite um numero: ");
                scanf("%f", &num1); 
                if ((int)num1 % 2 == 0) { 
                    printf("O numero %.0f e par.\n", num1);
                } else {
                    printf("O numero %.0f e impar.\n", num1);
                }
                break;

            case 6:  // Verificar se é primo
                printf("Digite um numero: ");
                scanf("%f", &num1); 
                int n = (int)num1;  
                int isPrime = 1;
                if (n <= 1) {
                    isPrime = 0;
                } else {
                    for (int i = 2; i * i <= n; i++) {
                        if (n % i == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                }
                if (isPrime) {
                    printf("O numero %.0f e primo.\n", num1);
                } else {
                    printf("O numero %.0f nao e primo.\n", num1);
                }
                break;

            case 7:  // Sair
                printf("Saindo da calculadora...\n");
                break;

            case 8:  // Fatorial
                printf("Digite um numero: \n");
                scanf("%d", &num);

                int mult = 1;

                // Calcula o fatorial
                for (int i = 1; i <= num; i++) {
                    mult *= i;
                }

                printf("%d é o fatorial de %d\n", mult, num);
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 7);  // O loop continuará até a opção 7 (Sair)

    return 0;
}
