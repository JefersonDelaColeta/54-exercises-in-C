//41) Uma empresa deseja aumentar seus pre�os em 20%. Fa�a um
//algoritmo que leia o c�digo e o pre�o de custo de cada produto e
//calcule o pre�o novo. Calcule tamb�m, a m�dia dos pre�os com e
//sem aumento. Mostre o c�digo e o pre�o novo de cada produto e,
//no final, as m�dias. H� um total de 100 produtos.

#include <stdio.h>

int main(void) {
  int cod=0, produtos = 0;
  float valor=0, medias=0, mediaca=0, soma=0, reajuste=0, somac=0;

    for(produtos = 0; produtos <100; produtos++){

    printf("\nDigite o codigo do produto:");
    scanf("%i", &cod);

    printf("\nDigite o valor do produto:");
    scanf("%f", &valor);
        
        soma+=valor;
        reajuste = valor * 1.2;
        somac+=reajuste;
      
        
        if(cod == 0){break;};
        
        printf("\nO codigo do produto � %i, e o valor com reajuste � de; %.2f", cod,reajuste);
    }
    
    medias = soma / produtos;
    mediaca = somac/produtos;
    printf("\n A media sem reajuste � de %.2f",medias);
     printf("\n A media com reajuste � de %.2f",mediaca);
  return 0;
}
