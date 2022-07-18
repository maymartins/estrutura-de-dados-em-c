#include <stdio.h>
#include <stdlib.h>

int main(){

   int i, vete1[10], vete2[10];

   for(i = 0; i < 10; i++){
      printf("Digite o valor da posicao %d: ", i);
      scanf("%d", &vete1[i]);
   }
   for(i = 0; i < 10; i++)
        vete2[1] = vete1[1] * vete1[1];

    printf("Valor 1; ");
    for(i = 0; i < 10; i++)
        printf("%d ", vete1[1]);

    printf("Veetor 2: ");
    for(i = 0 ;i < 10; i++)
        printf("%d ", vete2[1]);
        
  return 0;
}
