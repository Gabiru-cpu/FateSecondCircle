#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define BR *setlocale(LC_ALL,"")
// produtora, quantidade, preço.
FILE *arquivo;

struct filmes
{
char filme[50];
char produtora[50];
int quantidade;
float preco;
};

int main()
{
    BR;
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
            pesquisarFilme(pMenu);
            break;
        case 4:
            pesquisarProdutora(pMenu);
            break;
        case 5:
            pesquisarFaixapreco(pMenu);
            break;
        case 6:
            alterarQuanti(pMenu);
            break;
        case 7:
            alterarPreco(pMenu);
            break;
        case 8:
            alterarFilme(pMenu);
            break;
        case 9:
            ExcluirFilme(pMenu);
            break;
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
    scanf(" %s", &po -> produtora);
    printf("Envie o preço do filme: \n");
    scanf(" %f", &po -> preco);
    printf("Envie a quantidade em estoque: \n");
    scanf(" %d", &po -> quantidade);


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

        /**Após excluir logicamente o cadastro pela função excluir (Logicamente pela alteração do 1° caractere
        criar um if para identificar esse caractere de excluido e não exibir o cadastro */
        if (pl -> filme[0] == '#');
        else
        {
            printf("\nNome do filme: ");
            printf(" %s\n", pl -> filme);
            printf("Nome da produtora: ");
            printf(" %s\n", pl -> produtora);
            printf("Preço do filme: ");
            printf(" %.2f\n", pl -> preco);
            printf("Quantidade em estoque: ");
            printf(" %d\n", pl -> quantidade);
        }

    }
    fclose(arquivo);//salvar
}


pesquisarFilme(struct filmes *pf)
{
    arquivo = fopen("Teste.txt", "r");
    char wrd[256];
	int a, i;

	printf("Qual nome do filme que voce quer procurar?  ");
	gets(wrd);

    for ( ; ; )
    {
        a = fread(pf, sizeof(*pf), 1, arquivo);
        if(a==0)
        {
            printf("Registro Inexistente");
            break;

        }
        for(i = 0; wrd[i] != '\0'; i++)
        {
            if (wrd[i] != pf -> filme[i])
            {
                break;
            }
        }
        if(wrd[i] == '\0' && pf -> filme[i] == '\0')
        {
            printf("|Filme encontrado %s| \n",pf -> filme);
            break;
        }
    }
	fclose(arquivo);
}

pesquisarProdutora(struct filmes *pp)
{
    arquivo = fopen("Teste.txt", "r");
    char wrd[256];
	int a, i;

	printf("Qual nome da produtora que voce quer procurar?  ");
	gets(wrd);

    for ( ; ; )
    {
        a = fread(pp, sizeof(*pp), 1, arquivo);
        if(a==0)
        {
            printf("Registro Inexistente");
            break;

        }
        for(i = 0; wrd[i] != '\0'; i++)
        {
            if (wrd[i] != pp -> produtora[i])
            {
                break;
            }
        }
        if(wrd[i] == '\0' && pp -> produtora[i] == '\0')
        {
            printf("|Produtora encontrada %s| \n",pp -> produtora);
            break;
        }
    }
	fclose(arquivo);
}

//usuario enviar maenor e maior preço e procurar filmes no intervalo
pesquisarFaixapreco(struct filmes *pfp)
{
    arquivo = fopen("Teste.txt", "r");

    float min, max;
	int a, i;

	printf("Insira um valor minimo para a procura?  ");
	scanf("%f" ,&min);
	printf("Insira um valor máximo para a procura?  ");
	scanf("%f" ,&max);

    for ( ; ; )
    {
        a = fread(pfp, sizeof(*pfp), 1, arquivo);

        if(min <= pfp -> preco && max >= pfp -> preco)
        {
           printf("\n|Nome: %s| \n",pfp -> filme);
           printf("|Produtora: %s| \n",pfp -> produtora);
           printf("|Quantidade: %d| \n",pfp -> quantidade);
           printf("|preço: %.2f| \n",pfp -> preco);
        }
        else
        {
            if(a==0)
            {
                printf("Pesquisa Completa");
                break;
            }
        }
    }
	fclose(arquivo);
}

