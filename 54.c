//54) Escrever um programa em C que l� 10 valores, um de cada vez,
//e conta quantos deles est�o no intervalo [10,20] e quantos deles
//est�o fora do intervalo, escrevendo estas informa��es

#include <stdio.h>

int main(void) {
    
  int i, num, a=0, b=0;

    for(i=0; i<10; i++){
        printf("Digite numeros inteiros: ");
        scanf("%d", &num);
    if(num >= 10 && num <=20){
        a++;
    }else {b++;}
    }
    printf("\nHa %d numeros de 10 a 20", a);
    printf("\nTem %d numeros fora do intervalo", b);
  return 0;
}
