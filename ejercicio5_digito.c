
#include <stdio.h>

int main() {
    char caracter;

    printf("Ingrese un caracter: ");
    scanf(" %c", &caracter);

    if (caracter >= '0' && caracter <= '9') {
        printf("Es un digito numerico\n");
    } else {
        printf("No es un digito numerico\n");
    }

    return 0;
}

