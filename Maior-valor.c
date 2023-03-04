/*  3 Construa uma fun��o que receba como par�metro um vetor de inteiros com 10 valores aleat�rios
entre 0 e 6, preenchidos automaticamente. A fun��o deve determinar o maior elemento e o n�mero
de vezes que ele ocorre no vetor. Por exemplo, para o vetor [1, 3, 5, 5, 2, 4, 5, 3, 1, 0] a fun��o deve
determinar o valor 5 e indicar que ele ocorreu 3 vezes. A fun��o deve ser do tipo void e o programa
deve, ap�s a execu��o da fun��o, listar o vetor e apresentar os valores manipulados por ela (maior
valor e quantidade de vezes que aparece no vetor). */

#include <stdio.h>
#include <time.h>

void vet_aleatorio(int *maior, int *cont) {
	srand(time(NULL));
	int vet[10], i;
		
	for (i = 0; i < 10; i++) {
		vet[i] = rand() % 6;
		printf ("\n vet[%d] = %d ", i, vet[i]);
	}
	for (i = 0; i < 10; i++) {
		if (vet[i] > *maior) {
			*maior = vet[i];
		}
	}
	for (i = 0; i < 10; i++) {
		if (vet[i] == *maior) {
			*cont += 1;
		}
	}
}

void main(void) {
	int maior = 0, cont = 0;
	
	vet_aleatorio(&maior, &cont);
	
	printf ("\n Maior numero: %d", maior);
	printf ("\n Quantidade: %d", cont);
}
