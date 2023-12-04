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
    char idade[999];
    char cpf[999];
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int codigo;
    int quantidadeDeCadastrados;
    int quantidadeDeClientes;
    int quantidadeDeFuncionarios;
    struct dados_pessoais funcionario[999];
    struct dados_pessoais cliente[999];

    do
    {
        printf("\n[1] ADICIONAR FUNCIONÁRIO");
        printf("\n[2] ADICIONAR CLIENTE");
        printf("\n[3] EXIBIR CADASTRADOS");
        printf("\n");
        

        printf("Escolha a opção desejada: ");
        scanf("%d", &codigo);

        system("cls || clear");

        for (i = 0; i < 1; i++)
        {
            switch (codigo)
            {

            case 1:

            printf("\nDigite o nome do %dº funcionário : ", quantidadeDeFuncionarios+1);
            gets(funcionario[quantidadeDeFuncionarios].nome);
                
            printf("\nDigite a idade:\n");
            gets(funcionario[quantidadeDeFuncionarios].idade);

            printf("\nDigite O CPF: ");
            gets(funcionario[quantidadeDeFuncionarios].cpf);

            quantidadeDeFuncionarios++;
            
                break;

            case 2:

            printf("\nDigite o nome do %dº cliente: ", quantidadeDeClientes+1);
            gets(cliente[quantidadeDeCadastrados].nome);
                
            printf("\nDigite a idade:\n");
            gets(cliente[quantidadeDeCadastrados].idade);

            printf("\nDigite O CPF: ");
            gets(cliente[quantidadeDeCadastrados].cpf);

            quantidadeDeClientes++;

                break;

            case 3:
                break;
            
            default:
                printf("OPÇÃO INVÁLIDA! DIGITE NOVAMENTE");
                break;
            }

        }

        quantidadeDeCadastrados++;

    } while (codigo != 3);

    system("cls || clear");

    printf("\nQuantidade de Cadastrados: %d", quantidadeDeCadastrados);

    printf("\nFuncionários: %d", quantidadeDeFuncionarios);

        for (i = 0; i < quantidadeDeFuncionarios; i++)
        {
            printf("\n%dº Funcionário - %s", i+1, funcionario[i].nome);
            printf("\nIdade: %s", funcionario[i].idade);
            printf("\nCPF: %s",funcionario[i].cpf);
            printf("\n");
        }
        
        printf("\nClientes: %d", quantidadeDeClientes);

        for (i = 0; i < quantidadeDeClientes; i++)
        {
            printf("\n%dº Cliente - %s", i+1, cliente[i].nome);
            printf("\nIdade: %s", cliente[i].idade);
            printf("\nCPF: %s",cliente[i].cpf);
            printf("\n");
        }

        printf("\n");
    
    return 0;
}