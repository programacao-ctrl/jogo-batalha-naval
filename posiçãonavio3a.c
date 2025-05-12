#include <stdio.h>
#define linhas 10
#define colunas 10
#define agua 0
#define navio 3


  int main(){

      int tabuleiro[linhas][colunas];
      int i,j;


     printf("###inicializando o tabuleiro....###\n");
         for (int i = 0; i < linhas; i++){
              for(int j = 0; j < colunas; j++); {
                tabuleiro[i][j]= agua;
         }
        }
         
    printf("posicionando os navios....\n");


   int linhahori = 2;
   int colunahori = 3;

       for (int k = 0; k < colunas; k++)
        { if(colunahori + k < colunas){
             tabuleiro[linhahori][colunahori + k] = navio;
        }
   
       }
      
    int linhavert = 5;
    int colunavert = 7;

     for (int k = 0; k < linhas; k++)
     {  if(linhavert + k < linhas){
             tabuleiro[linhavert + k][colunavert] = navio;
     }
      
     }
     
    printf("### tabuleiro de  batalha naval ### \n");
     
    printf("     ");
     
       for (int j = 0; j < colunas; j++)
       {
        printf("%c", 'a' + j);
       }
       
       printf("\n");
   


      for(int i = 0; i < linhas; i++)
      {
        printf("%2d ", i + 1);
      {
        for (int j = 0; j < colunas; j++)
        {
           if(tabuleiro[i][j] = agua) {
            printf("0 \n");
           } else if (tabuleiro[i][j] = navio){
            printf("3 \n");
           } else {
             printf("  ?  ");
           }
        }
           printf("\n");
      }
      }     


















    return 0;
  }