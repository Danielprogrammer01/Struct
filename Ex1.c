#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

struct dados_aluno
{
    char nome [200];
    int idade;
    float peso;
    float altura;
};


int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dados_aluno aluno;

    printf("Digite o nome do aluno: ");
    gets(aluno.nome);

    printf("\nDigite a idade: ");
    scanf("%d", &aluno.idade);

    printf("\nDigite o peso: ");
    scanf("%f", &aluno.peso);

    printf("\nDigite oa altura: ");
    scanf("%f", &aluno.altura);
    
    system("cls || clear");

    printf("Nome: %s", aluno.nome);
    printf("\nIdade: %d anos", aluno.idade);
    printf("\nPeso: %.1fkg", aluno.peso);
    printf("\nAltura: %.2fm", aluno.altura);
    printf("\n");

    return 0;
}