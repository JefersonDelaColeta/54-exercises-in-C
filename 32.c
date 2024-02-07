//32) Faça um algoritmo que receba números positivos até que o
//número zero seja digitado. Calcule e mostre ao final: a soma de
//todos os números digitados, a quantidade de números digitados,
//a média dos números digitados, o maior número digitado; o
//menor número digitado, a média dos números pares digitados, a
//porcentagem de números ímpares digitados; 

#include <stdio.h>
int main (){
	 
	 float media, soma=0, somapar=0, mediapar=0, somaimp=0, porcimp=0, qntdporcimp=0;
	 int n[10], cont = 0, maior = 0, menor = 100,npar=0, nimp=0;
	 
	 while (cont <10){
         
	 	printf("\nDigite um numero:");
	 	scanf("%i", &n[cont]);
         
         soma = soma + n[cont];
              
         
	 	
	 	if(n[cont]== 0){
	 		printf("\nPrograma finalizado"); break;
		 }  if (n[cont] >= maior){
			maior = n[cont];
        }if (n[cont] < menor){
            menor = n[cont];
        }if(n[cont] % 2 == 0){
            somapar + n[cont];
            npar++;
        } if (somapar / 2){
            somapar = mediapar;
        }if (n[cont] % 2 != 0){
            nimp++;
        }
         
		 cont ++;
         porcimp = nimp / 100;
         qntdporcimp = porcimp * soma;
	 }
	 media = soma/n[cont];   
	 qntdporcimp = (nimp / soma)* 100;

   
    
    
    
    printf("\nSoma %.2f", soma);
    printf("\nA quantidade de numeros digitados foi de %i", cont);
    printf("\nA media da soma %.2f", media);
    printf("\nO maior numero digitado foi %i", maior);
    printf("\nO menor numero digitado foi %i", menor);
    printf("\nA quantidade de numeros pares foi de %i", npar);
    printf("\nA media de numeros pares foi de %.2f", media);
    printf("\nA porcentagem de numeros impares foi de %.2f%%", qntdporcimp );
}
	
	
	
	

