
#include <stdio.h>

int main() {
    char palabra[100];
    char letra;
    int contador = 0;
    int i = 0;

    printf("Ingrese una palabra: ");
    scanf("%99s", palabra);

    printf("Ingrese la letra que desea contar: ");
    scanf(" %c", &letra);

    while (palabra[i] != '\0') {
        if (palabra[i] == letra) {
            contador++;
        }

        i++;
    }

    printf("La letra aparece %d veces\n", contador);

    return 0;
}
