#include <stdio.h>
#include "jugador.h"
#include "ranking.h"

int main(void) {
    Ranking control_tabla;
    Jugador competidor;
    int opcion_elegida;

    resetRanking(&control_tabla);

    do {
        printf("\n=== SURVIVAL DE CACERÍA - TOP 3 ===\n");
        printf("1. Registrar nuevo puntaje\n");
        printf("2. Mostrar Tabla de Posiciones\n");
        printf("3. Salir del Sistema\n");
        printf("Seleccione una accion: ");
        
        if (scanf("%d", &opcion_elegida) != 1) {
            printf("\nOpcion no valida. Ingrese un numero.\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            opcion_elegida = 0;
            continue;
        }
        
        switch (opcion_elegida) {
            case 1:
                capturarUsuario(&competidor);
                evaluarRecord(&control_tabla, competidor);
                desplegarPodio(&control_tabla);
                break;
            case 2:
                desplegarPodio(&control_tabla);
                break;
            case 3:
                printf("\nCierre de aplicacion interactiva exitoso.\n");
                break;
            default:
                printf("\nComando no valido. Seleccione una opcion valida.\n");
        }
    } while (opcion_elegida != 3);

    return 0;
}
