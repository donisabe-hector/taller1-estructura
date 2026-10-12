#include <stdio.h>
#include "datos.h"
#include "ordenamiento.h"


int main(void) {
    Competidor competidor;
    int opcion;

    ingresarCompetidor(&competidor);

    do {
        printf("\n== MENU==\n");
        printf("1. Bubble Sort\n");
        printf("2. Selection Sort\n");
        printf("3. Insertion Sort\n");
        printf("4. Mostrar datos\n");
        printf("0. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                bubbleSort(&competidor);
                printf("\nOrdenamiento Bubble Sort realizado.\n");
                mostrarPuntajes(&competidor);
                break;

            case 2:
                selectionSort(&competidor);
                printf("\nOrdenamiento Selection Sort realizado.\n");
                mostrarPuntajes(&competidor);
                break;

            case 3:
                insertionSort(&competidor);
                printf("\nOrdenamiento Insertion Sort realizado.\n");
                mostrarPuntajes(&competidor);
                break;

            case 4:
                mostrarCompetidor(&competidor);
                break;

            case 0:
                printf("\nPrograma terminado.\n");
                break;

            default:
                printf("\nOpcion no valida.\n");
        }

    } while (opcion != 0);

    return 0;
}