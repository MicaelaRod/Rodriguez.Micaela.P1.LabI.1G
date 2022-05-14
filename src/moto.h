/*
 * moto.h
 *
 *  Created on: 13 may. 2022
 *      Author: micar
 */

#ifndef MOTO_H_
#define MOTO_H_

#include "tipo.h"
#include "color.h"

typedef struct {
	int id;
	char marca[20];
	int idTipo;
	int idColor;
	int cilindrada;
	int puntaje;
	int isEmpty; //1 cuando esta vacio
} eMoto;


/**
 * \brief
 * \param
 * \param
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int inicializar(eMoto lista[],int tam);


/**
 * \brief busca la estructura que tenga el campo isEmpty en 1
 * \param lista
 * \param tam
 *\return Retorna el indice de la posicion vacia
 */
int buscarLibre(eMoto lista[],int tam);



/**
 * \brief pide datos y da un alta de moto
 * \param
 * \param
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int alta(eMoto lista[], int tam,eTipo tipos[],int tamT, int* id,eColor colores[],int tamC);




/**
 * \brief muestra una moto
 * \param usuario
 * \param tipos array del tipo eTipo
 * \param colores array del tipo eColor
 * \param tamc tamaño del array colores
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
void mostrarUno(eMoto usuario,eTipo tipos[],int tam,eColor colores[],int tamC);





/**
 * \brief muestra el listado de motos
 * \param lista array del tipo eMoto
 * \param tipos array del tipo eTipos
 * \param colores
 * \param tamT tamaño del array tipo
 * \param tamC tamaño del array colores
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarMuchos(eMoto lista[],int tam,eTipo tipos[],int tamT,eColor colores[],int tamC);





/**
 * \brief busca un id ingresado por el usario
 * \param lista
 * \param tam tamaño del array lista
 *\return el id
 */
int buscarID(eMoto lista[], int tam, int ID);





/**
 * \brief da la baja de la moto pidiendo
 * \param
 * \param
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int baja(eMoto lista[],int tam,eTipo tipos[],int tamT,eColor colores[],int tamC);




/**
 * \brief modifica los campos color y puntaje
 * \param lista
 * \param tam tamaño del array lista
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int modificar(eMoto lista[],int tam,eTipo localidades[],int tamT,eColor colores[],int tamC);




/**
 * \brief muestra un menu
 * \param
 * \param
 *\return Retorna la opcion seleccionada
 */
int menu();




/**
 * \brief muestra el menu a modificar
 * \param void
 * \param
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int menuModificar();



/**
 * \brief ordena los id
 * \param lista
 * \param tam tamaño de array de lista
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int ordenarId(eMoto lista[],int tam);



/**
 * \brief le pone el nombre al id
 * \param lista
 * \param tam tamaño del vector lista
 * \param marca
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int cargarMarca(eMoto lista[],int tam,int idPersona,char marca[]);

#endif /* MOTO_H_ */
