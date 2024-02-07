//39) Escrever um algoritmo que leia um valor para uma variável n.
//Em seguida, calcule a tabuada de 1 a 10 para n. Mostre a tabuada
//na forma:
//1 x n = n
//2 x n = 2n
//3 x n = 3n
//10 x n = 10n
#include <stdio.h>

int main(void) {

    int n=0, a=1, mult=0;

    printf("Digite o valor a qual voce quer saber a tabuada: ");
    scanf("%d",&n);

    for(a=1; a<=10; a++){
        mult = a * n;
        printf("\n%d x %d = %d", n, a, mult);
    }
    
  
  return 0;
}
