#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Variáveis
    int y=0, x=0, result;

    printf("Por Favor, digite um numero(o primeiro numero deve ser maior):\n");
    scanf(" %d", &x); //Regista a primeira variavel X
    printf("seu primeiro dado e =%d\n", x);
    printf("Certo, agora digite outro numero:\n");
    scanf(" %d", &y); //Registra a segunda variavel Y
    printf("seu segundo dado e =%d\n", y);
    //enquanto Y for menor que X ou seja um looping
    while (y > x) 
    {
        printf("Por Favor, digite um numero(o primeiro numero deve ser maior):\n");
        scanf(" %d", &x); //Regista a primeira variavel X
        printf("Certo, agora digite outro numero:\n");
        scanf(" %d", &y); //Registra a segunda variavel Y
    }
    //atribuindo a variavel result o valor de Y
    result = y;

    while (result <= x)
    {
        printf("%d\n", result);//printar os intervalos
        result++;//acresentando 1 a variavel
    }    
}