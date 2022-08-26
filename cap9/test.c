/*Acrescente ao menu do exercicio anterior as funcoes de procura, altera e
    exclui um registro.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
 // nome, end, cidade, estado, cep*/
typedef struct {
    char nome[100];
	char end[100];
	char cidade[100];
	char estado[100];
    int cep;
} Aluno;
 
Aluno cadastrodoAluno[5];
char nome[100];
int posicao;
 
int main() {
 
int i = 0;
setlocale(LC_ALL,"portuguese");
 
for(i=0; i<5; i++) {
	//zerando a estrutura OU ENTAO EXCLUIR RS
    strcpy(cadastrodoAluno[i].nome, "NULL");
	strcpy(cadastrodoAluno[i].end, "NULL");
	strcpy(cadastrodoAluno[i].cidade, "NULL");
	strcpy(cadastrodoAluno[i].estado, "NULL");
    cadastrodoAluno[i].cep = 0.0;
}
 //pritando a estrutura
for(i=0; i<5; i++) {

    printf(" \n O Nome do aluno é: %s ", cadastrodoAluno[i].nome);
	printf(" \n O Endereço do aluno é: %s ", cadastrodoAluno[i].end);
	printf(" \n A Cidade do aluno é: %s ", cadastrodoAluno[i].cidade);
	printf(" \n O Estado do aluno é: %s ", cadastrodoAluno[i].estado);
    printf(" \n O CEP do aluno é: %d ", cadastrodoAluno[i].cep);
    printf(" \n ------------------------------------------------------------------------");
}
 
printf(" \n \n");
 //registrando os dados editar os dados
for(i=0; i<5; i++) {
    printf(" Digite o Nome do aluno: ");
    scanf("%s%*c", &cadastrodoAluno[i].nome);
    printf(" Digite o Endereço do aluno: ");
    scanf("%s%*c", &cadastrodoAluno[i].end);
	printf(" Digite o Cidade do aluno: ");
    scanf("%s%*c", &cadastrodoAluno[i].cidade);
	printf(" Digite o Estado do aluno: ");
    scanf("%s%*c", &cadastrodoAluno[i].estado);
    printf(" Digite a CEP do aluno: ");
    scanf("%d%*c", &cadastrodoAluno[i].cep);
    printf(" \n ------------------------------------------------------------------------\n");
}
//printando os dados registrados
for(i=0; i<5; i++) {
    printf(" \n O nome do aluno é: %s ", cadastrodoAluno[i].nome);
	printf(" \n O Endereço do aluno é: %s ", cadastrodoAluno[i].end);
	printf(" \n O Cidade do aluno é: %s ", cadastrodoAluno[i].cidade);
	printf(" \n O Estado do aluno é: %s ", cadastrodoAluno[i].estado);
    printf(" \n O CEP do aluno é: %d ", cadastrodoAluno[i].cep);
    printf(" \n ------------------------------------------------------------------------");
}
 
printf(" \n ");


//pesquisa
 //procurar registro
printf(" \n Pesquise um aluno pelo Nome: ");
scanf(" %s", nome);
scanf(" %s%*c", nome);
 
for(i=0; i<5; i++) {
    if(strcmp(nome, cadastrodoAluno[i].nome)== 0) {
        printf("\n Registro encontrado! ");
        posicao = i;
    } else {
        posicao = -1;
    }
}
 
if(posicao = -1) {
    printf(" \n Registro não encontrado! ");
} else {
    printf(" \n Nome Encontrado");
    printf(" \n Nome é: %s", nome);

    printf(" \n O Nome do aluno é: %s ", cadastrodoAluno[posicao].nome);
	printf(" \n O Endereço do aluno é: %s ", cadastrodoAluno[posicao].end);
	printf(" \n A Cidade do aluno é: %s ", cadastrodoAluno[posicao].cidade);
	printf(" \n O Estado do aluno é: %s ", cadastrodoAluno[posicao].estado);
    printf(" \n O CEP do aluno é: %d ", cadastrodoAluno[posicao].cep);
    printf(" \n ------------------------------------------------------------------------");
}
 
return 0;
 
}