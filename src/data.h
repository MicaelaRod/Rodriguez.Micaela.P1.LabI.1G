
#ifndef DATA_H_
#define DATA_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "moto.h"
#include "tipo.h"



/**
 * \brief hardcodea arrays del tipo eMoto
 * \param lista array del tipo eMoto
 * \param tam tamanio del array lista
 * \param cant cantidad a hardcodear
 * \param pId puntero int
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int hardcodear(eMoto lista[],int tam,int cant,int* pId);


#endif /* DATA_H_ */
