#include <stdio.h>
#include "datos.h"

void ingresarCompetidor(Competidor *competidor) {
    printf("Ingrese el ID: ");
    scanf("%d", &competidor->id);

    printf("Ingrese el nombre o iniciales: ");
    scanf("%49s", competidor->nombre);

    do {
        printf("Cantidad de puntajes (1-%d): ", MAX_PUNTAJES);
        scanf("%d", &competidor->cantidad);
    } while (competidor->cantidad < 1 ||
             competidor->cantidad > MAX_PUNTAJES);

    for (int i = 0; i < competidor->cantidad; i++) {
        printf("Ingrese el puntaje %d: ", i + 1);
        scanf("%f", &competidor->puntajes[i]);
    }
}

void mostrarCompetidor(const Competidor *competidor) {
    printf("\nID: %d\n", competidor->id);
    printf("Nombre: %s\n", competidor->nombre);
    mostrarPuntajes(competidor);
}

void mostrarPuntajes(const Competidor *competidor) {
    printf("Puntajes: ");

    for (int i = 0; i < competidor->cantidad; i++) {
        printf("%.2f ", competidor->puntajes[i]);
    }

    printf("\n");
}
