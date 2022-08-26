#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define Ex02

#ifdef Ex01
/*Escreva um programa para criar e abrir um arquivo texto de nome "arq.txt".
    Receba via teclado diversos caracteres (um por vezes) e armazene-os
    nesse arquivo. O caracter '0' finaliza a entrada de dados. Abra o arquivo
    "arq.txt", leia e imprima na tela todos os caracteres armazenados no
    arquivo (um por vezes). */

FILE*arq;
char letras;
int op, cont=0, z;

main(){
    do{
        system("cls");
        setlocale(LC_ALL, "Portuguese");
        if((arq=fopen("arq.txt","w"))==NULL){
        printf("Erro na abertura do arquivo \n");
        exit(0);
        }

        printf("Esse programa salvar as caracteres inseridas! Caso deseje finalizar digite '0'.\n\n");
        for(;;){
            printf("Digite o %i caractere: ", cont+1);
            scanf("%c", &letras);

            if(letras=='0'){
                fclose(arq);
                break;
            }
            fwrite(&letras,sizeof(letras),1,arq);
            getchar();
            cont++;
        }
        fclose(arq);

        system("cls");
        if((arq=fopen("arq.txt","r"))==NULL){
        printf("Erro na abertura do arquivo \n");
        exit(0);
        }

        printf("Lendo dados...\n");
        cont=0;
        for(;;){
            z=fread(&letras,sizeof(letras),1,arq);
            if(z==0){
                break;
            }
            printf("\n%i caracter: %c", cont+1, letras);
            cont++;
        }
        fclose(arq);

        printf("\nDeseja repetir a operação? Se sim, digite 1.\n");
        scanf("i", &op);
    }while(op==1);
}


#endif // Ex01

#ifdef Ex02
/*Escreva um programa para controle de um cadastro de clientes. Para cada
    registro sera' armazenado nome, end, cidade, estado, cep numa estrutura
    de dados. A unica estrutura de dados e' uma variavel local na funcao main().
    Escreva os registros direto no arquivo. (utilize a funcao fseek quando
    necessario). Nao pode usar vetor de estruturas. Utilize ponteiros.
    O programa deve ter as seguintes opcoes: (cada opcao e' um funcao)
    1 - inclui registros
    2 - listar todos os registros
    3 - pesquisar registro pelo nome
    4 - altera registro
    5 - exclui registro
    6 - saida*/

struct dados
{
    char nome[20];
    char end[20];
    char cidade[20];
    char estado[20];
    char cep[9];
};

FILE*arq;
void entradaDados(struct dados *pt);
void mostrarDados(struct dados *pt);
void procurarDados(struct dados *pt);
main()
{

    struct dados cadastro;
    struct dados *pt;
    pt = &cadastro;
    setlocale(LC_ALL, "Portuguese");
    int op;

    for(;;)
    {

        printf("Menu do programa:\n");
        printf("\n 1-Incluir Registro");
        printf("\n 2-Listar Registros");
        printf("\n 3-Procurar registro pelo nome");
        printf("\n 4-Alterar registro pelo nome");
        printf("\n 5-Excluir registro pelo nome");
        printf("\n 6-Sair do programa");
        printf("\n\nEscolha uma das opções acima: ");
        scanf("%i", &op);
        system("cls");


        switch(op)
        {
        case 1:
            printf("Você escolheu: Incluir Registro\n\n");
            entradaDados(pt);
            break;
        case 2:
            printf("Você escolheu: Listar Registros\n\n");
            mostrarDados(pt);
            break;
        case 3:
            printf("Você escolheu: Procurar registro pelo nome\n\n");
            procurarDados(pt);
            break;
        case 4:
            printf("Você escolheu: Alterar registro pelo nome\n\n");
            alterarDados(pt);
            break;
        case 5:
            printf("Você escolheu: Excluir registro pelo nome\n\n");
             excluirDados(pt);
             break;
        case 6:
            printf("Você escolheu: Sair do programa\n");
            exit(0);
        }
    }
}

