/*
 * utn.h
 *
 *  Created on: 13 may. 2022
 *      Author: micar
 */

#ifndef UTN_H_
#define UTN_H_



/**
 * \brief pide una cadena y la valida
 * \param cadena
 * \param tam tamaño del vector cadena
 * \param mensaje puntero a char
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int getString(char cadena[], int tam, char *mensaje);


/**
 *  \brief pide un char y lo valida
 * \param char mensaje, espacio en memoria para escribir un mensaje
 * \param char mensajeError, espacio en memoria para escribir un mensaje
 * \param parametro1 el char ingresado debe cumplir con esta condicion
 * \param parametro2 el char ingresado debe cumplir con esta condicion
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
char getChar(char* mensaje,char* mensajeError,char parametro1,char parametro2);



/**
 * \brief pide un int y lo valida
 * \param char mensaje, espacio en memoria para escribir un mensaje
 * \param char mensajeError, espacio en memoria para escribir un mensaje
 * \param maximo valor maximo
 * \param minimo valor minimo
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int getInt(char* mensaje, char* mensajeError,int maximo, int minimo);



/**
 * \brief pide un float y lo valida
 * \param char mensaje, espacio en memoria para escribir un mensaje
 * \param char mensajeError, espacio en memoria para escribir un mensaje
 * \param maximo valor maximo
 * \param minimo valor minimo
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
float getFloat(char* mensaje, char* mensajeError,float maximo, float minimo);


#endif /* UTN_H_ */
