#include <stdio.h>
#include<stdlib.h>

#define tabuleiro 10

#define navio 3


int main () {
   
        
    int numero =1;

    char letra[10] ={'A','B','C','D','E','F','G','H','I','J'};

    int matriz[tabuleiro][tabuleiro];

    

        
    for(int i =0; i < tabuleiro; i++){                   
        
    for(int j =0; j < tabuleiro; j++){ 

                                   
      matriz[i][j] = 0;  

    }  
        
       }


      for (int i = 0; i < navio; i++){

        matriz[2][3 +i] =3;

      }
 
    

    for(int i =0; i < navio; i++){

        matriz[5 +i][7] = 3;

     }    

    
        
     printf("*****Tabuleiro Batalha Naval*****\n");

    for( int j =0; j < tabuleiro; j++){

      printf("  %c",letra[j]);
    }

    printf("\n");
    
    for(int i =0; i < tabuleiro; i++){

      printf("%d ",numero);

     numero++;

                     
        
    for(int j =0; j < tabuleiro; j++){

                             
    
    printf(" %d ",matriz[i][j]);       

    }

    printf("\n");

    
              
    }

   }



    
