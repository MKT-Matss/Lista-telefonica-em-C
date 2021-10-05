#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

struct Telefone {
     int dd;
     int tel;
    };
struct Pessoa {
    char nome[30];
    struct Telefone fone;
    char obs[50];
    };

    int main() {
         setlocale(LC_ALL,"Portuguese");
         struct Pessoa contatos[100];
         struct Pessoa aux;
         int troca;
         int opcao,op;/// VARIAVEL NA ESCOLHA DO MENU
         int indice=0;///VARIAVEL QUE CONTEM O VALOR DO INDICE DO VETOR
         int i,j,encontrou=0;///INDICA A QDE DE REGISTRO
         char pesq[30];///GUARDAR O NOME DA PESQUISA
         int cod;
         int d,m;

         do {
          system("cls");
          printf("---###--LISTA DE CONTATOS--###---\n");

          printf("\n       ####### MENU #######\n\n");
          printf("   ( 1 ) CADASTRAR CONTATO \n");
          printf("   ( 2 ) CONSULTAR UM CONTATO POR NOME \n");
          printf("   ( 3 ) LISTAR TODOS OS CONTATOS \n");
          printf("   ( 4 ) EXCLUIR UM CONTATO \n");
          printf("   ( 5 ) SAIR \n");


          printf("\n ESCOLHA UMA OPCAO:");
          scanf("%d",&opcao);
          fflush(stdin);

          switch(opcao) {
                   case 1:
                        system("cls");
                        printf("\n--**** CADASTRO DE CONTATO ****--");
                        printf("\n CODIGO:%i\n",indice);
                        printf("\n NOME:");
                        gets(contatos[indice].nome);
                        printf("\n DD:");
                        scanf("%d",&contatos[indice].fone.dd);
                        printf("\n TEL:");
                        scanf("%d",&contatos[indice].fone.tel);
                        indice++;
                        fflush(stdin);
                        break;

                    case 2:
                         system("cls");
                         printf("\n--**** CONSULTAR UM CONTATO POR NOME ****--");
                         printf("\nPESQUISAR:");
                         gets(pesq);
                         for(i=0; i<indice; i++) {
                         if(strcmp(pesq,contatos[i].nome)==0){
                         printf("\n CODIGO:%i",i);
                         printf("\n NOME:%s",contatos[i].nome);
                         printf("\n TEL:%d %d",contatos[i].fone.dd,contatos[i].fone.tel);
                         encontrou = 1;
                         }
                        } if (encontrou==0) {
                               printf("\n NENHUM REGISTRO ENCONTRADO!\n\n");
                              }
                        printf("\n");
                        system("pause");
                        break;

                  case 3:
                       printf("--**** LISTAR TODOS OS CONTATOS ****-- \n");
                       for(i=0; i<indice; i++){
                       printf("\nCODIGO: %i",i);
                       printf("\n NOME:%s",contatos[i].nome);
                       printf("\n TEL:%d %d",contatos[i].fone.dd,contatos[i].fone.tel);
                       printf("\n--------------------------------\n");
                       }
                       system("pause");
                       break;

            case 4:
                printf("\n--###----EXCLUIR CONTATO----###--\n");
                printf("\nINFORMA O CODIGO:");
                scanf("%i",&cod);
                printf("\n NOME:%s",contatos[cod].nome);
                printf("\n TEL:%d %d",contatos[cod].fone.dd,contatos[cod].fone.tel);
                printf("\nDeseja EXCLUIR CONTATO? SIM(1)/NAO(2): ");
                scanf("%i",&i);
                if(i==1){
              for(i=cod; i<indice; i++){
                  strcpy(contatos[i].nome,contatos[i+1].nome);
                  contatos[i].fone.dd=contatos[i+1].fone.dd;
                  contatos[i].fone.tel=contatos[i+1].fone.tel;

                  }
                  indice--;
                  }
                  break;
			
			case 5:
                  printf("\n----###S2S2--- SAIR----###S2S2---");
                  //***********************
                  //*    Sobre Sistema    *
                  //***********************

                  system ("cls");
                  printf ("\n     Informações dos Alunos:\n\n");
                  printf ("     RA: 202002346906 - Matheus JOSE CARNEIRO DOS SANTOS\n");
                  printf ("     RA: 00000000000 - **\n");
                  printf ("     Unidade: ESTACIO - RIBEIRÃO PRETO\n");
                  printf ("     Curso: Ciência da Computacao \n");
                  printf ("     Disciplina: ESTRUTURA DE DADOS EM C\n");
                  printf ("     Professora: Samuel\n\n");
             

                  getchar();
                  printf("\nObrigado pela visita , Volte Sempre!!\n");
                  system("exit");
                  break;



                  system("cls");

                  printf("Ordenando por Nome: ");

               break;

    }     }while(opcao!=5);
         return 0;
}