void entradaDados(struct dados *pt)
{
    if((arq=fopen("arq2.txt","a"))==NULL){
    printf("Erro na abertura do arquivo \n");
    exit(0);
    }
    printf("Insira o nome: ");
    scanf("%s",&pt -> nome);
    printf("Insira o endereço: ");
    scanf("%s",&pt -> end);
    printf("Insira a cidade: ");
    scanf("%s",&pt -> cidade);
    printf("Insira o Estado: ");
    scanf("%s",&pt -> estado);
    getchar();
    printf("Insira o CEP: ");
    scanf("%s",&pt -> cep);

    fwrite(pt,sizeof(*pt),1,arq);
    fclose(arq);
    system("pause");
    system("cls");
}
void mostrarDados(struct dados *pt)
{
    if((arq=fopen("arq2.txt","r"))==NULL){
    printf("Erro na abertura do arquivo \n");
    exit(0);
    }

    int i=0, z;

    for(;;)
    {
        z=fread(pt,sizeof(*pt),1,arq);
        if(z==0){
            break;
        }
        if(*pt->nome!='*'){
        printf("Cadastro N%i\n", i+1);
        printf("Nome: %s\n", pt -> nome);
        printf("Endereço: %s\n", pt -> end);
        printf("Cidade: %s\n", pt -> cidade);
        printf("Estado: %s\n", pt -> estado);
        printf("CEP: %s\n", pt -> cep);
        printf("-------------------------------------------------\n");
        }
        i++;
    }
    fclose(arq);
    system("pause");
    system("cls");
}


void procurarDados(struct dados *pt)
{
    char busca[20];

    printf("Digite o nome: ");
    scanf("%s", &busca);

    if((arq= fopen("arq2.txt","r"))==NULL)
    {
        printf("Erro na abertura do arquivo \n");
        exit(0);
    }

    int z, i=0, cont=0;
    char *pot;
    pot = &pt->nome[0];
    for(;;)
    {
        z=fread(pt,sizeof(*pt),1,arq);
        if(z==0)
            break;
        for(i=0; busca[i]!='\0'; i++)
        {
            if(busca[i] != *(pot+i))
            {
                cont=1;
                break;
            }
        }
        if(busca[i]=='\0' && *(pot+i)=='\0'){
            cont=2;
            printf("\nRegistro Encontrado!");
            printf("\n-------------------------------------------------\n");
            printf("Cadastro\n");
            printf("Nome: %s\n", pt -> nome);
            printf("Endereço: %s\n", pt -> end);
            printf("Cidade: %s\n", pt -> cidade);
            printf("Estado: %s\n", pt -> estado);
            printf("CEP: %s\n", pt -> cep);
            printf("-------------------------------------------------\n");
        }

    }

    if(cont==1)
        printf("Registro não encontrado\n");
    fclose(arq);

    printf("Voltando para o menu....");
    system("pause");

}

