#include <stdio.h>
    
void moverbispo(int bispo){
if (bispo > 0){                                      //Função para o movimento da Bispo  
    moverbispo(bispo - 1);                           //Chama a função novamente com o valor de bispo - 1
    for( int cima = 1; cima <= 1; cima++)
        {                                            //Loop Externo
         printf("Cima, ");                           //Executa 1 vez e se torna falso 
        
    for(int horizontal = 1; horizontal == 1; horizontal++)
    {                                                //Loop Interno
        printf("Direita: %d vezes.\n", bispo);       //Executa 1 vez após o cima e se torna falso
            }
        }
}
}

void moverrainha(int rainha){                       //Função para o movimento da Rainha
    if(rainha > 0){                                 //Condição para rodar
        moverrainha(rainha - 1);                    //Chama a função novamente com o valor de rainha - 1
    for(int coluna = 1; coluna == 1; coluna++)
    {
        do{                                         //Loop Interno
            printf("Esquerda. %d vezes. ", rainha);     //Executa 1 vez 
        }while( coluna <= 0);                       //Não continua o loop, pois a condição é falsa
        coluna++;                                   //Incrementa o valor da coluna
        printf("\n");                               //Pula uma linha
    }                                               //Fim do Loop Externo
    }
}



void movertorre(int torre){                         //Função para o movimento da Rainha
    if(torre > 0){                                  //Condição para rodar
        movertorre(torre - 1);                      //Chama a função novamente com o valor de torre - 1
        
        for(int linha = 1; linha <= 1; linha++)
        {//Loop Externo  
         for( ; linha <= 1; linha++)//Loop Interno
         {
            printf("Direita %d vezes ", torre);     //Executa 2 vezes e se torna falso
        
        }
        printf("\n");                            //Pula uma linha
    }
}
}

void movercavalo(int cavalo){
 //Variável para o movimento do cavalo
    if(cavalo > 0){                                   //Condição para rodar
    movercavalo(cavalo - 1);                          //Chama a função novamente com o valor de cavalo - 1
    for (int linha = 1, coluna = 1; linha <= 1 && coluna  <= 1; linha++) //For - Loop Externo

    while(coluna <= 1 || coluna == 2){//Loop Interno  //While - Loop Interno
        printf("Cima, ");                              //Executa 2 vezes e se torna falso
        coluna++;                                     //Incrementa o valor da coluna
        }
        printf("Direita: %d vezes.\n", cavalo);       //Executa 1 vezes após o cima e se torna falso

        }

 
    } 


int main(){
    printf("\n");

    //Movimento do Bispo
    printf("Veja como o Bispo se movimenta no tabuleiro:\n");
    moverbispo(5);//Chama a função do bispo
    printf("\n");
    
    //Movimento da Rainha
    printf("Veja como a Rainha se movimenta no tabuleiro:\n");
    moverrainha(8);//Chama a função da rainha
    printf("\n");

    //Movimento da Torre
    printf("Veja como a Torre se movimenta no tabuleiro:\n");
    movertorre(5);//Chama a função da torre
    printf("\n");

    //Movimento do Cavalo
    printf("Veja como o Cavalo se movimenta no tabuleiro:\n");
    movercavalo(1);//Chama a função do cavalo
    printf("\n");
    

return 0;
}