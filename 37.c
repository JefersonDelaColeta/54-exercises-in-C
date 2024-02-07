//37) Faça um algoritmo que determine e escreva: a maior idade
//dos habitantes, a quantidade de indivíduos do sexo feminino cuja
//idade está entre 18 e 35 anos inclusive e que tenham olhos verdes
//e cabelos louros.
//A pesquisa se encerra quando a idade digitada for negativa.

#include <stdio.h>
int main(void) {

    int sexo, olhos, idade=1, a=0, maiori=0, cabelo;
    
    while(idade >0){
    printf("\n\nDigite sua idade: ");
    scanf("%d", &idade);
        if(idade <= 0){break;}
        

    printf("\nDigite 1 para sexo masculino e 2 para feminino: ");
    scanf("%d", &sexo);

    switch(sexo)
        {
         case 1:
         printf("Masculino");break;
         case 2: 
         printf("Feminino"); break;
         default :
         printf ("Valor invalido!");
        }

        printf("\n\nDigite 1 para cabelo louros, 2 para cabelos castanhos, 3 para pretos: ");
    scanf("%d", &cabelo);
        
        switch(cabelo)
        {
         case 1:
         printf("Loiro");break;
         case 2: 
         printf("Castanhos"); break;
            case 3:
         printf("preto"); break;
         default :
         printf ("Valor invalido!");
        }

    printf("\n\nDigite a cor dos olhos, 1 para azuis, 2 para verdes, 3 para castanhos: ");
    scanf("%d", &olhos);

    switch(olhos)
        {
         case 1:
         printf("Azul");break;
         case 2: 
         printf("Verde"); break;
            case 3:
         printf("Castanhos"); break;
         default :
         printf ("Valor invalido!");
        }
        if(idade >= 18 && idade <=35){
            if(olhos == 2){
                if(cabelo == 1){
                    a++;
                }
            }
        }
        
    }

     printf ("Total feminino é de: %d", a);
    
  return 0;
}
