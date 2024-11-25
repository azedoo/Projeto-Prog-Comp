#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define contas 1

typedef struct
{
     int id;
     char nome[50];
     char apelido[50];
     int idade;
     char email[50];
     char senha[50];
} Conta_Steam;

void DadosCadastrais(Conta_Steam cs[])
{
     int escolha = 0, i, j, idExcluir;
     char apague;

     while(escolha != 4)
     {
          printf("***************************************************************\n");
          printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  *\n");
          printf("*\t  SSSSSSSSS\t TTTTTTTTTT\tEEEEEEE\t    AAA\t\tMMM     MMM\t  *\n");
          printf("*\t SSSSSSSSS\t TTTTTTTTTT\tEEEEEE \t   AAAAA\tMMM     MMM\t  *\n");
          printf("*\tSSS\t\t\t\tTTTT\tEEE\t\t  AAAAAAA\tMMMM   MMMM\t  *\n");
          printf("*\tSS \t\t\t\tTTTT\tEEE\t\t AAAA AAAA\tMMMMM MMMMM\t  *\n");
          printf("*\tSSS\t\t\t\tTTTT\tEEE\t\t AAA   AAA\tMMMMMMMMMMM\t  *\n");
          printf("*\tSSSSSSSSSS \t\tTTTT\tEEEEEEE\t AAA   AAA\tMMMMMMMMMMM\t  *\n");
          printf("*\t SSSSSSSSSS\t\tTTTT\tEEEEEEE\t AAAAAAAAA\tMMM  M  MMM\t  *\n");
          printf("*\t        SSS\t\tTTTT\tEEE\t\t AAAA AAAA\tMMM     MMM\t  *\n");
          printf("*\t         SS\t\tTTTT\tEEE\t\t AAA   AAA\tMMM     MMM\t  *\n");
          printf("*\t        SSS\t\tTTTT\tEEE\t\t AAA   AAA\tMMM     MMM\t  *\n");
          printf("*\t SSSSSSSSS \t\tTTTT\tEEEEEE \t AAA   AAA\tMMM     MMM\t  *\n");
          printf("*\tSSSSSSSSS  \t\tTTTT\tEEEEEEE\t AAA   AAA\tMMM     MMM\t  *\n");
          printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  *\n");
          printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  *\n");
          printf("***************************************************************\n");
          printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  *\n");
          printf("*\t\t\t1 - Cadastrar Conta Steam\t\t\t\t\t\t  *\n");
          printf("*\t\t\t2 - Listar Conta Steam\t\t\t\t\t\t\t  *\n");
          printf("*\t\t\t3 - Excluir Conta Steam\t\t\t\t\t\t\t  *\n");
          printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  *\n");
          printf("*\t\t\t4 - Sair\t\t\t\t\t\t\t\t\t\t  *\n");
          printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  *\n");
          printf("***************************************************************\n\n");
          printf("Entre com a opcao desejada: ");
          scanf("%i", & escolha);
          getchar();

          while(escolha < 1 && escolha > 4)
          {
               printf("Escolha um valor correto de 1 a 4: ");
               scanf("%i", & escolha);
               getchar();
          }
          printf("\n---------------------------------------------------------------\n\n");

          if(escolha == 1)
          {
               printf("\n***************************************************************\n");
               printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  *\n");
               printf("*\t\t\t\t\tCadastro de Conta Steam\t\t\t\t\t  *\n");
               printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  *\n");
               printf("***************************************************************\n");
               printf("***************************************************************\n");
               printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  *\n");
               printf("*\t\tEntre com valor de conta = 0 para encerrar.\t\t\t  *\n");
               printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  *\n");
               printf("***************************************************************\n\n");
               for(i = 0; i < contas; i++)
               {
                    printf("Informe o numero da conta (deve ser maior que 100): ");
                    scanf("%i", & cs[i].id);
                    getchar();

                    while(cs[i].id < 100 && cs[i].id != 0)
                    {
                         printf("Nao aceitamos valores menor que 100.\n");
                         printf("Informe um numero da conta maior que 100: ");
                         scanf("%i", & cs[i].id);
                         getchar();
                    }

                    if(cs[i].id == 0)
                    {
                         printf("\nVoltando ao Menu Principal.\n\n");
                         break;
                    }

                    printf("Informe o Nome do Usuario (Esse nome so vai aparecer para seus amigos): ");
                    gets(cs[i].nome);

                    printf("Informe o Apelido do Usuario (Esse apelido sera visivel para todos): ");
                    gets(cs[i].apelido);

                    printf("Informe o email do Usuario: ");
                    gets(cs[i].email);

                    printf("Informe a senha do Usuario: ");
                    gets(cs[i].senha);

                    printf("\n***************************************************************\n");
                    printf("*\t  Usuario Cadastrado com Sucesso! Aproveite a Steam!\t  *\n");
                    printf("***************************************************************\n\n");
               }
               printf("---------------------------------------------------------------\n\n");
          }

          else if(escolha == 2)
          {
               printf("\n***************************************************************\n");
               printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  *\n");
               printf("*\t\t\t\t\tLista de Conta Steam\t\t\t\t\t  *\n");
               printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  *\n");
               printf("***************************************************************\n");
               printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  *\n");
               printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  *\n");
               printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  *\n");
               printf("***************************************************************\n\n");
               for(i = 0; i < contas; i++)
               {
                    if(cs[i].id != 0)
                    {
                         printf("Numero da Conta: %i\n", cs[i].id);

                         printf("Nome do Usuario: %s\n", cs[i].nome);

                         printf("Apelido do Usuario: %s\n", cs[i].apelido);

                         printf("Email do Usuario: %s\n", cs[i].email);

                         printf("Senha do Usuario: ");
                         for(j = 0; j < strlen(cs[i].senha); j++)
                         {
                              printf("*");
                         }
                         printf("\n\n");
                    }
               }
               printf("---------------------------------------------------------------\n\n");
          }

          else if(escolha == 3)
          {
               printf("\n***************************************************************\n");
               printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  *\n");
               printf("*\t\t\t\t\tExclusao de Conta Steam\t\t\t\t\t  *\n");
               printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  *\n");
               printf("***************************************************************\n");
               printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  *\n");
               printf("*\t\tEntre com valor de conta = 0 para encerrar.\t\t\t  *\n");
               printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  *\n");
               printf("***************************************************************\n\n");
               for(i = 0; i < contas; i++)
               {
                    printf("Escreva o numero da conta a ser excluida: ");
                    scanf("%i", & idExcluir);
                    getchar();

                    if(idExcluir == 0)
                    {
                         printf("\nVoltando ao Menu Principal.\n\n");
                         break;
                    }

                    while(idExcluir != cs[i].id)
                    {
                         printf("Digite um id correto.\n");

                         printf("Escreva o numero da conta a ser excluida: ");
                         scanf("%i", & cs[i].id);
                         getchar();
                    }

                    if(idExcluir == cs[i].id)
                    {
                         printf("Numero da Conta: %i\n", cs[i].id);
                         
                         printf("Nome do Usuario: %s\n", cs[i].nome);

                         printf("Apelido do Usuario: %s\n", cs[i].apelido);

                         printf("Email do Usuario: %s\n", cs[i].email);

                         printf("Senha do Usuario: *********\n");

                         printf("Confirmar a exclusão? [S / N]: ");
                         scanf(" %c", & apague);
                         getchar();

                         while (apague != 'S' && apague != 's' && apague != 'n' && apague != 'N')
                         {
                              printf("\nEscreva a opcao corretamente.\n");

                              printf("Confirmar a exclusão? [S / N]: ");
                              scanf(" %c", & apague);
                         }

                         if(apague == 'S' || apague == 's')
                         {
                              cs[i].id = 0;
                              strcpy(cs[i].nome, "");
                              strcpy(cs[i].apelido, "");
                              strcpy(cs[i].email, "");
                              strcpy(cs[i].senha, "");
                              printf("\n***************************************************************\n");
                              printf("*  Conta Excluida. Ficamos tristes em despedir de voce :(\t  *\n");
                              printf("***************************************************************\n");
                         }

                         else if(apague == 'N' ||  apague == 'n')
                         {
                              printf("\n***************************************************************\n");
                              printf("*\t\t\t\t\tOperacao cancelada!\t\t\t\t\t\t  *\n");
                              printf("***************************************************************\n");
                         }
                         printf("\n");
                    }
               }
               printf("---------------------------------------------------------------\n\n");
          }

          else if(escolha == 4)
          {
               printf("***************************************************************\n");
               printf("*\t\t\t\t\t\tAte Breve!\t\t\t\t\t\t\t  *\n");
               printf("***************************************************************\n");
          }
     }
}

void main()
{
     Conta_Steam cs[contas];

     DadosCadastrais(cs);
}