//48) Escreva um algoritmo que receba 15 números e imprima
//quantos números maiores que 30 foram digitados.
    
#include <stdio.h>

int main(void) {

    int i = 0, a=0, b=0;

    for(i=0; i<15; i++){
        printf("\nDigite um numero: ");
        scanf("%d", &a);
        if(a>=30){
            b++;
        }
        
    }
        printf("Foram digitados %d numeros maiores que trinta", b);
  return 0;
}
