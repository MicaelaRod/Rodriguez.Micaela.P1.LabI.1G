
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trabajo.h"
#include "servicio.h"
#include "tipo.h"
#include "moto.h"
#include "utn.h"
#include "color.h"

int inicializarTra(eTrabajo lista[], int tam) {
	int todoOk = 0;

	if (lista != NULL && tam > 0) {

		for (int i = 0; i < tam; i++) {
			lista[i].isEmpty = 1;
		}

		todoOk = 1;
	}
	return todoOk;
}

int buscarLibreTra(eTrabajo lista[], int tam) {

	int retorno = -1;

	if (lista != NULL && tam > 0) {

		for (int i = 0; i < tam; i++) {

			if (lista[i].isEmpty) {

				retorno = i;
				break;
			}
		}
	}
	return retorno;
}

int altaTrabajo(eTrabajo trabajos[],int tamT,eMoto lista[], int tam,eTipo tipos[],int tamTi,eServicio servicios[],int tamS, int* idTrabajo,eColor colores[],int tamC)
{

	int todoOk = 0;
	int indice;
	eTrabajo aux;

	if (lista != NULL && tam > 0 && idTrabajo != NULL && trabajos != NULL && tamT > 0 && tipos != NULL && tamT >0 && servicios != NULL && tamS > 0) {

		indice = buscarLibreTra(trabajos,tamT);

		if(indice == -1){
			printf("No se encuentra lugar para realizar el alta\n");
		}
		else{

			aux.id = *idTrabajo;
			(*idTrabajo)++;

			mostrarServicios(servicios, tamS);

			aux.idServicio = getInt("Ingrese id servicio:","Error, Reingrese id",20003,20000);

			mostrarMuchos(lista,tam,tipos,tamT,colores,tamC);
			aux.idMoto = getInt("Ingrese id de la moto:","Error, Reingrese id",1010,1000);

			printf("Ingrese fecha\n");
			scanf("%d/%d/%d", &aux.fecha.dia,
							&aux.fecha.mes, &aux.fecha.anio);




		    aux.isEmpty = 0;

		    printf("Alta exitosa!!\n");

		    trabajos[indice] = aux;


		todoOk = 1;
		}
	}

	return todoOk;
}


void mostrarTrabajo(eTrabajo trabajos,eServicio servicios[],int tamS,eMoto lista[],int tamM){

	char descServicio[20];
	char nombre[20];

	cargarDescripcionServicios(servicios,tamS,trabajos.idServicio,descServicio);
	cargarMarca(lista,tamM,trabajos.idMoto,nombre);

	printf("  %d      %-10s %-10s       %02d/%02d/%d      ",
				trabajos.id,
				nombre,
				descServicio,
				trabajos.fecha.dia,
				trabajos.fecha.mes,
				trabajos.fecha.anio
				);
}

int mostrarTrabajos(eTrabajo trabajos[],int tamT,eMoto lista[],int tam,eTipo tipos[],eServicio servicios[],int tamS,int tamTi){
	int todoOk = 0;
	int flag = 1;

	if (lista != NULL && tam > 0 && trabajos != NULL && tamT > 0 && tipos != NULL && tamS >0 && servicios != NULL && tamS > 0) {


		printf("Listado de Trabajos:\n");
		printf(
				"------------------------------------------------------------------\n");
		printf(
				"  ID       Moto       Servicio           Fecha\n");
		printf(
				"------------------------------------------------------------------\n");
		for (int i = 0; i < tam; i++) {

			if(trabajos[i].isEmpty == 0){ //muestra solo los que estan cargados!!
				mostrarTrabajo(trabajos[i],servicios,tamS,lista, tam);
			flag = 0;
			printf("\n");
			}

		}

		if(flag){
			printf("No hay Trabajos para mostrar\n");
		}

		todoOk = 1;
	}
	return todoOk;
}
