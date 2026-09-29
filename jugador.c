#include <stdio.h>
#include <string.h>
#include "jugador.h"

void capturarUsuario(Jugador *p) {
    printf("Ingrese sus 3 iniciales (TAG): ");
    scanf("%9s", p->tag);
    
    printf("Ingrese los puntos logrados: ");
    while (scanf("%d", &p->score) != 1 || p->score < 0) {
        printf("Dato invalido. Intente con un puntaje positivo: ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
}
