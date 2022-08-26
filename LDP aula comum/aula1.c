#include <stdio.h>
#include <stdlib.h>

//variaveis e seus tipos obs esses valores sao guardados na memoria ram
int num = 2; //int variavel q trabalha com numeros inteiros
float numf = 2.52; //float variavel q trabalha com numeros flutuantes ou quebrados
double numd = 2.2; //q nem o float porem é mais ele e trabalha com menos numeros

//main a função principal em C ela é sempre a primeira coisa a ser lida
void main()
{
    char NOME[60];//char variavel q trabalha com texto podemos fazer [numero] para limitar a quantidade de letras

    printf("Vamos la entao, primeiramente, pode me dizer o seu nome, por favor?\n");// função que demonstra texto na tela
    gets(NOME);//envia um valor para uma variavel gets é mais usado para char pois scanf geralmente da problema com variavel char

    printf("Olá! %s, bem-vindo mais uma vez!", NOME);//para chamar uma variavel no print escrevemos % e a letra q representa
    //a variavel no caso char é %s se fosse int %i ou %d float %f por ai vai dps do texto colocamos ',' o nome da variavel no caso NOME
}