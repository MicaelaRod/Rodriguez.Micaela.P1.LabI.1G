
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
 * \brief inicializa las motos en 1
 * \param lista array del tipo eMoto
 * \param tam tamnio del vector lista
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int inicializar(eMoto lista[],int tam);


/**
 * \brief busca la estructura que tenga el campo isEmpty en 1
 * \param lista array del tipo eMoto
 * \param tam tamnio del vector lista
 *\return Retorna el indice de la posicion vacia
 */
int buscarLibre(eMoto lista[],int tam);



/**
 * \brief pide datos y da un alta de moto
 * \param lista array del tipo eMoto
 * \param tam tamanio
 * \param tipos array del tipo eTipo
 * \param tamT tamanio
 * \param id puntero a entero
 * \param colores array del tipo eColor
 * \param tamC tamanio del array de colores
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int alta(eMoto lista[], int tam,eTipo tipos[],int tamT, int* id,eColor colores[],int tamC);




/**
 * \brief muestra una moto
 * \param usuario
 * \param tipos array del tipo eTipo
 * \param colores array del tipo eColor
 * \param tamc tama�o del array colores
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
void mostrarUno(eMoto usuario,eTipo tipos[],int tam,eColor colores[],int tamC);





/**
 * \brief muestra el listado de motos
 * \param lista array del tipo eMoto
 * \param tipos array del tipo eTipos
 * \param colores
 * \param tamT tamanio del array tipo
 * \param tamC tamanio del array colores
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarMuchos(eMoto lista[],int tam,eTipo tipos[],int tamT,eColor colores[],int tamC);





/**
 * \brief busca un id ingresado por el usario
 * \param lista
 * \param tam tamanio del array lista
 *\return el id
 */
int buscarID(eMoto lista[], int tam, int ID);





/**
 * \brief da la baja de la moto
 * \param lista array del tipo eMoto
 * \param tam tamanio de array de lista
 * \param tipos array del tipo eTipo
 * \param tamT tamanio del array de tipos
 * \param colores array del tipo eColor
 *  \param tamC tamanio del vector de colores
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int baja(eMoto lista[],int tam,eTipo tipos[],int tamT,eColor colores[],int tamC);




/**
 * \brief modifica los campos color y puntaje
 * \param lista array del tipo eMoto
 * \param tam tamanioo del array lista
 * \param colores array del tipo eColor
 * \param tamC tamanioo del array colores
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int modificar(eMoto lista[],int tam,eTipo tipos[],int tamT,eColor colores[],int tamC);




/**
 * \brief muestra un menu
 * \param void
 *\return Retorna la opcion seleccionada
 */
int menu();




/**
 * \brief muestra el menu a modificar
 * \param void
 *\return Retorna la opcion elegida
 */
int menuModificar();



/**
 * \brief ordena por id y por tipo
 * \param lista array del tipo eMoto
 * \param tam tamanio de array de lista
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int ordenarxIdTipo(eMoto lista[], int tam, eTipo tipos[], int tamT);



/**
 * \brief le pone el nombre al id
 * \param lista array del tipo eMoto
 * \param tam tamanioo del vector lista
 * \param marca array del tipo char
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int cargarMarca(eMoto lista[],int tam,int id,char marca[]);





#endif /* MOTO_H_ */