alterarDados(struct dados *pt)
{
    char busca[20];

    if((arq=fopen("arq2.txt","r"))==NULL)
    {
        printf("Erro na abertura do arquivo\n");
        exit(0);
    }
    printf("Digite o nome: ");
    scanf("%s", &busca);

    int z, i=0, cont=0,u, ind=0, comparar=0;
    char *pot;

    for(;;)
    {
        pot = &pt->nome[0];
        z=fread(pt,sizeof(*pt),1,arq);
        if(z==0)
            break;
        for(i=0; busca[i]!='\0'; i++)
        {
            if(busca[i] != *(pot+i))
            {
                break;
            }
        }
        if(busca[i]=='\0' && *(pot+i)=='\0')
        {
            fclose(arq);
            break;
        }
        ind++;

    }
    if(ind>=0)
    {

        if((arq= fopen("arq2.txt","r+"))==NULL)
        {
            printf("Erro na abertura do arquivo\n");
            exit(0);
        }

        for(;;)
        {
            fread(pt,sizeof(*pt),1,arq);
            if(comparar == ind)
            {
                printf("\nNOVO REGISTRO DE DADOS.\n");
                printf("Insira o nome: ");
                scanf("%s",&pt -> nome);
                printf("Insira o endereço: ");
                scanf("%s",&pt -> end);
                printf("Insira a cidade: ");
                scanf("%s",&pt -> cidade);
                printf("Insira o Estado: ");
                scanf("%s",&pt -> estado);
                getchar();
                printf("Insira o CEP: ");
                scanf("%s",&pt -> cep);
                printf("\nRegistro alterado com sucesso\n");
                break;
            }
            comparar++;

        }
        fseek(arq, ind*48,SEEK_SET);
        fwrite(pt,sizeof(*pt),1,arq);
        fclose(arq);
    }
    printf("Voltando para o menu....");
    system("pause");
    system("cls");
}
excluirDados(struct dados *pt)
{
    char busca[20];

    if((arq= fopen("arq2.txt","r"))==NULL)
    {
        printf("Erro na abertura do arquivo\n");
        exit(0);
    }
    printf("Digite o nome: ");
    scanf("%s", &busca);

    int z, i=0, cont=0, ind=0, comparar=0;
    char *pot;

    for(;;)
    {
        pot = &pt->nome[0];
        z=fread(pt,sizeof(*pt),1,arq);
        if(z==0)
            break;
        for(i=0; busca[i]!='\0'; i++)
        {
            if(busca[i] != *(pot+i))
            {
                break;
            }
        }
        if(busca[i]=='\0' && *(pot+i)=='\0')
        {
            fclose(arq);
            break;
        }
        ind++;

    }
    if(ind>=0)
    {

        if((arq= fopen("arq2.txt","r+"))==NULL)
        {
            printf("Erro na abertura do arquivo\n");
            exit(0);
        }

        for(;;)
        {
            fread(pt,sizeof(*pt),1,arq);
            if(comparar == ind)
            {
                *pt-> nome = '*';
                printf("\nRegistro excluido com sucesso\n");
                break;
            }
            comparar++;

        }
        fseek(arq, ind*48,SEEK_SET);
        fwrite(pt,sizeof(*pt),1,arq);
        fclose(arq);
    }
    printf("Voltando para o menu....");
    system("pause");
    system("cls");
}

#endif // Ex02

#ifdef Ex03
/*
Escreva um programa para gerenciar uma agenda de contatos. Para cada contato
    armazene o nome, o telefone e o aniversario (dia e mes) em uma estrutura de
    dados. Utilize um vetor de estrutura de 4 elementos como variavel local na
    funcao main(). Utilize ponteiros para passar o vetor de estrutura para
    as funcoes. Sempre que o programa for encerrado, os contatos devem ser
    escritos no arquivo e quando o programa iniciar os contatos devem ser lidos
    do arquivo.
    O programa deve ter as seguintes opcoes:(cada opcao e' um funcao)
    1 - inserir contato
    2 - altera contato
    3 - exclui contato
    4 - pesquisar um contato pelo nome
    5 - listar todos os contatos
    6 - listar os contatos cujo nome inicia com uma letra digitada
    7 - imprimir os aniversariantes do m�s.
    8 - saida */


struct dados
{

    char nome[20];
    char telefone[20];
    int diaAniversario;
    int mesAniversario;
};

