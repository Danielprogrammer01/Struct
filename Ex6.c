#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

struct endereco
{
    char rua[999];
    char numero[999];
    char bairro[999];
    char cidade[999];
    char estado[999];
};

struct dados_pessoais_funcionarios
{
    char nome[999];
    char dataDeAdmissao[3][999];
    char matricula[999];
    struct endereco endereco;
};

struct dados_pessoais_clientes
{
    char nome[999];
    char dataDeNascimento[3][999];
    struct endereco endereco;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int quantidadeDeFuncionarios = 1;
    int quantidadeDeClientes = 1;

    struct dados_pessoais_funcionarios funcionario[quantidadeDeFuncionarios];
    struct dados_pessoais_clientes cliente[quantidadeDeClientes];

    for (i = 0; i < quantidadeDeFuncionarios; i++)
    {
        printf("\nDigite o nome do %d� funcion�rio: ", i + 1);
        gets(funcionario[i].nome);

        printf("\nDigite a data de admiss�o:\n");

        printf("\nDia: ");
        gets(funcionario[i].dataDeAdmissao[0]);

        printf("\nM�s: ");
        gets(funcionario[i].dataDeAdmissao[1]);

        printf("\nAno: ");
        gets(funcionario[i].dataDeAdmissao[2]);

        printf("\nDigite a matr�cula: ");
        gets(funcionario[i].matricula);

        printf("\nDigite o endere�o: ");

        printf("\nRua: ");
        gets(funcionario[i].endereco.rua);

        printf("\nN�mero: ");
        gets(funcionario[i].endereco.numero);

        printf("\nBairro: ");
        gets(funcionario[i].endereco.bairro);

        printf("\nCidade: ");
        gets(funcionario[i].endereco.cidade);

        printf("\nEstado: ");
        gets(funcionario[i].endereco.estado);

        system("cls || clear");
    }

    for (i = 0; i < quantidadeDeClientes; i++)
    {
        printf("\nDigite o nome do %d� cliente: ", i + 1);
        gets(cliente[i].nome);

        printf("\nDigite a data de nascimento:\n");

        printf("\nDia: ");
        gets(cliente[i].dataDeNascimento[0]);

        printf("\nM�s: ");
        gets(cliente[i].dataDeNascimento[1]);

        printf("\nAno: ");
        gets(cliente[i].dataDeNascimento[2]);

        printf("\nDigite o endere�o: ");

        printf("\nRua: ");
        gets(cliente[i].endereco.rua);

        printf("\nN�mero: ");
        gets(cliente[i].endereco.numero);

        printf("\nBairro: ");
        gets(cliente[i].endereco.bairro);

        printf("\nCidade: ");
        gets(cliente[i].endereco.cidade);

        printf("\nEstado: ");
        gets(cliente[i].endereco.estado);

        system("cls || clear");
    }

    system("cls || clear");

    for (i = 0; i < quantidadeDeFuncionarios; i++)
    {
        printf("\nNome do %d� funcion�rio: %s", i + 1, funcionario[i].nome);

        printf("\nData de admiss�o: %s/%s/%s ", funcionario[i].dataDeAdmissao[0], funcionario[i].dataDeAdmissao[1], funcionario[i].dataDeAdmissao[2]);

        printf("\nMatr�cula: %s", funcionario[i].matricula);

        printf("\nEndere�o: Rua %s, %s, %s, %s, %s", funcionario[i].endereco.rua, funcionario[i].endereco.numero, funcionario[i].endereco.bairro, funcionario[i].endereco.cidade, funcionario[i].endereco.estado);

        printf("\n");
    }
    for (i = 0; i < quantidadeDeClientes; i++)
    {
        printf("\nNome do %d� cliente: %s", i + 1, cliente[i].nome);

        printf("\nData de nascimento: %s/%s/%s ", cliente[i].dataDeNascimento[0], cliente[i].dataDeNascimento[1], cliente[i].dataDeNascimento[2]);

        printf("\nEndere�o: %s, %s, %s, %s, %s", cliente[i].endereco.rua, cliente[i].endereco.numero, cliente[i].endereco.bairro, cliente[i].endereco.cidade, cliente[i].endereco.estado);

        printf("\n");
    }

    return 0;
}