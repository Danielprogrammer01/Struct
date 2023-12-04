#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

#define quantidadeDeAlunos 1
#define quantidadeDeProfessores 1
#define quantidadeDeTurmas 2
#define quantidadeDeDisciplinas 2
#define quantidadeDeNotas 2

struct ficha_do_aluno
{
    char numeroDaTurma[999];
    char nome[999];
    char idade[999];
    float notas[2];
    float media;
    char situacao[999];
};

struct ficha_do_professor
{
    char nome[999];
    char disciplinas[quantidadeDeDisciplinas];
    char turmas[quantidadeDeTurmas];
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int j;
    float somaDasNotas = 0;
    struct ficha_do_aluno aluno[quantidadeDeAlunos];
    struct ficha_do_professor professor[quantidadeDeProfessores];

    for (i = 0; i < quantidadeDeAlunos; i++)
    {
        printf("\nDigite o nome do %dº aluno: ", i + 1);
        gets(aluno[i].nome);

        printf("\nDigite a idade: ");
        gets(aluno[i].idade);

        printf("\nDigite o número da turma: ");
        gets(aluno[i].numeroDaTurma);

        for (j = 0; j < quantidadeDeNotas; j++)
        {
            printf("\nDigite a %dª nota: ", j + 1);
            scanf("%f", &aluno[i].notas[j]);

            somaDasNotas += aluno[i].notas[j];
            aluno[i].media = somaDasNotas / quantidadeDeNotas;
        }

        fflush(stdin);

        system("cls || clear");
    }

    if (aluno[i].media >= 7.0)
    {
        strcpy(aluno[i].situacao, "Aprovado!");
    }
    else if (aluno[i].media > 5.0)
    {
        strcpy(aluno[i].situacao, "Em recuperação!");
    }
    else
    {
        strcpy(aluno[i].situacao, "Reprovado!");
    }

    fflush(stdin);

    for (i = 0; i < quantidadeDeProfessores; i++)
    {
        fflush(stdin);

        printf("\nDigite o nome do %dº professor: ", i+1);
        gets(professor[i].nome);

        fflush(stdin);


        for (j = 0; j < quantidadeDeDisciplinas; j++)
        {
            fflush(stdin);

            printf("\nDigite o nome da disciplina %d: ", j+1);
            gets(professor[i].disciplinas[j]);

            fflush(stdin);
        }

        for (j = 0; j < quantidadeDeTurmas; j++)
        {
            fflush(stdin);

            printf("\nDigite o numero da turma %d", j + 1);
            gets(professor[i].turmas[j]);
            
            fflush(stdin);
        }

        fflush(stdin);

        system("cls || clear");
    }

    system("cls || clear");

    for (i = 0; i < quantidadeDeAlunos; i++)
    {
        printf("\nNome do %dº aluno: %s", i + 1, aluno[i].nome);

        printf("\nIdade: %s", aluno[i].idade);

        printf("\nTurma: %s", aluno[i].numeroDaTurma);

        printf("\nMédia: %.1f", aluno[i].media);

        printf("\nSituação: %s", aluno[i].situacao);

        printf("\n");
    }
    for (i = 0; i < quantidadeDeProfessores; i++)
    {
        printf("\nNome do %dº professor: %s", i + 1, professor[i].nome);

        for (j = 0; j < quantidadeDeDisciplinas; j++)
        {
            printf("\nDisciplinas: %s", professor[i].disciplinas[j]);
        }

        for (j = 0; j < quantidadeDeTurmas; j++)
        {
            printf("\nTurmas: %s", aluno[i].numeroDaTurma[j]);
        }

        printf("\n");
    }

    return 0;
}