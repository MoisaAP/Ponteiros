/* Construa uma função que receba como parâmetro um vetor de inteiros com 10 valores aleatórios
entre 0 e 6, preenchidos automaticamente. A função deve determinar o maior elemento e o número
de vezes que ele ocorre no vetor. Por exemplo, para o vetor [1, 3, 5, 5, 2, 4, 5, 3, 1, 0] a função deve
determinar o valor 5 e indicar que ele ocorreu 3 vezes. A função deve ser do tipo void e o programa
deve, após a execução da função, listar o vetor e apresentar os valores manipulados por ela (maior
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
