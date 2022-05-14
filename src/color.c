#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "moto.h"
#include "tipo.h"
#include "utn.h"
#include "color.h"

int cargarDescC(eColor colores[], int tam, int idColor, char descripcion[]) {

	int todoOk = 0;

	if (colores != NULL && tam > 0 && descripcion != NULL) {

		for (int i = 0; i < tam; i++) {
			if (colores[i].id == idColor) {
				strcpy(descripcion, colores[i].nombreColor);
				break;
			}
		}

		todoOk = 1;
	}
	return todoOk;

}


int mostrarColores(eColor colores[], int tam) {
	int todoOk = 0;
	if (colores != NULL && tam > 0) {

		printf("Lista de colores:\n");

		printf("ID    DESCRIPCION\n");


		printf("-------------------------\n");

		for (int i = 0; i < tam; i++) {

			printf("%d    %-10s\n", colores[i].id, colores[i].nombreColor);

		} //for

		todoOk = 1;
	}
	return todoOk;
}


