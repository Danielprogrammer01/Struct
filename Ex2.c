#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

struct dados_pessoais
{
    char nome [999];
    int idade;
    char endereco [999];
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dados_pessoais pessoa;

    printf("Digite o nome do aluno: ");
    gets(pessoa.nome);

    printf("\nDigite a idade: ");
    scanf("%d", &pessoa.idade);

    fflush(stdin);

    printf("\nDigite o endereço: ");
    gets(pessoa.endereco);

    system("cls || clear");

    printf("Nome: %s", pessoa.nome);
    printf("\nIdade: %d anos", pessoa.idade);
    printf("\nEndereço: %s", pessoa.endereco);
    printf("\n");

    return 0;
}