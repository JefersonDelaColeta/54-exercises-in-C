//35) Fa�a um algoritmo que leia v�rios n�meros e informe quantos
//desses n�meros entre 100 e 200 foram digitados. Quando o valor
//0 (zero) for lido o algoritmo dever� cessar sua execu��o.


#include <stdio.h>

int main(void) {
  int a=-1, b=0;
    
    while(a!=0){
        
        printf("Digite um numero: ");
         scanf("%i", &a);
       
        if(a==0){
            printf("Programa finalizado"); break;
        }if(b >= 100 && b <= 200){
            b++;
        }
    }
    printf("%d", b);
  return 0;
}
