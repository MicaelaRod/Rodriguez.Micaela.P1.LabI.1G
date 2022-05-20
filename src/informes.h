

#ifndef INFORMES_H_
#define INFORMES_H_

#include "moto.h"
#include "tipo.h"
#include "color.h"
#include "trabajo.h"
#include "servicio.h"


//HICE ALGUNOS INFORMES DE MAS!!!



/**
 * \brief muestra un menu
 * \param void
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int menuInforme();



/**
 * \brief  muestra
 * \param lista array del tipo eMoto
 * \param tam tamanio de array
 * \param tipo lista array del tipo eTipo
 * \param tamT tamanio de array
 * \param colores lista array del tipo eColor
 * \param tamC tamanio de array
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarMotoIdTipo(int idIngresado,eMoto lista[],int tam, eTipo tipo[],int tamT,eColor colores[],int tamC );



/**
 * \brief muestra las motos del tipo seleccionado por el usuario
 * \param lista  array del tipo eMoto
 * \param tam tamanio de array
 * \param tipo array del tipo eTipo
 * \param tamT tamanio de array
 * \param colores  array del tipo eColor
 * \param tamC tamanio de array
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarMotosTipo(eMoto lista[], int tam, eTipo tipos[], int tamT,eColor colores[],int tamC);


/**
 * \brief
 * \param lista  array del tipo eMoto
 * \param tam tamanio de array
 * \param tipo  array del tipo eTipo
 * \param tamT tamanio de array
 * \param colores  array del tipo eColor
 * \param tamC tamanio de array
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarMotoIdColor(int idIngresado,eMoto lista[],int tam, eTipo tipo[],int tamT,eColor colores[],int tamC );



/**
 * \brief muestra las motos del color seleccionado por el usuario
 * \param lista  array del tipo eMoto
 * \param tam tamanio de array
 * \param tipo  array del tipo eTipo
 * \param tamT tamanio de array
 * \param colores  array del tipo eColor
 * \param tamC tamanio de array
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarMotosColor(eMoto lista[], int tam,eTipo tipo[],int tamT ,eColor colores[], int tamC);


/**
 * \brief cada tipo con sus respectivas motos
 * \param lista  array del tipo eMoto
 * \param tam tamanio de array
 * \param tipo  array del tipo eTipo
 * \param tamT tamanio de array
 * \param colores  array del tipo eColor
 * \param tamC tamanio de array
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarMotosSeparadasxTipo(eMoto lista[], int tam,eTipo tipos[], int tamT,eColor colores[],int tamC);



/**
 * \brief  cuenta las motos que son del tipo y color seleccionado
 * \param lista  array del tipo eMoto
 * \param tam tamanio de array
 * \param tipo  array del tipo eTipo
 * \param tamT tamanio de array
 * \param colores  array del tipo eColor
 * \param tamC tamanio de array
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int contarMotosXUnColorYTipo(eMoto motos[], int tam,eTipo tipos[], int tamT,eColor colores[],int tamC);



/**
 * \brief muestra la marca de la moto con el menor puntaje
 * \paramlista array del tipo eMoto
 * \param tam tamanio de array
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarMarcaMotoMenorPuntaje(eMoto lista[], int tam);



/**
 * \brief muestra el color  mas elegido
  * \param lista  array del tipo eMoto
 * \param tam tamanio de array
 * \param colores  array del tipo eColor
 * \param tamC tamanio de array
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int colorConMasMotos(eMoto lista[], int tam,eColor colores[],int tamC);



/**
 * \brief muestra la marca de la moto con la mayor cilindrada
 * \paramlista array del tipo eMoto
 * \param tam tamanio de array
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarMotodeMayorCilindrada(eMoto lista[], int tam);


/**
 * \brief muestra el promedio del puntaje de un tipo seleccionado
 * \paramlista array del tipo eMoto
 * \param tam tamanio de array
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarPromedioPuntajeTipo(eMoto lista[],int tam, eTipo tipos[],int tamT);




/**
 * \brief muestra el promedio del puntaje de un tipo seleccionado
 * \paramlista array del tipo eMoto
 * \param tam tamanio de array
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarPromedioPuntajeIdTipo(int idIngresado,eMoto lista[],int tam, eTipo tipos[],int tamT);

//////////////////////////////////TRABAJOS//////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////7



/**
 * \brief muestra los trabajos que se le hicieorn a una moto seleccionada
 * \param lista  array del tipo eMoto
 * \param tam tamanio de array
 * \param tipo  array del tipo eTipo
 * \param tamT tamanio de array
 * \param colores  array del tipo eColor
 * \param tamC tamanio de array
 *  *  \param  servicios array del tipo eServicio
   \param  tamS tamanio del array de servicios
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarTrabajosDeUnaMoto(eTrabajo trabajos[],int tamTra,eServicio servicios[],int tamS,eMoto motos[],int tamM,eColor colores[],int tamC,eTipo tipos[],int tamT);




/**
 * \brief hace la suma de los importes de trabajo
 * \param lista  array del tipo eMoto
 * \param tam tamanio de array
 * \param tipo  array del tipo eTipo
 * \param tamT tamanio de array
 * \param colores  array del tipo eColor
 * \param tamC tamanio de array
 *  *  \param  servicios array del tipo eServicio
   \param  tamS tamanio del array de servicios
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int sumarImportesdeServicios(eTrabajo trabajos[],int tamTra,eServicio servicios[],int tamS,eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC);




/**
 * \brief  Pedir un servicio y mostrar las motos a las que se les realizo ese servicio y la fecha.
 * \param lista  array del tipo eMoto
 * \param tam tamanio de array de lista
 * \param tipo  array del tipo eTipo
 * \param tamT tamanio de array de tipos
 * \param colores  array del tipo eColor
 * \param tamC tamanio de array de colores
 *  \param  servicios array del tipo eServicio
   \param  tamS tamanio del array de servicios
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarFechaYMotoXServicio(eTrabajo trabajos[],int tamTra,eServicio servicios[],int tamS,eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC);




/**
 * \brief Pedir una fecha y mostrar todos los servicios realizados en la misma.
 * \param servicios array del tipo eServicio
 * \param tamS tamanio de array servicios
   \param  trabajos array del tipo eTrabajo
   \param  tamTra tamanio del array de trabajos
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarServiciosXFecha(eTrabajo trabajos[],int tamTra,eServicio servicios[],int tamS);


#endif /* INFORMES_H_ */
