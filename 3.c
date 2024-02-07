//3 - Escreva um programa para determinar o consumo médio de um automóvel sendo fornecida a distância total percorrida pelo automóvel e o total de combustível gasto.
#include <stdio.h>

int main () {
	float x, y, media;
	
	printf ("Digite a distancia maxima percorrida: ");
	scanf("%f", &x);
	
	printf ("Digite o total de combustivel gasto: ");
	scanf("%f", &y);
	
	media = x/y;
	
	printf ("O consumo medio de seu veiculo foi de %.2f km/l ", media);
	

}


