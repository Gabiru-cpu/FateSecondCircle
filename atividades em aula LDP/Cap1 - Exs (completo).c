/*1 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via
    teclado.
    Ex: menor multiplo de 13 maior que 100[limite]. Resultado: 104.*/

#include <stdio.h>
#include <stdlib.h>

#define ex4
#ifdef ex1

int num, num2, result=0, aux;

void main()
{
    printf("Envie um numero para ser o multiplo\n");
    scanf("%d", &num);
    printf("Envie um numero para ser o limite minimo do multiplo do resultado\n");
    scanf("%d", &num2);
    
    while (num2 < num)
    {
        printf("O PRIMEIRO NUMERO DEVE SER MAIOR QUE O SEGUNDO\n");
        printf("Envie um numero para ser o multiplo\n");
        scanf("%d", &num);
        printf("Envie um numero para ser o limite minimo do multiplo do resultado\n");
        scanf("%d", &num2);
    }
    
    for (int i = 0; result == 0; i++)
    {
        aux = (num2+i) % num;
        if (aux == 0)
        {
            result = num2+i;
        }
        
    }

    printf("\n\nMultiplo enviado: %d\nLimite enviado: %d\n Resultado: %d\n", num, num2, result);
    
}

#endif

#ifdef ex2
/*2 - Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         shortV               longV                intV
                   float               double              char*/


short S; float F; long L; double D; int I; 
char C[61];
void main()
{
    printf("digite um numero a variavel short\n");
    scanf("%d", &S);

    printf("digite um numero a variavel float\n");
    scanf("%f", &F);

    printf("digite um numero a variavel long\n");
    scanf("%d", &L);

    printf("digite um numero a variavel double\n");
    scanf("%lf", &D);

    printf("digite um numero a variavel int\n");
    scanf("%d", &I);
  
    printf("Digite um texto para a variavel char \n");
    scanf("%s",C);
    fim();
}
void fim()
{
    printf("        10        20        30        40        50\n12345678901234567890123456789012345678901234567890\n");
    printf("    short%d               long%d                int%d\nfloat%f               double%lf              char%s", S, L, I, F, D, C);
}
#endif

#ifdef ex3
void main() {
    int s, h, m;

    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &s);
    
    h = s / 3600;
    m = s / 60;
    printf("Horas: %d\nMinutos:%d\nSegundos:%d\n", h, m, s);
}
#endif

#ifdef ex4
/*  4 - Escreva um programa que permute o conte�do de duas vari�veis sem utilizar uma
    vari�vel auxiliar.*/

int num[2], num2;

void main()
{
    printf("envia num1:   ");
    scanf("%d", &num[0]);
    printf("envia num2:   ");
    scanf("%d", &num2);
    //estou usando um vector como auxiliar nao uma variavel
    num[1] = num[0];
    num[0] = num2;
    num2 = num[1];
    printf("num1: %d num2: %d", num[0], num2);
}
#endif

#ifdef ex5

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
#endif