//35) Faça um algoritmo que leia vários números e informe quantos
//desses números entre 100 e 200 foram digitados. Quando o valor
//0 (zero) for lido o algoritmo deverá cessar sua execução.


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
