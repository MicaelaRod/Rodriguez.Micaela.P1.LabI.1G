#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "moto.h"
#include "data.h"
#include "tipo.h"
#include "servicio.h"
#include "trabajo.h"
#include "color.h"
#include "informes.h"
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
				ordenarxIdTipo(lista, TAM, tipos, TAMT);
				mostrarMuchos(lista, TAM, tipos, TAMT,colores,TAMC);
			} else {
				printf("Primero deberia ingresar la opcion 1\n");
			}

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
			//informes
			switch(menuInforme()){
			case 1:
				//Mostrar las motos del color seleccionado por el usuario
				mostrarMotosColor(lista, TAM, tipos, TAMT,colores,TAMC); //LISTO
				break;
			case 2:
				//Informar el promedio de puntaje de un tipo seleccionado por el usuario.
				mostrarPromedioPuntajeTipo(lista, TAM, tipos, TAMT);
				break;
			case 3:
				//muestra la o las motos con la mayor cilindrada
				mostrarMotodeMayorCilindrada(lista, TAM); //LISTO
				break;
			case 4:
				//lista de motos separadas por tipos
				mostrarMotosSeparadasxTipo(lista, TAM, tipos, TAMT,colores,TAMC); //LISTO
				break;
			case 5:
				//Elegir un color y un tipo y mostrar la cantidad de motos de ese tipo y color
				contarMotosXUnColorYTipo(lista, TAM, tipos, TAMT,colores,TAMC); //LISTO

				break;
			case 6:
				//mostrar el o los colores con mas cantidad de motos
				colorConMasMotos(lista, TAM,colores,TAMC); //LISTO

				break;
			case 7:
				// pide moto muestra los trabajo de una moto seleccionada
				mostrarTrabajosDeUnaMoto(trabajos,TAMTRA,servicios,TAMS,lista,TAM,colores,TAMC,tipos,TAMT);
				break;
			case 8:
				//Pedir una moto e informar la suma de los importes de los servicios que se le hicieron

				sumarImportesdeServicios(trabajos,TAMTRA,servicios,TAMS,lista,TAM,tipos,TAMT,colores,TAMC);

				break;
			case 9:
				//Pedir un servicio y mostrar las motos a las que se les realizo ese servicio y la fecha.
				mostrarFechaYMotoXServicio(trabajos,TAMTRA,servicios,TAMS,lista,TAM,tipos,TAMT,colores,TAMC);
				break;
			case 10:
				//Pedir una fecha y mostrar todos los servicios realizados en la misma.
				mostrarServiciosXFecha(trabajos,TAMTRA,servicios,TAMS);
				break;

			default:
				printf("Opcion invalida\n");
			}
			break;
		case 11:

			printf("Esta seguro que quiere salir?\n");
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


