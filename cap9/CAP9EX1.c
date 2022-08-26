/*1 Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa no
    video na funcao main(). O vetor é uma variavel local na função main().Passe
    como parametro para a funcao o vetor e a letra digitada usando ponteiros.
    Pesquise usando ponteiros. (utilize o comando return)
    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int LOOP = 0;

   char vetor[14] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'}, letter;
    
    while (LOOP == 0)
    {
        printf("Envie uma letra\n");
        scanf(" %c", &letter);
        printf("letra pos0 = %s \n", &letter);

        pesq(&vetor, &letter);

        printf("\n\nDeseja finalizar?(envie 1 para SIM e 0 Para não)\n");
        scanf("%d", &LOOP);
        while (LOOP < 0 || LOOP > 1)
        {
            printf("\n\nERRO Deseja finalizar?(envie 1 para SIM e 0 Para não)\n");
            scanf("%d", &LOOP);
        }
        
    }
    return 0;
}

void pesq(char *vetorC, char *letterC)
{
    
    for (int i = 0; i < 14; i++)
    {
        if (i < 13) printf("\n %c posicao %d\n", vetorC[i], i);

        if (i >= 13) printf("LETRA NAO ENCONTRADA\n\n");

        if (*letterC == vetorC[i])
        {
            printf("\nLETRA %s ENCONTRADA NA POSICAO %d\n", letterC,i);
            i = 14;
        }
    }
}