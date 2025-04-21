/* Faça um programa que leia três números e exiba o maior entre eles.
 */
#include <stdio.h>

int main()
{
  float n1, n2, n3;
  
  printf("Digite três números:\n");
  scanf("%f" "%f" "%f", &n1, &n2, &n3);
  
  if (n1 > n2 & n1 > n3){
      printf("%f é o maior número", n1);
  } else if((n2 > n1 & n2 > n3)){
       printf("%f é o maior número", n2);
  } else{
       printf("%f é o maior número", n3);
  }
    
    return 0;
}
