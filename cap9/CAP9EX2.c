/*2 - Escreva um programa que receba em 1 funcao 2 strings de até 10 caracteres.
     como vaOs vetores sao declaradasriavel local na função main().
    Escreva uma funcao que recebe as 2 strings como parametros usando ponteiros,
    compare estas 2 strings e retorno 1 se iguais ou 0 se diferentes.*/

#include <stdlib.h>
#include <stdio.h>
void main()
{
int result=2, LOOP = 0;
while(LOOP==0){
    
    char str1[10], str2[10];
    printf("\nescreva a string1\n");
    scanf("%s", &str1);

    printf("\nescreva a string2\n");
    scanf("%s", &str2);

    result = rcbStr(str1, str2);
    printf("\n%d\n", result);

    printf("\n\nDeseja finalizar?(envie 1 para SIM e 0 Para não)\n");
    scanf("%d", &LOOP);
    while (LOOP < 0 || LOOP > 1)
    {
        printf("\n\nERRO Deseja finalizar?(envie 1 para SIM e 0 Para não)\n");
        scanf("%d", &LOOP);
    }
}
}

int rcbStr(char * strC, char * strC2)
{
    printf("\nimprimir copia = %s", strC);
    printf("\nimprimir copia2 = %s\n", strC2);

    if (*strC == *strC2)
    {
        return 1;
    }

    if(*strC != *strC2)
    {
        return 0;
    }
}