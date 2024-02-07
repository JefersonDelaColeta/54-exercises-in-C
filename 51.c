//51) Em uma eleição presidencial existem quatro candidatos. Os
//votos são informados através de códigos. Os dados utilizados
//para a contagem dos votos obedecem à seguinte codificação: -
//1,2,3,4 = voto para os respectivos candidatos; -5 = voto nulo; -6 =
//voto em branco; Elabore um algoritmo que leia o código do
//candidato em um voto. Calcule e escreva: -total de votos para
//cada candidato; -total de votos nulos; - total de votos em branco;
//Há um total de 20 eleitores.
    
#include <stdio.h>

int main(void) {
  int candidato=0, i;
    int a=0,b=0,c=0,d=0;
    int votosnulos=0, votosbrancos=0;

    for (i = 0; i < 20; i++) {
    printf("Digite o código do voto: ");
    scanf("%d", &candidato);
            if(candidato==1){
            a++;
        }   if(candidato==2){
            b++;
        }   if(candidato==3){
            c++;
        }   if(candidato==4){
            d++;
        }   if(candidato==5){
            votosnulos++;
        }   if(candidato==6){
            votosbrancos++;
        }  
        
    }

        printf("\nO candidato 1 teve %d votos", a);
        printf("\nO candidato 2 teve %d votos", b);
        printf("\nO candidato 3 teve %d votos", c);
        printf("\nO candidato 4 teve %d votos", d);
        printf("\nO candidato 5 teve %d votos", votosnulos);
        printf("\nO candidato 6 teve %d votos", votosbrancos);
        
  return 0;
}
