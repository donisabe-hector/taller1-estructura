#ifndef JUGADOR_H
#define JUGADOR_H

typedef struct {
    char tag[10];
    int score;
} Jugador;

void capturarUsuario(Jugador *p);

#endif
