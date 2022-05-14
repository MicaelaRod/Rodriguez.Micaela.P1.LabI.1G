/*
 * tipo.h
 *
 *  Created on: 13 may. 2022
 *      Author: micar
 */

#ifndef TIPO_H_
#define TIPO_H_

typedef struct{
	int id;
	char descripcion[20];
}eTipo;



/**
 * \brief le carga la desctripcion al id tipo
 * \param tipos vector de tipo eTipos
 * \param tam tamaño del vectos tipos
 * \param idtipo id a acrgar
 * \param descripcion espacio en memoria para escribir la descripcion
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int cargarDescripcionT(eTipo tipos[],int tam,int idTipo,char descripcion[]);



/**
 * \brief muestra los tipos
 * \param tipos
 * \param tam tamaño del vector tipos
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarTipos(eTipo tipos[],int tam);

#endif /* TIPO_H_ */
