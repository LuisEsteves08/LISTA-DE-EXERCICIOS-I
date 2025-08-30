#include <stdio.h>

int main() {
    float peso, altura, total;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    total = peso / (altura * altura);
    printf("Seu IMC = %.2f\n", total);
   
    if (total < 18.5) {
        printf("Abaixo do peso\n");
    } else if (total < 25) {
        printf("Peso normal\n");
    } else if (total < 30) {
        printf("Sobrepeso\n");
    } else if (total < 35) {
        printf("Obesidade grau I\n");
    } else if (total < 40) {
        printf("Obesidade grau II\n");
    } else {
        printf("Obesidade grau III\n");
    }

    return 0;
}
