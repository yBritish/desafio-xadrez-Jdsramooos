# include <stdio.h>
int main(){
    int torre = 1, rainha = 1;
    printf("Veja como a Bispo se movimenta no tabuleiro:\n");

    //Movimento do Bispo

    for(int bispo = 1; bispo <= 5; bispo++){
        printf("Cima, Direita: %d vezes.\n", bispo);
    }
    
    //Movimento da Rainha
    printf("Veja como a Rainha se movimenta no tabuleiro:\n");
    while(rainha <= 8){
        printf("Esquerda: %d vezes.\n", rainha);
        rainha++;
    }

    //Movimento da Torre
    printf("Veja como a Torre se movimenta no tabuleiro:\n");
    do{
        printf("Direita: %d vezes.\n", torre);
        torre++;
    } while(torre <= 5);
    return 0;
}

