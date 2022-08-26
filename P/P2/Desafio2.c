#include <stdlib.h>
#include <stdio.h>
// produtora, quantidade, preço.
FILE *arquivo;

struct filmes
{
char filme[50];
char produtura[50];
int quantidade;
float preço;
};

int main()
{
    struct filmes cadastro;
    struct filmes *p;
    p = &cadastro;
    while (1)
    {
        menu(p);
    }
    return 0;
}

int menu(struct filmes *pMenu)
{

    int op;
    MENU:
    //system("cls || clear");
    printf("\n\t|Menu de opcoes|");
    printf("\n\t1- Entrada de dados do filme");
    printf("\n\t2- Listar todos os filmes");
    printf("\n\t3- Pesquisar filme pelo nome");
    printf("\n\t4- Pesquisar por produtora");
    printf("\n\t5- Pesquisar por faixa de preco");
    printf("\n\t6- alterar quantidade");
    printf("\n\t7- alterar o preço");
    printf("\n\t8- alterar o filme");
    printf("\n\t9- exclui o filme");
    printf("\n\t10- Saida\n");
    scanf("%d",&op);
    getchar();

    switch(op)
    {
        case 1:
            inserirDados(pMenu);
            break;
        case 2:
            listarFilmes(pMenu);
            break;
        case 3:
            pesquisarFilme();
            break;
        case 4:
            pesquisarProdutora();
            break;
        case 5:
            pesquisarFaixapreco();
            break;
        case 6:
            alterarQuanti();
        case 7:
            alterarPreco();
        case 8:
            alterarFilme();
        case 9:
            ExcluirFilme();
        case 10:
            exit(0);
            break;
        default:
        goto MENU;
    }
}
//
inserirDados(struct filmes *po)
{
    arquivo = fopen("Teste.txt", "a");

    fflush(stdin);
    printf("Envie o Nome do filme: \n");
    scanf(" %s", &po -> filme);
        printf("Envie o Nome da Produtora: \n");
    scanf(" %s", &po -> produtura);


    //arquivo recebe valor da var char
    fwrite(po, sizeof(*po), 1, arquivo);


    fclose(arquivo);//salvar
}


listarFilmes(struct filmes *pl)
{
    arquivo = fopen("Teste.txt", "r");
    int a;
    for (;;)
    {
        a = fread(pl, sizeof(*pl), 1, arquivo);
        //printf("%d\n", a);
        if(a==0)
        {
            break;
        }
        printf("Envie o Nome do filme: \n");
        printf(" %s\n", pl -> filme);
    }




    fclose(arquivo);//salvar
}


pesquisarFilme()
{

}


pesquisarProdutora()
{

}

//usuario enviar maenor e maior preço e procurar filmes no intervalo
pesquisarFaixapreco()
{

}

//dizer quantas unidades sairam e quantas entraram pesquisando pelo nome
alterarQuanti()
{

}

//alterar preço do filme pesquisando pelo nome
alterarPreco()
{

}

//alterar todos os dados do filme pesquisando pelo nome
alterarFilme()
{

}

//exlui o filme pelo nome
ExcluirFilme()
{

}
