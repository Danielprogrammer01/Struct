#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>


struct dados_pessoais
{
    char nome[999];
    char dataDeNascimento[3][999];
    char rg[999];
    char cpf[999];
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int quantidadeDePessoas = 1;
    struct dados_pessoais pessoa[quantidadeDePessoas];

    for (i = 0; i < quantidadeDePessoas; i++)
    {
        printf("\nDigite o nome da %dª pessoa: ", i+1);
        gets(pessoa[i].nome);
        
        printf("\nDigite a data de nascimento:\n");

        printf("\nDia: ");
        gets(pessoa[i].dataDeNascimento[0]);

        printf("\nMês: ");
        gets(pessoa[i].dataDeNascimento[1]);

        printf("\nAno: ");
        gets(pessoa[i].dataDeNascimento[2]);

        printf("\nDigite o RG: ");
        gets(pessoa[i].rg);

        printf("\nDigite O CPF: ");
        gets(pessoa[i].cpf);

        system("cls || clear");

    }
    
    system("cls || clear");

        for (i = 0; i < quantidadeDePessoas; i++)
    {
        printf("\nNome da %dª pessoa: %s", i+1, pessoa[i].nome);

        printf("\nData de nascimento: %s/%s/%s ", pessoa[i].dataDeNascimento[0], pessoa[i].dataDeNascimento[1], pessoa[i].dataDeNascimento[2]);

        printf("\nRG: %s", pessoa[i].rg);

        printf("\nCPF: %s", pessoa[i].cpf);

        printf("\n");
    }

    return 0;
}