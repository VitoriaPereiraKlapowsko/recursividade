#include <stdio.h>

void imprime(int v);

int main() {
    int valor;
    printf("Informe o valor: ");
    scanf("%i", &valor);
    imprime(valor);
    return 0;
}
void imprime(int v) {
    if(v >= 1) {
        printf("%i ", v);
        imprime(v / 2);
    }
}


