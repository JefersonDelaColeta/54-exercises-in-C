//38) Crie um algoritmo que o usuário entre com vários números
//inteiros e positivos e imprima o produto dos números ímpares e a
//soma dos números pares. O Algoritmo acaba quando o valor 0 for
//digitado.

#include <stdio.h>

int main(void) {
    int n=1, soma= 0;
    float produto=1;

    while(n!=0){
        printf("Digite um numero inteiro: ");
        scanf("%i", &n);
        
        if(n==0){
            printf("Proograma finalizado. "); break;
        }
        if(n%2 == 0){
            soma = n + soma;
        }if(n%2 !=0){
            produto = n * produto;
        }
    }

    printf("\nA soma dos numeros pares foi de %d", soma);
    printf("\nO produto dos numeros impares foi de %.2f", produto);

  return 0;
}