FILE *arq;
void mostrarContato(struct dados *pt);
void inserirContato(struct dados *pt);
void alterarContato(struct dados *pt);
void excluirContato(struct dados *pt);
void pesquisarContato(struct dados *pt);
void mostrarContatoLetra(struct dados *pt);
main()
{

    setlocale(LC_ALL, "Portuguese");
    struct dados agenda[5];
    struct dados *pt;
    pt = &agenda[0];
    int op;

    for(;;)
    {
        printf("Menu do programa:\n");
        printf("\n 1 - Inserir contato.");
        printf("\n 2 - Alterar contato.");
        printf("\n 3 - Excluir contato.");
        printf("\n 4 - Pesquisar um contato pelo nome.");
        printf("\n 5 - Listar todos os contatos.");
        printf("\n 6 - Listar os contatos cujo nome inicia com uma letra digitada.");
        printf("\n 7 - Imprimir os aniversariantes do mês.");
        printf("\n 8 - Saida.");
        printf("\n\nEscolha uma das opções acima: ");
        scanf("%i", &op);
        system("cls");

        switch(op)
        {
        case 1:
            printf("Você escolheu: Inserir contato\n");
            inserirContato(pt);
            break;
        case 2:
            printf("Você escolheu: Alterar contato\n");
            alterarContato(pt);
            break;
        case 3:
            printf("Você escolheu: Excluir contato\n");
            excluirContato(pt);
            break;
        case 4:
            printf("Você escolheu: Pesquisar um contato pelo nome\n");
            pesquisarContato(pt);
            break;
        case 5:
            printf("Você escolheu: Listar todos os contatos\n");
            mostrarContato(pt);
            break;
        case 6:
            printf("Você escolheu: Listar os contatos cujo nome inicia com uma letra digitada\n");
            mostrarContatoLetra(pt);
            break;
        case 7:
            printf("Você escolheu: Imprimir os aniversariantes do mês\n");
            mostrarAniversariante(pt);
            break;
        case 8:
            printf("Você escolheu: Saida\n");
            exit(0);

        }
    }
}
void inserirContato(struct dados *pt) // esta certo
{
    if((arq=fopen("Exercicio3.txt","w"))==NULL)
    {
        printf("Erro na abertura do arquivo \n");
        exit(0);
    }
    for(int i=0; i<4; i++)
    {
        printf("\nContato N%i\n", i+1);
        printf("-------------------------------------------------\n");
        printf("Digite o nome: ");
        scanf("%s", &pt ->nome);
        printf("Digite o telefone: ");
        scanf("%s", &pt-> telefone);
        printf("Digite o dia do aniversario: ");
        scanf("%i", &pt-> diaAniversario);
        printf("Digite o mês do aniversario: ");
        scanf("%i", &pt->mesAniversario);
        getchar();
        fwrite(pt,sizeof(*pt),1,arq);
        system("cls");
        pt++;
    }
    fclose(arq);
    system("pause");
    system("cls");

}

void alterarContato(struct dados *pt) // esta certo
{
    char busca[20];

    if((arq= fopen("Exercicio3.txt","r+"))==NULL)
    {
        printf("Erro na abertura do arquivo\n");
        exit(0);
    }
    printf("Digite o nome do contato: ");
    scanf("%s", &busca);

    int z, i=0, cont=0, ind=0, comparar=0;
    char *pot;

    for(;;)
    {
        pot = &pt->nome[0];
        z=fread(pt,sizeof(*pt),1,arq);
        if(z==0)
            break;
        for(i=0; busca[i]!='\0'; i++)
        {
            if(busca[i] != *(pot+i))
                break;

        }
        if(busca[i]=='\0' && *(pot+i)=='\0')
        {

            for(;;)
            {
                fread(pt,sizeof(*pt),1,arq);
                if(comparar == ind)
                {
                    printf("\nContato encontrado | Digite o novos dados do contato:");
                    printf("\nDigite o nome: ");
                    scanf("%s", &pt ->nome);
                    printf("Digite o telefone: ");
                    scanf("%s", &pt-> telefone);
                    printf("Digite o dia do aniversario: ");
                    scanf("%i", &pt-> diaAniversario);
                    printf("Digite o mês do aniversario: ");
                    scanf("%i", &pt->mesAniversario);
                    printf("\nContato alterado com sucesso!\n");
                    cont=1;
                    break;
                }
                comparar++;

            }
            fseek(arq, ind*48,SEEK_SET);
            fwrite(pt,sizeof(*pt),1,arq);
            fclose(arq);
        }
        ind++;

    }
    if(cont==0)
        printf("\nContato não encontrado!\n");
    printf("Voltando para o menu....");
    system("pause");
    system("cls");

}

void excluirContato(struct dados *pt) // esta certo
{

    char busca[20];

    if((arq= fopen("Exercicio3.txt","r+"))==NULL)
    {
        printf("Erro na abertura do arquivo\n");
        exit(0);
    }
    printf("Digite o nome do contato: ");
    scanf("%s", &busca);

    int z, i=0, cont=0, ind=0, comparar=0;
    char *pot;

    for(;;)
    {
        pot = &pt->nome[0];
        z=fread(pt,sizeof(*pt),1,arq);
        if(z==0)
            break;
        for(i=0; busca[i]!='\0'; i++)
        {
            if(busca[i] != *(pot+i))
                break;

        }
        if(busca[i]=='\0' && *(pot+i)=='\0')
        {

            for(;;)
            {
                fread(pt,sizeof(*pt),1,arq);
                if(comparar == ind)
                {
                    *pt -> nome = '*';
                    printf("\nContato excluido com sucesso!\n");
                    cont=1;
                    break;
                }
                comparar++;

            }
            fseek(arq, ind*48,SEEK_SET);
            fwrite(pt,sizeof(*pt),1,arq);
            fclose(arq);
        }
        ind++;

    }
    if(cont==0)
        printf("\nContato não encontrado!\n");
    printf("Voltando para o menu....");
    system("pause");
    system("cls");

}

