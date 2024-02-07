//43) Faça um algoritmo que leia as três notas de 50 alunos de uma
//turma. Para cada aluno, calcule a média ponderada, como segue:
//MP = ( n1*2 + n2*4 + n3*3 ) / 10. Além disso, calcule a média geral
//da turma. Mostre a média de cada aluno e uma mensagem
//"Aprovado", caso a média seja maior ou igual a sete, e uma
//mensagem "Reprovado", caso contrário. Ao final, mostre a média
//geral.
    
#include <stdio.h>

int main(void) {

    float mediag=0, n1=0, n2=0, n3=0, soma=0;
    int i=0;
    for( i=0; i<=50; i++){

        printf("\nDigite a primera nota do aluno: ");
        scanf("%f", &n1);
        printf("\nDigite a segunda nota do aluno: ");
        scanf("%f", &n2);
        printf("\nDigite a terceira nota do aluno: ");
        scanf("%f", &n3);
        float mp=0;
        mp = ( n1*2 + n2*4 + n3*3 ) / 10;
        soma+= mp;
        if(mp>=7){
            printf("\nAluno aprovado");
        }else{
            printf("\nAluno reprovado");
        }
        }
        mediag = soma/i;
        printf("\nA media foi de %.2f",mediag);

  
    

    
  
  return 0;
}
