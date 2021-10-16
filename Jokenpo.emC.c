// Author: Fernanda Bonfim Santos - Ciência da Computação || 2Semestre || Jokenpo //

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int jogador = (rand() % 3) + 1; // 1,2,3
    int jogador2 = 0;

    printf("--------------------------\n");
    printf("Bem vindo ao Jogo:\n");
    printf("--------------------------\n");
    printf("Escolha uma opчуo:\n");
    printf("1) para Pedra:\n");
    printf("2) para Papel:\n");
    printf("3) para Tesoura:\n");
    printf("--------------------------\n");

    scanf("%d", &jogador);

    /*pedra ganha de tesoura 1 > 3
    papel ganha de pedra 2 > 1
    tesoura ganha de papel 3 > 2*/



    if((jogador==1 && jogador2==3) || (jogador==2 && jogador2==1) ||(jogador==3 && jogador2==2)){
        printf("O vencedor щ o Computador, %d, %d\n", jogador, jogador2);


    }else if((jogador2==1 && jogador==3) || (jogador2==2 && jogador==1) ||(jogador2==3 && jogador==2)){
        printf("Vc venceu!!!, %d, %d\n", jogador, jogador2);


    }else ((jogador2==1 && jogador==1) || (jogador2==2 && jogador==2) ||(jogador2==3 && jogador==3));{
        printf("Empate!, %d, %d\n", jogador, jogador2);

}
return 0;
}
