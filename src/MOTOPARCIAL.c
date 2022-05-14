
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "moto.h"
#include "data.h"
#include "tipo.h"
#include "servicio.h"
#include "trabajo.h"
#include "color.h"
#define TAM 10
#define TAMT 4
#define TAMS 4
#define TAMTRA 5
#define TAMC 5



int main(void) {
	setbuf(stdout, NULL);

	char seguir = 's';
	char salir;
	int flag1 = 0;
	int nextId = 1000;
	int nextIdTra= 2000;
	eMoto lista[TAM];
	eTrabajo trabajos[TAMTRA];
	int flagTrabajo =0;

	eTipo tipos[TAMT] = {
			{1000, "Enduro"},
			{1001, "Chopera"},
			{1002, "Scooter"},
			{1003, "Vintage"}
	};

	eServicio servicios[TAMS] = {
				{20000, "Limpieza",450},
				{20001, "Ajuste",300},
				{20002, "Balanceo",150},
				{20003, "Cadena",390}
		};

	eColor colores[TAMC] = {
					{10000, "Gris"},
					{10001, "Negro"},
					{10002, "Azul"},
					{10003, "Blanco"},
					{10004, "Rojo"}

			};



	inicializar(lista,TAM);

	inicializarTra(trabajos,TAMTRA);


	hardcodear(lista,TAM,7,&nextId);

	do {
		switch (menu()) {
		case 1:
			alta(lista,TAM,tipos,TAMT,&nextId,colores,TAMC);
			flag1 = 1;
			break;
		case 2:
			if (flag1) {
				modificar(lista, TAM, tipos, TAMT,colores,TAMC);
			} else {
				printf("Primero deberia ingresar la opcion 1\n");
			}
			break;
		case 3:

			if (flag1) {
				baja(lista, TAM, tipos, TAMT,colores,TAMC);
			} else {
				printf("Primero deberia ingresar la opcion 1\n");
			}

			break;
		case 4:

			if (flag1) {
				mostrarMuchos(lista, TAM, tipos, TAMT,colores,TAMC);
			} else {
				printf("Primero deberia ingresar la opcion 1\n");
			}
			/*
			if (flag1) {
				//ordenar(lista,TAM);
			} else {
				printf("Primero deberia ingresar la opcion 1\n");
			}
			*/
			break;
		case 5:

			mostrarTipos(tipos,TAMT);

			break;
		case 6:

			mostrarColores(colores,TAMC);

			break;

		case 7:

			mostrarServicios(servicios,TAMS);


			break;
		case 8:

			altaTrabajo(trabajos,TAMTRA,lista,TAM,tipos,TAMT,servicios,TAMS,&nextIdTra,colores,TAMC);
			flagTrabajo = 1;
			break;
		case 9:

			if(flagTrabajo){
				mostrarTrabajos(trabajos,TAMTRA,lista,TAM,tipos,servicios,TAMS, TAMT);
			}
			else{
				printf("No hay trabajos\n");
			}

			break;
		case 10:

			printf("¿Esta seguro que quiere salir?\n");
			fflush(stdin);
			scanf("%c", &salir);

			if (salir == 's' || salir == 'S') {
				seguir = 'n';
				printf("Usted salio\n");

			} else {
				printf("Sigue en el menu.\n");
			}

			break;

		default:
			printf("Opcion invalida\n");

		}

		system("pause");

	} while (seguir == 's');

	return EXIT_SUCCESS;
}


