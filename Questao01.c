#include <stdio.h>
int main(){
	 float n1, n2, n3;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);

    if ((n1 < n2 + n3) && (n2 < n1 + n3) && (n3 < n1 + n2)) {
        printf("Os lados formam um triangulo\n");

        if (n1 == n2 && n2 == n3) {
            printf("Equilatero\n");
        } else if (n1 == n2 || n1 == n3 || n2 == n3) {
            printf("Isosceles\n");
        } else {
            printf("Escaleno\n");
        }

    } else {
        printf("Esses valores nao formam um triangulo.\n");
    }
	
	return 0;
	
}
