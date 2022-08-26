#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

#define BR *setlocale(LC_ALL,"")

#define desafio

#ifdef desafio

void inserirDados();
void listarDados();
void pesquisarMusica();
void pesquisarAutor();
void alterarDados();
void excluirDados();

char nome_musica1[20];
char nome_musica2[20];
char nome_musica3[20];

char nome_autor1[20];
char nome_autor2[20];
char nome_autor3[20];

FILE *Teste;

//teste pra pesquisa
char wrd[20], buffer[20];
int n, m, i, j, line;


void main()
{
    do
{


    int op;
    BR;
    

    MENU:
    system("cls");
    printf("\n\t|Menu de opcoes|");
    printf("\n\t1- Entrada de dados");
    printf("\n\t2- Listar tudo");
    printf("\n\t3- Pesquisar m�sica");
    printf("\n\t4- Pesquisar pela 1 letra (autor)");
    printf("\n\t5- Alterar dados");
    printf("\n\t6- Excluir dados");
    printf("\n\t7- Saida\n");
    scanf("%d",&op);

    switch(op)
    {
        case 1:
            inserirDados();
            break;
        case 2:
            listarDados();
            break;
        case 3:
            pesquisarMusica();
            break;
        case 4:
            pesquisarAutor();
            break;
        case 5:
            alterarDados();
            break;
        case 6:
            excluirDados();
        case 7:
            exit(0);
            break;
        default:
        goto MENU;
    }
}
while(repetir() == 1);
}

void inserirDados()
{
    Teste = fopen("Teste.txt", "w");

    fflush(stdin);
    printf("Envie o nome da Musica 1\n");
    gets(nome_musica1);

    fflush(stdin);
    printf("Envie o nome do Autor 1\n");
    gets(nome_autor1);

    fflush(stdin);
    printf("Envie o nome da musica 2\n");
    gets(nome_musica2);

    fflush(stdin);
    printf("Envie o nome do Autor 2\n");
    gets(nome_autor2);

    fflush(stdin);
    printf("Envie o nome da musica 3\n");
    gets(nome_musica3);

    fflush(stdin);
    printf("Envie o nome do Autor 3\n");
    gets(nome_autor3);
    //arquivo recebe valor da var char
    fwrite(nome_musica1, sizeof(nome_musica1), 1,Teste);
    fwrite(nome_autor1, sizeof(nome_autor1), 1,Teste);

    fwrite(nome_musica2, sizeof(nome_musica2), 1,Teste);
    fwrite(nome_autor2, sizeof(nome_autor2), 1,Teste);

    fwrite(nome_musica3, sizeof(nome_musica3), 1,Teste);
    fwrite(nome_autor3, sizeof(nome_autor3), 1,Teste);

    fclose(Teste);//salvar

}
void listarDados()
{
    Teste = fopen("Teste.txt", "r");
    fread(nome_musica1, sizeof(nome_musica1), 1,Teste);
    fread(nome_autor1, sizeof(nome_autor1), 1,Teste);

    fread(nome_musica2, sizeof(nome_musica2), 1,Teste);
    fread(nome_autor2, sizeof(nome_autor2), 1,Teste);

    fread(nome_musica3, sizeof(nome_musica3), 1,Teste);
    fread(nome_autor3, sizeof(nome_autor3), 1,Teste);

    printf("%s \n", nome_musica1);
    printf("%s \n", nome_autor1);
    printf("%s \n", nome_musica2);
    printf("%s \n", nome_autor2);
    printf("%s \n", nome_musica3);
    printf("%s \n", nome_autor3);

    fclose(Teste);//salvar
}
void pesquisarMusica()
{
	char wrd[256];
	int i, j=0;

	Teste = fopen("Teste.txt", "r");	// open file

    fread(nome_musica1, sizeof(nome_musica1), 1,Teste);
    fread(nome_autor1, sizeof(nome_autor1), 1,Teste);

    fread(nome_musica2, sizeof(nome_musica2), 1,Teste);
    fread(nome_autor2, sizeof(nome_autor2), 1,Teste);

    fread(nome_musica3, sizeof(nome_musica3), 1,Teste);
    fread(nome_autor3, sizeof(nome_autor3), 1,Teste);

    fflush(stdin);
	printf("Qual nome da musica que voce quer procurar?  ");
	gets(wrd);

    for (i = 0; wrd[i] != '\0' ; i++)
    {
        if (wrd[i] != nome_musica1[i])
        {

            break;
        }
    }

    if (wrd[i] == '\0' && nome_musica1[i] == '\0')
    {
        printf("%s \n", wrd);
        j = 1;
    }

   for (i = 0; wrd[i] != '\0' ; i++)
    {
        if (wrd[i] != nome_musica2[i])
        {

            break;
        }
    }

    if (wrd[i] == '\0' && nome_musica2[i] == '\0')
    {
        printf("%s \n", wrd);
        j = 1;
    }

    for (i = 0; wrd[i] != '\0' ; i++)
    {
        if (wrd[i] != nome_musica3[i])
        {

            break;
        }
    }

    if (wrd[i] == '\0' && nome_musica3[i] == '\0')
    {
        printf("%s \n", wrd);
        j = 1;
    }


    if (j == 0)
    {
        printf("nao encontrado");
    }
    
	fclose(Teste);
}
void pesquisarAutor()
{
	char wrd[256];
	int i, j=0;

	Teste = fopen("Teste.txt", "r");	// open file

    fread(nome_musica1, sizeof(nome_musica1), 1,Teste);
    fread(nome_autor1, sizeof(nome_autor1), 1,Teste);

    fread(nome_musica2, sizeof(nome_musica2), 1,Teste);
    fread(nome_autor2, sizeof(nome_autor2), 1,Teste);

    fread(nome_musica3, sizeof(nome_musica3), 1,Teste);
    fread(nome_autor3, sizeof(nome_autor3), 1,Teste);

    fflush(stdin);
	printf("Qual nome da musica que voce quer procurar?  ");
	gets(wrd);


    if (wrd[0] != nome_autor1[0])
    {
        j=0;
    }

        if (wrd[0] != nome_autor2[0])
    {
        j=0;
    }

    if (wrd[0] != nome_autor3[0])
    {
        j=0;
    }


    if (wrd[0] == nome_autor1[0])
    {
        printf("%s \n", nome_autor1);
        j = 1;
    }

    if (wrd[0] == nome_autor2[0])
    {
        printf("%s \n", nome_autor2);
        j = 1;
    }

    if (wrd[0] == nome_autor3[0])
    {
        printf("%s \n", nome_autor3);
        j = 1;
    }

    if (j == 0)
    {
        printf("Nao encontrado");
    }
    
	fclose(Teste);
}

