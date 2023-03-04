/*  6 Construa um programa que tenha uma estrutura para cadastrar alunos, contendo o nome do aluno,
a matrícula e a turma. Cadastre os dados de uma aluno e exiba-os em tela por acesso direto à
struct. Após isso, exiba-os novamente, mediante uso de um ponteiro para a struct. */

#include <stdio.h>
#include <stdio.h>
#include <string.h>

typedef struct {
	char nome[50];
	int matricula;
	int turma;
} aluno;


void main(void){
	aluno aln;
	aluno *paln = &aln;
	int i;
	
	printf (" Informe o nome do aluno: ");
	scanf  ("%s", aln.nome);
	printf ("\n Informe a matricula: ");
	scanf  ("%d", &aln.matricula);
	printf ("\n Informe a turma: ");
	scanf  ("%d", &aln.turma);
	
	printf ("\n\n Dados do aluno direto: ");
	printf ("\n Nome: %s", aln.nome);
	printf ("\n Matricula: %d", aln.matricula);		
	printf ("\n Turma: %d", aln.turma);
	
	printf ("\n\n Dados do aluno via ponteiro: ");
	printf ("\n Nome: %s", paln->nome);
	printf ("\n Matricula: %d", paln->matricula);		
	printf ("\n Turma: %d", paln->turma);
}
