/*Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos como variavel local na funcao main(). Receba os 4 registros
    sequencialmente pelo teclado numa função e imprima todos os registros no
    video em outra funcao. Faça um menu. Utilize ponteiros nas funcoes.
    Coloque no menu a opção de sair tambem. Utilize o comando switch.
    (vetor de estruturas)
                nome, end, cidade, estado, cep*/

#include <stdlib.h>
#include <stdio.h>

struct pessoa
{
    char nome[35];
    char end[45];
    char cidade[15];
    char estado[3];
    int cep;
};

int main()
{
    struct pessoa netflix[4];
    struct pessoa *p;
    p = &netflix;
    menu(p);
    return;
}

menu(struct pessoa *pp)
{
    int key;
    MENU:
    system("clear || cls");
    printf("\t\tMENU\n\n");
    printf("Envie 1 para entrar com os dados envie 0 para sair\n");
    scanf(" %d", &key);

    switch (key)
    {
    case 1:
        whriteData(pp);
        ReadData(pp);
        break;
    
    case 0:
        printf("Fechando programa\n\n");
        break;
    default:
        goto MENU;
        break;
    }
}


void whriteData(struct pessoa *po)
{
    for (int i = 0; i < 4; i++)
    {
        system("clear || cls");
        printf("\t\tRegistro\n\n");

        printf("Registre seu nome\n");
        getchar();
        scanf(" %s", &po-> nome);

        printf("Registre seu endereço\n");
        scanf(" %s", &po-> end);

        printf("Registre sua cidade\n");
        scanf(" %s", &po-> cidade);

        printf("Registre seu estado EX: {SP RJ}\n");
        scanf(" %s", &po-> estado);

        printf("Registre seu CEP\n");
        scanf(" %d", &po-> cep);
    }
}

void ReadData(struct pessoa *pr)
{
    system("clear || cls");
    printf("NOME: %s\n", pr-> nome);
    printf("ENDEREÇO: %s\n", pr-> end);
    printf("CIDADE: %s\n", pr-> cidade);
    printf("ESTADO: %s\n", pr-> estado);
    printf("CEP: %d\n", pr-> cep);
}