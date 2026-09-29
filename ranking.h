#ifndef RANKING_H
#define RANKING_H

#include "jugador.h"

#define MAX_TOP 3

typedef struct {
    Jugador records[MAX_TOP];
    int ocupados;
} Ranking;

void resetRanking(Ranking *rk);
void evaluarRecord(Ranking *rk, Jugador nuevo_reg);
void desplegarPodio(const Ranking *rk);

#endif
