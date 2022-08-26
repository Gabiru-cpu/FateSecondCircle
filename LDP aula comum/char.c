#include <stdio.h>
#include <stdlib.h>

char nome_cliente[36];
int i = 0, limit = 7, end, NUM = 1;

int main(void)
{
while (end < 5)
{
    
    //declarando e atribuindo valores no vetor de char
    //texto[7] usa 6 caracteres úteis + 1 caracter para o finalizador
    do
    {
     printf("Escreva o %d° nome (máx 7 letras): ", NUM);
    scanf("%s",&nome_cliente[limit-7]);
    }
    while (nome_cliente[limit] != 0);
    printf("Valor da variavel texto = %s\n", nome_cliente);

    //Percorrendo o vetor de char e mostrando
    //cada elemento individualmente
    for (i=limit-7 ;i<limit; i++)
    {
        printf("Valor do elemento %d da string = %c\n",i, nome_cliente[i]);
    }
    limit+=7;
    end++;
    NUM++;
}
}