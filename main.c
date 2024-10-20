#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero intero positivo:\n ");
    scanf("%d", &numero);

    for (int i = 2; i * i <= numero; i++) {
        while (numero % i == 0) {
            printf("%d ", i);
            numero /= i;
        }
    }

    if (numero > 1)
    printf("%d  ", numero);

    return 0;
}
