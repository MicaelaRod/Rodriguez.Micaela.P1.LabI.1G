
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "moto.h"
#include "tipo.h"
#include "utn.h"
#include "color.h"


int menu() {

	int opcion;

	printf("ABM:\n");
	printf("1.Alta Moto\n");
	printf("2.Modificar Moto\n");
	printf("3.Baja Moto\n");
	printf("4.Listar Motos\n");
	printf("5.Listar tipos\n");
	printf("6.Listar colores\n");
	printf("7.Listar servicios\n");
	printf("8.Alta Trabajo\n");
	printf("9.Listar Trabajos\n");
	printf("10.Salir\n");
	printf("Ingrese opcion: ");
	scanf("%d", &opcion);

	return opcion;
}



int menuModificar() {

	int opcion;
	printf("1.Color\n");
	printf("2.Puntaje\n");
	scanf("%d", &opcion);

	return opcion;
}

int modificar(eMoto lista[], int tam,eTipo tipos[],int tamT,eColor colores[],int tamC) {
	int todoOk = 0;
	int indice;
	int id;
	char confirma;
	int auxInt;
	int auxInt2;

	if (lista != NULL && tam > 0) {

		printf("Modificacion:\n");

		mostrarMuchos(lista,tam,tipos,tamT,colores,tamC);

		printf("Ingrese ID a modificar");

		scanf("%d", &id);

		indice = buscarID(lista, tam, id);

		if (indice == -1) {
			printf("El ID: %d no esta en el sistema\n", id);
		} else {
			mostrarUno(lista[indice],tipos,tamT,colores,tamC);
			printf("\n");
			printf("¿Confirma modificacion? \n");
			fflush(stdin);
			scanf("%c",&confirma);

			if(confirma == 's' || confirma == 'S'){

			switch( menuModificar()){

			case 1:
				//modificar color
				   mostrarColores(colores,tamC);
					auxInt2 = getInt("Ingrese id Color","Error, reingrese id", 10004, 10000);

					lista[indice].idColor = auxInt2;


				break;

			case 2:
				//modificar puntaje
				auxInt = getInt("Ingrese el puntaje :","Error, ingrese un puntaje de 1 a 10",10,1);
				lista[indice].puntaje = auxInt;
				break;



			default:
				printf("Opcion invalida\n");
			}


			todoOk = 1;
			}
			else{
				printf("Modificacion cancelada\n");
			}
		}

	}
	return todoOk;
}

int baja(eMoto lista[], int tam,eTipo tipos[],int tamT,eColor colores[],int tamC) {

	int todoOk = 0;
	int indice;
	int id;
	char confirma;

	if (lista != NULL && tam > 0 && tipos != NULL && tamT > 0) {

		printf("Baja:\n");

		mostrarMuchos(lista,tam,tipos,tamT,colores,tamC);

		printf("Ingrese ID a hacer la baja: ");

		scanf("%d", &id);

		indice = buscarID(lista, tam, id);

		if (indice == -1) {
			printf("El ID: %d no esta en el sistema\n", id);
		} else {
			mostrarUno(lista[indice],tipos,tamT,colores,tamC);
			printf("\n");
			printf("¿Confirma baja? ");
			fflush(stdin);
			scanf("%c", &confirma);
			if (confirma == 's' || confirma == 'S') {
				lista[indice].isEmpty = 1;
				printf("Baja exitosa!!\n");
				todoOk = 1;
			} else {
				printf("Baja cancelada\n");
			}
		}

	}
	return todoOk;
}



int buscarID(eMoto lista[], int tam, int ID) {

	int retorno = -1;

	if (lista != NULL && tam > 0) {

		for (int i = 0; i < tam; i++) {

			if (lista[i].isEmpty == 0 && lista[i].id == ID) {

				retorno = i;

				break;
			}
		}
	}
	return retorno;
}

