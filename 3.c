//3 - Escreva um programa para determinar o consumo m�dio de um autom�vel sendo fornecida a dist�ncia total percorrida pelo autom�vel e o total de combust�vel gasto.
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


