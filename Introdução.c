#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[200];
    int idade;
    
    printf("Digite o nome do aluno: ");
    gets(nome);
    
    printf("\nDigite a idade do aluno: ");
    scanf("%d", &idade);

    system("cls || clear");

    printf("\nNome: %s", nome);
    printf("\nIdade: %d", idade);
    printf("\n");

    return 0;
}