int mostrarMuchos(eMoto lista[],int tam,eTipo tipos[],int tamT,eColor colores[],int tamC){
	int todoOk = 0;
	int flag = 1;

	if (lista != NULL && tam > 0) {

		printf("Listado de Motocicletas:\n");
		printf(
				"------------------------------------------------------------------\n");
		printf(
				"  ID     Marca    Tipo       Color         Cilindrada    Puntaje   \n");
		printf(
				"------------------------------------------------------------------\n");
		for (int i = 0; i < tam; i++) {

			if(lista[i].isEmpty ==0){ //muestra solo los que estan cargados!!
			mostrarUno(lista[i],tipos,tamT,colores,tamC);
			flag = 0;
			printf("\n");
			}

		}

		if(flag){
			printf("No hay mascotas para mostrar\n");
		}

		todoOk = 1;
	}
	return todoOk;
}

void mostrarUno(eMoto usuario,eTipo tipos[],int tam,eColor colores[],int tamC){

	char descTipo[20];
	char descColor[20];

	cargarDescripcionT(tipos,tam,usuario.idTipo,descTipo);
	cargarDescC(colores,tamC,usuario.idColor,descColor);


	printf("  %d     %-10s%-10s %-10s       %2d       %2d     ",
				usuario.id,
				usuario.marca,
				descTipo,
				descColor,
				usuario.cilindrada,
				usuario.puntaje

				);
}

int alta(eMoto lista[], int tam,eTipo tipos[],int tamT, int* id,eColor colores[],int tamC) {

	int todoOk = 0;
	int indice;
	eMoto aux;

	if (lista != NULL && tam > 0 && id != NULL && tipos != NULL && tamT > 0) {

		indice = buscarLibre(lista,tam);

		if(indice == -1){
			printf("No se encuentra lugar para realizar el alta\n");
		}
		else{

			aux.id= *id;
			(*id)++;

			getString(aux.marca, 20 , "Ingrese La marca de la moto:");

		    mostrarTipos(tipos,tamT);

		    aux.idTipo = getInt("Ingrese id Tipo","Error, reingrese id",1004, 1000);

			aux.puntaje = getInt("Ingrese puntaje","Error, reingrese puntaje de 1 a 10",10, 1);

			mostrarColores(colores,tamC);
			aux.idColor = getInt("Ingrese id Color","Error, reingrese id",10004, 10000);
			printf("Las cilintradas son: 50,125,500,600 y 750\n");
			printf("Ingrese la cilindrada\n");
			scanf("%d", &aux.cilindrada);

while(aux.cilindrada != 50 &&aux.cilindrada != 125 &&aux.cilindrada != 500 &&aux.cilindrada != 600 &&aux.cilindrada != 750){
	printf("Error. Reingrese la cilindrada\n");
	scanf("%d",&aux.cilindrada);
}


		    aux.isEmpty = 0;

		    printf("Alta exitosa!!\n");



		    lista[indice] = aux;


		todoOk = 1;
		}
	}

	return todoOk;
}

int buscarLibre(eMoto lista[], int tam) {

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

int inicializar(eMoto lista[], int tam) {
	int todoOk = 0;

	if (lista != NULL && tam > 0) {

		for (int i = 0; i < tam; i++) {
			lista[i].isEmpty = 1;
		}

		todoOk = 1;
	}
	return todoOk;
}


int ordenarId(eMoto lista[], int tam) {
	int todoOk = 0;
	eMoto aux;

	if (lista != NULL && tam > 0) {

		for (int i = 0; i < tam - 1; i++) {
			for (int j = i + 1; j < tam; j++) {

				if ( lista [i].id > lista[j].id) {
					     aux = lista[i];
					lista[i] = lista[j];
					lista[j] = aux;
				}
			}
		}

		printf("Ordenamiento exitoso!!\n");

		todoOk = 1;
	}

	return todoOk;
}



int cargarMarca(eMoto lista[],int tam,int idMascota,char marca[]){
	int todoOk =0;

	if(lista != NULL && tam>0 && marca != NULL){

		for(int i=0;i<tam;i++){
			if(lista[i].id == idMascota){
				strcpy(marca,lista[i].marca);
				break;
			}
		}

		todoOk = 1;
	}

	return todoOk;
}


