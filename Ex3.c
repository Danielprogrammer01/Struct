#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>


struct informacoes
{
    char nome[999];
    char autor[999];
    char categoria[999];
    float preco;

};

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int quantidadeDeLivros = 2;
    struct informacoes livro[quantidadeDeLivros];

    for (i = 0; i < quantidadeDeLivros; i++)
    {
        printf("\nDigite o nome do %dº livro: ", i+1);
        gets(livro[i].nome);
        
        printf("\nDigite o nome do autor: ");
        gets(livro[i].autor);

        printf("\nDigite a categoria: ");
        gets(livro[i].categoria);

        fflush(stdin);

        printf("\nDigite o preço: R$");
        scanf("%f", &livro[i].preco);

        fflush(stdin);

        system("cls || clear");

    }
    
    system("cls || clear");

        for (i = 0; i < quantidadeDeLivros; i++)
    {
        printf("\nNome do %dºlivro: %s", i+1, livro[i].nome);
        
        printf("\n");
 
        printf("\nAutor: %s ", livro[i].autor);

        printf("\nCategoria: %s", livro[i].categoria);

        printf("\nPreço: R$%.2f", livro[i].preco);

        printf("\n");
    }

    return 0;
}