void pesquisarContato(struct dados *pt) // esta certo
{
    if((arq= fopen("Exercicio3.txt","r"))==NULL)
    {
        printf("Erro na abertura do arquivo \n");
        exit(0);
    }

    int i=0,o=0, cont=0;
    char busca[20], *pont;
    printf("\nDigite o nome para a busca: ");
    scanf("%s", &busca);

    for(o=0; o<4; o++)
    {
        fread(pt,sizeof(*pt),1,arq);
        pont = &pt ->nome[0];
        for(i=0; busca[i]!='\0'; i++)
        {

            if(busca[i] !=*(pont+i))
                break;
        }
        if(busca[i]=='\0' && *(pont+i)=='\0')
        {

            printf("\nContato Encontrado!");
            printf("\n-------------------------------------------------\n");
            printf("Cadastro N%i\n", o+1);
            printf("Nome: %s\n", pt -> nome);
            printf("Telefone: %s\n", pt -> telefone);
            printf("Dia do aniversario: %d\n", pt -> diaAniversario);
            printf("Mês do aniversario: %d\n", pt -> mesAniversario);
            printf("-------------------------------------------------\n");
            cont=1;
            break;
        }
        pt++;
    }
    fclose(arq);
    if(cont==0)
    {
        printf("Registro não encontrado!\n\n");
    }
    system("pause");
    system("cls");
}


void mostrarContato(struct dados *pt) // esta certo
{

    if((arq= fopen("Exercicio3.txt","r"))==NULL)
    {
        printf("Erro na abertura do arquivo \n");
        exit(0);
    }
    printf("\n   LISTA DE CONTATO\n");
    printf("-----------------------\n");
    for(int i =0; i<4; i++)
    {
        fread(pt,sizeof(*pt),1,arq);
        if(*pt->nome!='*')
        {
            printf("Nome: %s\n", pt->nome);
            printf("Telefone: %s\n", pt->telefone);
            printf("Dia do aniversario: %d\n", pt->diaAniversario);
            printf("Mês do aniversario: %d\n", pt->mesAniversario);
            printf("-----------------------\n");
        }
    }
    fclose(arq);
    system("pause");
    system("cls");

}
void mostrarContatoLetra(struct dados *pt) // esta certo
{

    char letra;
    int cont=0;
    getchar();
    printf("Digite a letra: ");
    scanf("%c", &letra);
    if((arq= fopen("Exercicio3.txt","r"))==NULL)
    {
        printf("Erro na abertura do arquivo \n");
        exit(0);
    }
    printf("\n   LISTA DE CONTATO\n");
    printf("-----------------------\n");
    for(int i =0; i<4; i++)
    {
        fread(pt,sizeof(*pt),1,arq);
        if(*pt->nome==letra)
        {
            if(*pt->nome!='*')
            {
                printf("Nome: %s\n", pt->nome);
                printf("Telefone: %s\n", pt->telefone);
                printf("Dia do aniversario: %d\n", pt->diaAniversario);
                printf("Mês do aniversario: %d\n", pt->mesAniversario);
                printf("-----------------------\n");
                cont=1;
            }
        }
    }
    if(cont==0)
        printf("Nenhum contato encontrado\n\n");
    fclose(arq);
    system("pause");
    system("cls");

}

