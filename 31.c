//31) João tem 1,45 m de altura e Maria tem 1,57. João cresce 0,23m
//por ano enquanto Maria cresce 0,15m. Faça um algoritmo que
//mostre as alturas de João e Maria, ano a ano, até que João seja
//maior que Maria, respondendo no final quantos anos serão
//necessários para que João seja o mais alto dos dois.

#include <stdio.h>

int main() {
    float altjoao = 1.45, altmaria = 1.57, crescjoao = 0.23, crescmaria = 0.15;
    int anos = 0;

    while (altjoao <= altmaria) {
        altjoao += crescjoao;
        altmaria += crescmaria;
        anos++;
    }

    printf("Altura de Joao: %.2fm \n Altura de Maria: %.2fm \nSendo necessários um total de %d anos\n", altjoao, altmaria, anos);
}
	



