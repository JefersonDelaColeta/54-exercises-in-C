//50) Escreva um algoritmo em C que realize a multiplica��o de A por
//B, ou seja, A * B, atrav�s de adi��es (somas). Esses dois valores
//s�o inseridos pelo usu�rio. EX: transformar 4*3 em 4+4+4.

#include <stdio.h>

int main(void) {
    
  int a, b, soma=0, i;
    
      printf("Digite A: ");
      scanf("%d", &a);
      printf("Digite B: ");
      scanf("%d", &b);
    for(i=0; i < b; i++){
        soma +=a;
    }
    printf("A * B = %d\n", soma);

  return 0;
}
