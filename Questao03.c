#include <stdio.h>

int main() {
    int valor;
    int cedulas[6] = {100, 50, 20, 10, 5, 2};
    int qtd[6] = {0};
    int t = 0;

    printf("Digite o valor para saque: ");
    scanf("%d", &valor);

    if (valor < 2 || valor == 3) {
        printf("Nao e possivel pagar exatamente esse valor \n");
        return 0;
    }

    while (valor > 0 && t < 6) {
        switch (cedulas[t]) {
            case 100:
                qtd[t] = valor / 100;
                valor = valor % 100;
                break;
            case 50:
                qtd[t] = valor / 50;
                valor = valor % 50;
                break;
            case 20:
                qtd[t] = valor / 20;
                valor = valor % 20;
                break;
            case 10:
                qtd[t] = valor / 10;
                valor = valor % 10;
                break;
            case 5:
                qtd[t] = valor / 5;
                valor = valor % 5;
                break;
            case 2:
                qtd[t] = valor / 2;
                valor = valor % 2;
                break;
        }
        t++;
    }

    if (valor != 0) {
        printf("Nao e possivel pagar exatamente esse valor.\n");
    } else {
        for (t = 0; t < 6; t++) {
            if (qtd[t] > 0) {
                printf("%d cedulas de %d\n", qtd[t], cedulas[t]);
            }
        }
    }

    return 0;
}