//dizer quantas unidades sairam e quantas entraram pesquisando pelo nome
alterarQuanti(struct filmes *paq)
{
    arquivo = fopen("Teste.txt", "r+");
    char wrd[256];
	int a, i, cont=0, comp;

	printf("Qual nome do filme que voce quer procurar?  ");
	gets(wrd);

    for ( ; ; )
    {
        a = fread(paq, sizeof(*paq), 1, arquivo);
        if(a==0)
        {
            printf("Registro Inexistente");
            break;
        }
        for(i = 0; wrd[i] != '\0'; i++)
        {
            if (wrd[i] != paq -> filme[i])
            {
                break;
            }
        }
        if(wrd[i] == '\0' && paq -> filme[i] == '\0')
        {
            printf("|Filme encontrado %s| \n",paq -> filme);
            printf("|Altere a quantidade| \n");
            scanf("%d", &paq -> quantidade);

            comp = cont * sizeof(*paq);

            fseek(arquivo, comp, 0);
            fwrite(paq, sizeof(*paq), 1, arquivo);
            break;
        }
        cont++;
    }
	fclose(arquivo);
}

//alterar preço do filme pesquisando pelo nome
alterarPreco(struct filmes *paqp)
{
    arquivo = fopen("Teste.txt", "r+");
    char wrd[256];
	int a, i, cont=0, comp;

	printf("Qual nome do filme que voce quer procurar?  ");
	gets(wrd);

    for ( ; ; )
    {
        a = fread(paqp, sizeof(*paqp), 1, arquivo);
        if(a==0)
        {
            printf("Registro Inexistente");
            break;
        }
        for(i = 0; wrd[i] != '\0'; i++)
        {
            if (wrd[i] != paqp -> filme[i])
            {
                break;
            }
        }
        if(wrd[i] == '\0' && paqp -> filme[i] == '\0')
        {
            printf("|Filme encontrado %s| \n",paqp -> filme);
            printf("|Altere o preço| \n");
            scanf("%f", &paqp -> preco);

            comp = cont * sizeof(*paqp);

            fseek(arquivo, comp, 0);
            fwrite(paqp, sizeof(*paqp), 1, arquivo);
            break;
        }
        cont++;
    }
	fclose(arquivo);
}

//alterar todos os dados do filme pesquisando pelo nome
alterarFilme(struct filmes *paf)
{
    arquivo = fopen("Teste.txt", "r+");
    char wrd[256];
	int a, i, cont=0, comp;

	printf("Qual nome do filme que voce quer procurar?  ");
	gets(wrd);

    for ( ; ; )
    {
        a = fread(paf, sizeof(*paf), 1, arquivo);
        if(a==0)
        {
            printf("Registro Inexistente");
            break;
        }
        for(i = 0; wrd[i] != '\0'; i++)
        {
            if (wrd[i] != paf -> filme[i])
            {
                break;
            }
        }
        if(wrd[i] == '\0' && paf -> filme[i] == '\0')
        {
            printf("|Filme encontrado %s| \n",paf -> filme);
            printf("\n|Altere o nome| \n");
            scanf("%s", &paf -> filme);
            printf("\n|Altere o nome da produtora| \n");
            scanf("%s", &paf -> produtora);
            printf("\n|Altere o preço| \n");
            scanf("%f", &paf -> preco);
            printf("\n|Altere o quantidade| \n");
            scanf("%d", &paf -> quantidade);

            comp = cont * sizeof(*paf);

            fseek(arquivo, comp, 0);
            fwrite(paf, sizeof(*paf), 1, arquivo);
            break;
        }
        cont++;
    }
	fclose(arquivo);
}

//exlui o filme pelo nome
ExcluirFilme(struct filmes *pe)
{
    arquivo = fopen("Teste.txt", "r+");
    char wrd[256];
	int a, i, cont=0, comp;

	printf("Qual nome do filme que voce quer procurar?  ");
	gets(wrd);

    for ( ; ; )
    {
        a = fread(pe, sizeof(*pe), 1, arquivo);
        if(a==0)
        {
            printf("Registro Inexistente");
            break;
        }
        for(i = 0; wrd[i] != '\0'; i++)
        {
            if (wrd[i] != pe -> filme[i])
            {
                break;
            }
        }
        if(wrd[i] == '\0' && pe -> filme[i] == '\0')
        {
            printf("|Filme encontrado %s| \n",pe -> filme);

            pe -> filme[0] = '#';

            comp = cont * sizeof(*pe);

            fseek(arquivo, comp, 0);
            fwrite(pe, sizeof(*pe), 1, arquivo);
            break;
        }
        cont++;
    }
	fclose(arquivo);
}
