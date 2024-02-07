//18) Dois carros percorreram diferentes distâncias em diferentes
//tempos. Sabendo que a velocidade média é a razão entre a
//distância percorrida e o tempo levado para percorrê-la, faça um
//programa que leia as distâncias que cada carro percorreu e o
//tempo que cada um levou, e indique o carro que teve maior
//velocidade média (desconsidere velocidades iguais). 

#include <stdio.h>
int main () {
	
		float a, b, c, d, med1, med2;
	
	printf("Digite a distancia percorrida do carro um: ");
	scanf("%f", &a);
	
	printf("Digite o tempo gasto pelo carro um: ");
	scanf("%f", &b);
	
	printf("Digite a distancia percorrida do carro dois: ");
	scanf("%f", &c);
	
	printf("Digite o tempo gasto pelo carro dois: ");
	scanf("%f", &d);
	
	med1 = a/b;
	med2 = c/d;
	if(med1<med2){
		printf("Carro um foi mais rapido");
	}else if(med1 == med2){
		printf("Ambos tiveram o mesmo desempenho");
	}else{
		printf("Carro dois foi mais rapido");
	}
}
