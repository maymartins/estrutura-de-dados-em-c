#include <stdio.h>
#include <stdlib.h>



int main () {
    int i,quant[10];
    float valor[10];
    float valorParcial, valorTotal;


    
    for(i = 0; i < 10; i++){
        printf("Digite valor unitário e quantidade vendida: ");
        scanf("%f%d", &valor[i], &quant[i]);
    }
	printf("\n");
    for(i = 0; i < 10; i++){
        valorParcial = quant[i] + valor[i];
        printf("Vendido: %d\tValor unitário R$%.2f\tValor totalR$%.2f\n", quant[i], valor[i], valorP0arcial);
        valorTotal += valorParcial;
    }


    return 0;
}






