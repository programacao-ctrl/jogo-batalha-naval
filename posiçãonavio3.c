#include <stdio.h>
  void linhas(int linhas) {
     if(linhas == 10){
      printf("linhas == 10");
     };
  }
        
  void colunas (int colunas){
    if(colunas == 10){
      printf("colunas == 10");
    };
  }

   void agua (int agua){
    if(agua == 0) {
      printf("agua == o");
    };
   }

   void navio(int navio){
    if(navio == 3){
      printf("navio == 3");
    };
   }

  int main(){

      int tabuleiro[10][10];
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
       
       printtf("\n");
   


      for(int i = 0; i < linhas; i++)
      {
        printf("%2d |", i + 1);
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
           printf("|\n");
      }
      }     


















    return 0;
  }