//43) Fa�a um algoritmo que leia as tr�s notas de 50 alunos de uma
//turma. Para cada aluno, calcule a m�dia ponderada, como segue:
//MP = ( n1*2 + n2*4 + n3*3 ) / 10. Al�m disso, calcule a m�dia geral
//da turma. Mostre a m�dia de cada aluno e uma mensagem
//"Aprovado", caso a m�dia seja maior ou igual a sete, e uma
//mensagem "Reprovado", caso contr�rio. Ao final, mostre a m�dia
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
