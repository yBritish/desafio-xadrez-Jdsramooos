#include <stdio.h>
int main(){
    int torre = 1, rainha = 1, cavalo = 1;
    printf("Veja como o Bispo se movimenta no tabuleiro:\n");

    //Movimento do Bispo

    for(int bispo = 1; bispo <= 5; bispo++){
        printf("Cima, Direita: %d vezes.\n", bispo);
    }

    printf("\n");
    
    //Movimento da Rainha
    printf("Veja como a Rainha se movimenta no tabuleiro:\n");
    while(rainha <= 8){
        printf("Esquerda: %d vezes.\n", rainha);
        rainha++;
    }

    printf("\n");

    //Movimento da Torre
    printf("Veja como a Torre se movimenta no tabuleiro:\n");
    do{
        printf("Direita: %d vezes.\n", torre);
        torre++;
    } while(torre <= 5);

    printf("\n");

    //Movimento do Cavalo
    printf("Veja como o Cavalo se movimenta no tabuleiro:\n");
    
    while(cavalo <= 1) //Controle das vezes que o cavalo vai agir e Loop externo
    {
        
        for (int vezes = 1 ; vezes <= 2; vezes++)//loop interno
        {
            printf("Baixo,");//Executa 2 vezes e se torna falso
        }
            printf("Esquerda.\n");//Executa 1 vez e se torna falso
            cavalo++;
    }
           printf("\n");
    return 0;
}