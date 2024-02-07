//53) Faça um programa em c que leia vários números inteiros e
//calcule o somatório dos números negativos. Considerar um
//conjunto de 50 números.

#include <stdio.h>

int main(void) {

    int i, num, soma=0;

    for(i=0; i<50; i++){
        printf("Digite numeros inteiros: ");
        scanf("%d", &num);

        if(num<0){
            soma+=num;
        }
    }
    printf("A soma  dos numeros negativos e de: %d", soma);
  return 0;
}
