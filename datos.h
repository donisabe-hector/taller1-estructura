#ifndef DATOS_H
#define DATOS_H

#define MAX_PUNTAJES 10

typedef struct {
    int id;
    char nombre[50];
    float puntajes[MAX_PUNTAJES];
    int cantidad;
} Competidor;

void ingresarCompetidor(Competidor *competidor);
void mostrarCompetidor(const Competidor *competidor);
void mostrarPuntajes(const Competidor *competidor);

#endif