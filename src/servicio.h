

#ifndef SERVICIO_H_
#define SERVICIO_H_

typedef struct{
	int id;
	char descripcion[25];
	float precio;
}eServicio;




/**
 * \brief muestra los servicios
 * \param servicios array del tipo eServicio
 * \param tam tamanio del vector de servicios
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarServicios(eServicio servicios[], int tam);



/**
 * \brief carga el nombre del servicio
 \param servicios array del tipo eServicio
 * \param tamC tamanio del vector de servicios
 * \param  idServicios
 * \param descripcion
 *\return Retorna 1 si salio bien o 0 si salio mal
 */

int cargarDescripcionServicios(eServicio servicios[],int tamC,int idServicios,char descripcion[]);



#endif /* SERVICIO_H_ */
