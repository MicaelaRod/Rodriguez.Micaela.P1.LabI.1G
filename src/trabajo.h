/*
 * trabajo.h
 *
 *  Created on: 13 may. 2022
 *      Author: micar
 */

#ifndef TRABAJO_H_
#define TRABAJO_H_

#include "fecha.h"
#include "moto.h"
#include "tipo.h"
#include "servicio.h"

typedef struct{
	int id;
	int idMoto;
	int idServicio;
	eFecha fecha;
	int isEmpty;
}eTrabajo;



/**
 * \brief inicializa el campo isEmpty en 1
 * \param lista
 * \param tam tamaño del vector lista
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int inicializarTra(eTrabajo lista[], int tam);



/**
 * \brief busca las posicion en que isEmpty esta en 1
 * \param lista
 * \param tam tamaño de lista
 *\return Retorna la posicion del libre
 */
int buscarLibreTra(eTrabajo lista[], int tam);


/**
 * \brief pide datos y da un alta de ususario
 * \param trabajos
 * \param tamT tamano del vector trabajos
 * \param lista
 * \param tam tamaño del vector lista
 * \param tipos
 * \param tamTi
 * \param servicios
 * \param tamS
 * \param colores array del tipo eColor
 * \param tamC tamaño del vector de colores
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int altaTrabajo(eTrabajo trabajos[],int tamT,eMoto lista[], int tam,eTipo tipos[],int tamTi,eServicio servicios[],int tamS, int* idTrabajo,eColor colores[],int tamC);


/**
 * \brief muestra un trabajo
 * \param trabajos
 * \param servicios
 * \param tamS tamaño del vector servicios
 * \param lista
 * \param tamM
 *\return void
 */
void mostrarTrabajo(eTrabajo trabajos,eServicio servicios[],int tamS,eMoto lista[],int tamM);





/**
 * \brief muestra los trabajos
 * \param trabajos vector del tipo eTrabajos
 * \param tamT tamaño del vector trabajos
 * \param lista
 * \param tam tamaño del vector lista
 * \param tipos
 * \param servicios
 * \param tamS
 * \param tamTi
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarTrabajos(eTrabajo trabajos[],int tamT,eMoto lista[],int tam,eTipo tipos[],eServicio servicios[],int tamS,int tamTi);


#endif /* TRABAJO_H_ */
