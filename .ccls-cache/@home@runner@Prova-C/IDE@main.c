#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao, opcao1, opcao2, opcao3, opcao4, i, quant;
  struct referencia {
    char nome[100], nome1[100], nome2[100], nome3[100], nome4[100];
  } CA[5000];

  char nome5[40];

  system("cls");
  printf("nome do Atendente: ");
  fflush(stdin);
  scanf("%[^\n]s", nome5);
  printf("Senha da Loja: ");
  scanf("%d", &opcao3);
  system("color 6B");

  switch (opcao3) {
  case 123456:

    while (opcao != 6) {
      while (opcao2 != 1) {
        system("cls");

        printf(
            "------------------------------------------------------------\n ");
        printf("\t\t\t\tLoja\n");
        printf(
            "------------------------------------------------------------\n ");
        printf("\t\t\t\tBem Vindo, Funcionário %s\n", nome5);
        printf(
            "------------------------------------------------------------\n ");
        printf("1-Cadastrar\n ");
        printf("2-Exibir Informações\n ");
        printf("3-Alterar\n ");
        printf("4-Excluir\n ");
        printf("5-Informações do Sistemas\n ");
        printf("6-Sair\n ");
        printf(
            "------------------------------------------------------------\n ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
          system("cls");
          printf("\n\n Cadastre os produtos");
          scanf("%d", &quant);

          for (i = 1; i <= quant; i++) {
            system("cls");
            printf("\t\t\t\tCADASTRO\n ");
            printf("----------------------------------------------------\n ");
            printf("\n Nome do Cliente: ");
            fflush(stdin);
            scanf("%[^\n]s", CA[i].nome);
            printf("\n Nome do Fornecedor: ");
            fflush(stdin);
            scanf("%[^\n]s", CA[i].nome1);
            printf("\n Nome do Produto: ");
            fflush(stdin);
            scanf("%[^\n]s", CA[i].nome2);
            printf("\n Preço do Produto: ");
            fflush(stdin);
            scanf("%[^\n]s", CA[i].nome3);
            printf("\n\n\n\t\t");
            system("pause");
            system("cls");
          }
          break;

        case 2:
          system("cls");

          for (i = 1; i <= quant; i++) {
            system("cls");
            printf("\n\n\t\t\t CADASTRADO %d\n", i);
            printf("----------------------------------------------------\n ");
            printf("\n Nome do Cliente: %Ss\n", CA[i].nome);
            printf("\n Nome do Fornecedor: %Ss\n", CA[i].nome1);
            printf("\n Preço do Produto: %Ss\n", CA[i].nome2);
            printf("\n preço do Cliente: %Ss\n", CA[i].nome3);
          }
        }
      }
    }
  }
}
