/*
 * servicio.h
 *
 *  Created on: 13 may. 2022
 *      Author: micar
 */

#ifndef SERVICIO_H_
#define SERVICIO_H_

typedef struct{
	int id;
	char descripcion[25];
	float precio;
}eServicio;




/**
 * \brief muestra los servicios
 * \param servicios
 * \param tam
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarServicios(eServicio servicios[], int tam);



/**
 * \brief
 * \param
 * \param
 *\return Retorna 1 si salio bien o 0 si salio mal
 */

int cargarDescripcionServicios(eServicio servicios[],int tamC,int idServicios,char descripcion[]);



#endif /* SERVICIO_H_ */