void alterarDados()
{
    char wrd[256];
	int i, j=0;

	Teste = fopen("Teste.txt", "r");	// open file
    fread(nome_musica1, sizeof(nome_musica1), 1,Teste);
    fread(nome_autor1, sizeof(nome_autor1), 1,Teste);

    fread(nome_musica2, sizeof(nome_musica2), 1,Teste);
    fread(nome_autor2, sizeof(nome_autor2), 1,Teste);

    fread(nome_musica3, sizeof(nome_musica3), 1,Teste);
    fread(nome_autor3, sizeof(nome_autor3), 1,Teste);

    fflush(stdin);
	printf("Qual nome da musica(completo) que voce quer procurar?  ");
	gets(wrd);

    for (i = 0; wrd[i] != '\0' ; i++)
    {
        if (wrd[i] != nome_musica1[i])
        {

            break;
        }
    }

    if (wrd[i] == '\0' && nome_musica1[i] == '\0')
    {
        printf("' %s ' encontrado \n", wrd);

        Teste = fopen("Teste.txt", "w");


        fflush(stdin);
        printf("Envie o nome da musica 1\n");
        gets(nome_musica1);

        fflush(stdin);
        printf("Envie o nome do Autor 1\n");
        gets(nome_autor1);


        j = 1;
    }

   for (i = 0; wrd[i] != '\0' ; i++)
    {
        if (wrd[i] != nome_musica2[i])
        {

            break;
        }
    }

    if (wrd[i] == '\0' && nome_musica2[i] == '\0')
    {
        printf("' %s ' encontrado \n", wrd);

        Teste = fopen("Teste.txt", "w");


        fflush(stdin);
        printf("Envie o nome da musica 2\n");
        gets(nome_musica2);

        fflush(stdin);
        printf("Envie o nome do Autor 2\n");
        gets(nome_autor2);

        j = 1;
    }

    for (i = 0; wrd[i] != '\0' ; i++)
    {
        if (wrd[i] != nome_musica3[i])
        {

            break;
        }
    }

    if (wrd[i] == '\0' && nome_musica3[i] == '\0')
    {
        printf("' %s ' encontrado \n", wrd);

        Teste = fopen("Teste.txt", "w");


        fflush(stdin);
        printf("Envie o nome da musica 3\n");
        gets(nome_musica3);

        fflush(stdin);
        printf("Envie o nome do Autor 3\n");
        gets(nome_autor3);

        j = 1;
    }


    if (j == 0)
    {
        printf("nao encontrado");
    }

    fwrite(nome_musica1, sizeof(nome_musica1), 1,Teste);
    fwrite(nome_autor1, sizeof(nome_autor1), 1,Teste);

    fwrite(nome_musica2, sizeof(nome_musica2), 1,Teste);
    fwrite(nome_autor2, sizeof(nome_autor2), 1,Teste);

    fwrite(nome_musica3, sizeof(nome_musica3), 1,Teste);
    fwrite(nome_autor3, sizeof(nome_autor3), 1,Teste);

	fclose(Teste);
}
void excluirDados()
{
    char wrd[256];
	int i, j=0;

	Teste = fopen("Teste.txt", "r");	// open file
    fread(nome_musica1, sizeof(nome_musica1), 1,Teste);
    fread(nome_autor1, sizeof(nome_autor1), 1,Teste);

    fread(nome_musica2, sizeof(nome_musica2), 1,Teste);
    fread(nome_autor2, sizeof(nome_autor2), 1,Teste);

    fread(nome_musica3, sizeof(nome_musica3), 1,Teste);
    fread(nome_autor3, sizeof(nome_autor3), 1,Teste);

    fflush(stdin);
	printf("Qual nome da musica(completo) que voce quer apagar?  ");
	gets(wrd);

    for (i = 0; wrd[i] != '\0' ; i++)
    {
        if (wrd[i] != nome_musica1[i])
        {

            break;
        }
    }

    if (wrd[i] == '\0' && nome_musica1[i] == '\0')
    {
        printf("apagado \n");

        Teste = fopen("Teste.txt", "w");

        for (int k = 0; k < 18; k++)
        {
            nome_musica1[k] = '#';  
        }

        for (int k = 0; k < 18; k++)
        {
            nome_autor1[k] = '#';  
        }


        j = 1;
    }

   for (i = 0; wrd[i] != '\0' ; i++)
    {
        if (wrd[i] != nome_musica2[i])
        {

            break;
        }
    }

    if (wrd[i] == '\0' && nome_musica2[i] == '\0')
    {
        printf("apagado \n");

        Teste = fopen("Teste.txt", "w");


        for (int k = 0; k < 18; k++)
        {
            nome_musica2[k] = '#';  
        }

        for (int k = 0; k < 18; k++)
        {
            nome_autor2[k] = '#';  
        }

        j = 1;
    }

    for (i = 0; wrd[i] != '\0' ; i++)
    {
        if (wrd[i] != nome_musica3[i])
        {

            break;
        }
    }

    if (wrd[i] == '\0' && nome_musica3[i] == '\0')
    {
        printf("apagado \n");

        Teste = fopen("Teste.txt", "w");


        for (int k = 0; k < 18; k++)
        {
            nome_musica3[k] = '#';  
        }

        for (int k = 0; k < 18; k++)
        {
            nome_autor3[k] = '#';  
        }

        j = 1;
    }


    if (j == 0)
    {
        printf("nao encontrado");
    }

    fwrite(nome_musica1, sizeof(nome_musica1), 1,Teste);
    fwrite(nome_autor1, sizeof(nome_autor1), 1,Teste);

    fwrite(nome_musica2, sizeof(nome_musica2), 1,Teste);
    fwrite(nome_autor2, sizeof(nome_autor2), 1,Teste);

    fwrite(nome_musica3, sizeof(nome_musica3), 1,Teste);
    fwrite(nome_autor3, sizeof(nome_autor3), 1,Teste);
    
	fclose(Teste);

    repetir();
}

int repetir()
{
int op;
do
{
printf("\n\tDeseja repetir? (1 - Sim / 0 - Não)");
scanf("%d",&op);
system("cls");
}
while(op < 0 || op > 1);
return op;
}

#endif // desafio