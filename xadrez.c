#include <stdio.h>

void moverbispo(int bispo){
    
    if(bispo > 0){//Condição para rodar
        moverbispo(bispo - 1);//Chama a função novamente com o valor de bispo - 1
        
    
    for( int cima = 1; cima <= 1; cima++)
        {//Loop Externo
         printf("Cima, ");//Executa 5 vezes e se torna falso 
        
            for(int horizontal = 1; horizontal == 1; horizontal++)
            {//Loop Interno
                printf("Direita: %d vezes.\n", bispo);//Executa 5 vezes após o cima e se torna falso
            }
        }
}
}

void moverrainha(int rainha){//Função para o movimento da Rainha
    
    if(rainha > 0){//Condição para rodar
        moverrainha(rainha - 1);//Chama a função novamente com o valor de rainha - 1
        printf("Esquerda: %d vezes.\n", rainha);//Executa 8 vezes e se torna falso
       
    }
}

void movertorre(int torre){//Função para o movimento da Rainha
    
    if(torre > 0){//Condição para rodar
        movertorre(torre - 1);//Chama a função novamente com o valor de rainha - 1
        printf("Direita: %d vezes.\n", torre);//Executa 5 vezes e se torna falso
       
    }
}

void movercavalo(int cavalo){
 //Variável para o movimento do cavalo
    if(cavalo > 0){//Condição para rodar
       movercavalo(cavalo - 1);
         for (int linha = 1, coluna = 1; linha <= 1 && coluna  <= 1; linha++, coluna++){
            //Loop Externo
            for( ; coluna == 1 || coluna <= 2; coluna++){
                //Loop Interno
                printf("Cima, ");//Executa 2 vezes e se torna falso
            }
                printf("Direita: %d vez.\n", cavalo);//Executa 1 vezes após o cima e se torna falso

        }

 
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
    

    return 0;
}