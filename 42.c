//42) Escreva um algoritmo que gere o números de 1000 a 1999 e
//escreva aqueles que dividido por 11 dão resto igual a 5.
   
#include <stdio.h>

int main(void) {
    

    for ( int a=1000; a<2000; a++){
        
        if(a%11 == 5){
            printf("\n%d", a);
        }
    
    }
  return 0;
}
