
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
 * \param lista array del tipo eTrabajo
 * \param tam tamanioo del vector lista
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int inicializarTra(eTrabajo lista[], int tam);



/**
 * \brief busca las posicion en que isEmpty esta en 1
 * \param lista array del tipo eTrabajo
 * \param tam tamanio de lista
 *\return Retorna la posicion del libre
 */
int buscarLibreTra(eTrabajo lista[], int tam);


/**
 * \brief pide datos y da un alta de ususario
 * \param trabajos vector del tipo eTrabajos
 * \param tamT tamano del vector trabajos
 * \param lista vector del tipo eMoto
 * \param tam tamanioo del vector lista
 * \param tipos vector del tipo eTipo
 * \param tamTi tamanioo del vector tipo
 * \param servicios vector del tipo eServicio
 * \param tamS tamanioo del vector servicio
 * \param colores array del tipo eColor
 * \param tamC tamanio del vector de colores
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int altaTrabajo(eTrabajo trabajos[],int tamT,eMoto lista[], int tam,eTipo tipos[],int tamTi,eServicio servicios[],int tamS, int* idTrabajo,eColor colores[],int tamC);


/**
 * \brief muestra un trabajo
 * \param trabajos vector del tipo eMoto
 * \param servicios vector del tipo eMoto
 * \param tamS tamanio del vector servicios
 * \param lista vector del tipo eMoto
 * \param tamM tamanio del vector eMoto
 *\return void
 */
void mostrarTrabajo(eTrabajo trabajos,eServicio servicios[],int tamS,eMoto lista[],int tamM);





/**
 * \brief muestra los trabajos
 * \param trabajos vector del tipo eTrabajos
 * \param tamT tama�o del vector trabajos
 * \param lista array del tipo e moto
 * \param tam tamanio del vector lista
 * \param tipos vector del tipo eTipos
 * \param servicios vector del tipo eServicio
 * \param tamS tamanio del vector servicios
 * \param tamTi tamanio del vector tipos
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarTrabajos(eTrabajo trabajos[],int tamT,eMoto lista[],int tam,eTipo tipos[],eServicio servicios[],int tamS,int tamTi);


#endif /* TRABAJO_H_ */
