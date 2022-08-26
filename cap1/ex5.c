#include <stdio.h>
#include <stdlib.h>

void main()
{
	printf("\nInforme um valor inteiro em Reais: ");
	int REAIS;
	scanf("%d", &REAIS);
 
	int v100 = REAIS / 100;
	REAIS = REAIS - v100 * 100;
 
	int v50 = REAIS / 50;
	REAIS = REAIS - v50 * 50;
 
	int v20 = REAIS / 20;
	REAIS = REAIS - v20 * 20;
 
	int v10 = REAIS / 10;
	REAIS = REAIS - v10 * 10;
 
	int v5 = REAIS / 5;
	REAIS = REAIS - v5 * 5;
 
	int v2 = REAIS / 2;
	REAIS = REAIS - v2 * 2;
 
	int v1 = REAIS;
 
	printf("\nO número de notas de 100 é: %d", (v100));
	printf("\nO número de notas de 50 é: %d", (v50));
	printf("\nO número de notas de 20 é: %d", (v20));
	printf("\nO número de notas de 10 é: %d", (v10));
	printf("\nO número de notas de 5 é: %d", (v5));
	printf("\nO número de notas de 2 é: %d", (v2));
	printf("\nO número de notas de 1 é: %d", (v1));
 
	printf("\n\n");
	system("pause");
}