#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  

int main() {
    int numeroSecreto, palpite;

    
    srand(time(NULL));

    
    numeroSecreto = rand() % 100 + 1;

    printf("=== Jogo da Adivinhacao ===\n");
    printf("Tente adivinhar o numero secreto entre 1 e 100!\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite == numeroSecreto) {
            printf("Parabens, voce acertou!\n");
        } else if (palpite > numeroSecreto) {
            printf("Muito alto, tente um numero menor!\n");
        } else {
            printf("Muito baixo, tente um numero maior!\n");
        }

    } while (palpite != numeroSecreto);

    return 0;
}

