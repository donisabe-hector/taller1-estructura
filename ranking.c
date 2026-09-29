#include <stdio.h>
#include <string.h>
#include "ranking.h"

void resetRanking(Ranking *rk) {
    rk->ocupados = 0;
    for (int i = 0; i < MAX_TOP; i++) {
        strcpy(rk->records[i].tag, "---");
        rk->records[i].score = 0;
    }
}

void desplegarPodio(const Ranking *rk) {
    for (int i = 0; i < MAX_TOP; i++) {
        printf("Posicion %d. [ %s ] -> %d pts\n", i + 1, rk->records[i].tag, rk->records[i].score);
    }
}

void evaluarRecord(Ranking *rk, Jugador nuevo_reg) {
    int punto_insercion = -1;
    for (int i = 0; i < MAX_TOP; i++) {
        if (nuevo_reg.score > rk->records[i].score) {
            punto_insercion = i;
            break;
        }
    }
    if (punto_insercion != -1) {
        for (int i = MAX_TOP - 1; i > punto_insercion; i--) {
            rk->records[i] = rk->records[i - 1];
        }
        rk->records[punto_insercion] = nuevo_reg;
        if (rk->ocupados < MAX_TOP) {
            rk->ocupados++;
        }
        printf("\n¡Felicidades! Tu marca entro en la tabla de records.\n");
    } else {
        printf("\nPuntaje insuficiente para clasificar al Top 3.\n");
    }
}
