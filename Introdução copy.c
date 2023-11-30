#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

struct dados_aluno
{
    char nome[200];
    int idade;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    // struct dados_aluno --> tipos dos dados  
    // aluno --> variável

    struct dados_aluno aluno;

    printf("Digite o nome do aluno: ");
    gets(aluno.nome);
    
    printf("\nDigite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    system("cls || clear");

    printf("\nNome: %s", aluno.nome);
    printf("\nIdade: %d", aluno.idade);
    printf("\n");

    return 0;
}