
#include <stdio.h>

int main() {
    char letra;

    printf("Ingrese una letra minuscula: ");
    scanf(" %c", &letra);

    if (letra >= 'a' && letra <= 'z') {
        letra = letra - 32;
        printf("La letra en mayuscula es: %c\n", letra);
    } else {
        printf("Debe ingresar una letra minuscula\n");
    }

    return 0;
}