void mostrarAniversariante(struct dados *pt) // esta certo
{


    int cont=0, mes;
    char *pont;

    printf("Digite o mes atual (numero): ");
    scanf("%i", &mes);
    if((arq= fopen("Exercicio3.txt","r"))==NULL)
    {
        printf("Erro na abertura do arquivo \n");
        exit(0);
    }
    printf("\n   LISTA DE CONTATO\n");
    printf("-----------------------\n");
    for(int i =0; i<4; i++)
    {
        fread(pt,sizeof(*pt),1,arq);
        if(pt->mesAniversario==mes)
        {
            if(*pt->nome!='*')
            {
                printf("Nome: %s\n", pt->nome);
                printf("Telefone: %s\n", pt->telefone);
                printf("Dia do aniversario: %d\n", pt->diaAniversario);
                printf("Mês do aniversario: %d\n", pt->mesAniversario);
                printf("-----------------------\n");
                cont=1;
            }
        }
    }
    if(cont==0)
        printf("Nenhum contato encontrado\n\n");
    fclose(arq);
    system("pause");
    system("cls");

}
#endif // Ex03

#ifdef Ex04
/* Escreva um programa para o controle de mercadorias em uma despensa
    domestica. Para cada produto sera' armazenado um codigo numerico, nome
    do produto e quantidade atual numa estrutura de dados. A unica estrutura
    de dados deve ser declarada como variavel local na funcao main(). Escreva
    os itens das mercadorias direto no arquivo. (utilize a funcao fseek quando
    necessario). Nao pode usar vetor de estruturas. Utilize ponteiros.
    O programa deve ter as seguintes opcoes: (cada opcao e' um funcao)
    1 - inclui produtos
    2 - altera produtos
    3 - exclui produtos
    4 - pesquisar uma mercadoria pela descri��o
    5 - listar todos os produtos
    6 - listar os produtos n�o dispon�veis.
    7 - alterar a quantidade atual
    8 - saida */

struct dados
{
    int codigo; // 16
    char nome[20]; // 8
    int quantidade; // 16
};

FILE *arq;

void incluirProdutos(struct dados *pt, int i);
void alterarProdutos(struct dados *pt);
void listarProdutos(struct dados *pt);
void listarProdutosNaoDisponiveis(struct dados *pt);
void alterarQuantidade(struct dados *pt);
main()
{
    struct dados produtos;
    struct dados *pt;
    pt = &produtos;
    int op, i=-1;

    setlocale(LC_ALL, "Portuguese");
    for(;;)
    {
        printf("Menu do programa:\n");
        printf("\n 1 - Incluir produtos.");
        printf("\n 2 - Alterar produtos.");
        printf("\n 3 - Excluir produtos.");
        printf("\n 4 - Pesquisar uma mercadoria pela descrição.");
        printf("\n 5 - Listar todos os produtos.");
        printf("\n 6 - Listar os produtos não disponíveis.");
        printf("\n 7 - Alterar a quantidade atual.");
        printf("\n 8 - Saida.");
        printf("\n\nEscolha uma das opções acima: ");
        scanf("%i", &op);
        i++;
        system("cls");

        switch(op)
        {
        case 1:
            printf("Você escolheu: Incluir produtos\n\n");
            incluirProdutos(pt,i);
            break;

        case 2 :
            printf("Você escolheu: Alterar produtos\n");
            alterarProdutos(pt);
            break;
        case 5:
            printf("Você escolheu: Listar produtos\n");
            listarProdutos(pt);
            break;
        case 6:
            printf("Você escolheu: Listar produtos não disponiveis\n");
            listarProdutosNaoDisponiveis(pt);
            break;
        case 7:
            printf("Você escolheu: Alterar quantidade\n");
            alterarQuantidade(pt);
            break;
        case 8:
            printf("Saindo do programa...");
            exit(0);
        }

    }
}

void incluirProdutos(struct dados *pt, int i)
{
    if((arq=fopen("Exercicio4.txt","a"))==NULL)
    {
        printf("Erro na abertura do arquivo \n");
        exit(0);
    }
    pt-> codigo = i;
    printf("Digite o nome do produto: ");
    scanf("%s", &pt->nome);
    printf("Digite a quantidade atual: ");
    scanf("%i", &pt ->quantidade);
    fwrite(pt,sizeof(*pt),1,arq);
    fclose(arq);
printf("\n");
    system("pause");
    system("cls");
}

