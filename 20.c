//20) Em uma escola, um aluno passa direto se obtiver média final
//maior ou igual a 7. Se a média for inferior a 4, ele está reprovado
//direto, sem direito a prova final. Em outro caso, ele vai à final, e a
//nota que ele precisa para passar é o que falta à média final para
//completar 10. Faça um programa que receba as duas notas
//parciais, calcule a média final e informe ao aluno sua situação.
//Inclusive informando a ele quanto precisa tirar na final, se este for
//o seu caso. 

#include<stdio.h>

int main (){
	
	float a, b, media, exame;
	
	printf("Digite a primeira nota do aluno: ");
	scanf("%f", &a);
	
	printf("Digite a segunda nota do aluno: ");
	scanf("%f", &b);
	
	media = ((a+b)/2);
	if(media >= 7){
		printf("O aluno passou direto: ");
	} else if (media < 4){
		printf("O aluno foi reprovado: ");
	}else if (media >= 4 && media < 7){
		printf("aluno de recuperação");
		exame = 10 - media;
		printf("\nNota necessaria: %.2f", exame);
	}
	
}
