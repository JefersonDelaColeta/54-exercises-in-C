//53) Fa�a um programa em c que leia v�rios n�meros inteiros e
//calcule o somat�rio dos n�meros negativos. Considerar um
//conjunto de 50 n�meros.

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
