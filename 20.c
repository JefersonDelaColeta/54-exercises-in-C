//20) Em uma escola, um aluno passa direto se obtiver m�dia final
//maior ou igual a 7. Se a m�dia for inferior a 4, ele est� reprovado
//direto, sem direito a prova final. Em outro caso, ele vai � final, e a
//nota que ele precisa para passar � o que falta � m�dia final para
//completar 10. Fa�a um programa que receba as duas notas
//parciais, calcule a m�dia final e informe ao aluno sua situa��o.
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
		printf("aluno de recupera��o");
		exame = 10 - media;
		printf("\nNota necessaria: %.2f", exame);
	}
	
}
