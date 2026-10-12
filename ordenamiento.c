#include "ordenamiento.h"

void bubbleSort(Competidor *competidor) {
    for (int i = 0; i < competidor->cantidad - 1; i++) {
        for (int j = 0;
             j < competidor->cantidad - i - 1;
             j++) {

            if (competidor->puntajes[j] >
                competidor->puntajes[j + 1]) {

                float auxiliar = competidor->puntajes[j];

                competidor->puntajes[j] =
                    competidor->puntajes[j + 1];

                competidor->puntajes[j + 1] = auxiliar;
            }
        }
    }
}

void selectionSort(Competidor *competidor) {
    for (int i = 0; i < competidor->cantidad - 1; i++) {
        int posicionMenor = i;

        for (int j = i + 1;
             j < competidor->cantidad;
             j++) {

            if (competidor->puntajes[j] <
                competidor->puntajes[posicionMenor]) {
                posicionMenor = j;
            }
        }

        float auxiliar = competidor->puntajes[i];

        competidor->puntajes[i] =
            competidor->puntajes[posicionMenor];

        competidor->puntajes[posicionMenor] = auxiliar;
    }
}

void insertionSort(Competidor *competidor) {
    for (int i = 1; i < competidor->cantidad; i++) {
        float valor = competidor->puntajes[i];
        int j = i - 1;

        while (j >= 0 &&
               competidor->puntajes[j] > valor) {
            competidor->puntajes[j + 1] =
                competidor->puntajes[j];
            j--;
        }

        competidor->puntajes[j + 1] = valor;
    }
}