void alterarProdutos(struct dados *pt)
{
    char busca[20];

    if((arq= fopen("Exercicio4.txt","r+"))==NULL)
    {
        printf("Erro na abertura do arquivo\n");
        exit(0);
    }
    printf("Digite o nome do produto: ");
    scanf("%s", &busca);

    int z, i=0, cont=0, ind=0, comparar=0;
    char *pot;

    for(;;)
    {
        pot = &pt->nome[0];
        z=fread(pt,sizeof(*pt),1,arq);
        if(z==0)
            break;
        for(i=0; busca[i]!='\0'; i++)
        {
            if(busca[i] != *(pot+i))
                break;

        }
        if(busca[i]=='\0' && *(pot+i)=='\0')
        {
            for(;;)
            {
                fread(pt,sizeof(*pt),1,arq);
                if(comparar == ind)
                {
                    printf("\nProduto encontrado | Digite o novos dados do produto:\n");
                    printf("Nome: ");
                    scanf("%s", &pt->nome);
                    printf("Quantidade atual: ");
                    scanf("%i", &pt ->quantidade);
                    printf("\nProduto alterado com sucesso!\n");
                    cont=1;
                    break;
                }
                comparar++;

            }
            fseek(arq, ind*40,SEEK_SET);
            fwrite(pt,sizeof(*pt),1,arq);
            fclose(arq);
        }
        ind++;

    }
    if(cont==0)
        printf("\nProduto não encontrado!\n");
    printf("Voltando para o menu....");
    system("pause");
    system("cls");

}
void listarProdutos(struct dados *pt)
{

    int z;
    if((arq= fopen("Exercicio4.txt","r"))==NULL)
    {
        printf("Erro na abertura do arquivo \n");
        exit(0);
    }
    printf("\n   LISTA DE PRODUTOS\n");
    printf("--------------------------\n");
    for(;;)
    {
        z=fread(pt,sizeof(*pt),1,arq);
        if(z==0)
            break;
        printf("Codigo: %i\n", pt->codigo);
        printf("Nome: %s\n", pt->nome);
        printf("Quantidade: %i\n", pt->quantidade);
        printf("-----------------------\n");
    }
    fclose(arq);
    system("pause");
    system("cls");

}
void listarProdutosNaoDisponiveis(struct dados *pt)
{
    int z;
    if((arq= fopen("Exercicio4.txt","r"))==NULL)
    {
        printf("Erro na abertura do arquivo \n");
        exit(0);
    }
    printf("\n   LISTA DE PRODUTOS\n");
    printf("--------------------------\n");
    for(;;)
    {
        z=fread(pt,sizeof(*pt),1,arq);
        if(z==0)
            break;
        if(pt->quantidade == 0 && *pt->nome !='*')
        {
            printf("Codigo: %i\n", pt->codigo);
            printf("Nome: %s\n", pt->nome);
            printf("Quantidade: %i\n", pt->quantidade);
            printf("-----------------------\n");
        }
    }
    fclose(arq);
    system("pause");
    system("cls");

}
void alterarQuantidade(struct dados *pt)
{

    char busca[20];
    if((arq= fopen("Exercicio4.txt","r+"))==NULL)
    {
        printf("Erro na abertura do arquivo\n");
        exit(0);
    }
    printf("Digite o nome do produto: ");
    scanf("%s", &busca);

    int z, i=0, cont=0, ind=0, comparar=0;
    char *pot;

    for(;;)
    {
        pot = &pt->nome[0];
        z=fread(pt,sizeof(*pt),1,arq);
        if(z==0)
            break;
        for(i=0; busca[i]!='\0'; i++)
        {
            if(busca[i] != *(pot+i))
                break;

        }
        if(busca[i]=='\0' && *(pot+i)=='\0')
        {

            for(;;)
            {
                fread(pt,sizeof(*pt),1,arq);
                if(comparar == ind)
                {
                    printf("\nProduto encontrado | Digite o nova quantidade do produto:\n");
                    printf("Quantidade atual: ");

                    scanf("%i", &pt ->quantidade);
                    printf("\nProduto alterado com sucesso!\n");
                    cont=1;
                    break;
                }
                comparar++;

            }
            fseek(arq, ind*28,SEEK_SET);
            fwrite(pt,sizeof(*pt),1,arq);
            fclose(arq);
        }
        ind++;

    }
    if(cont==0)
        printf("\nProduto não encontrado!\n");
    printf("Voltando para o menu....");
    system("pause");
    system("cls");
}
#endif // Ex04
