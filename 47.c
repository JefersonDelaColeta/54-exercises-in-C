//47) Escreva um algoritmo que receba 10 números do usuário e
//imprima o cubo de cada número

#include <stdio.h>

int main(void) {
    int i = 0, a=0;

    for(i=0; i<10; i++){
        printf("\nDigite um numero: ");
        scanf("%d", &a);
        float cubo = a * a *a;
        printf("\nO cubo de %d é %.2f ",i, cubo);
    }
  
  return 0;
}
