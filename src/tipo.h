
#ifndef TIPO_H_
#define TIPO_H_

typedef struct{
	int id;
	char descripcion[20];
}eTipo;



/**
 * \brief le carga la desctripcion al id tipo
 * \param tipos vector de tipo eTipos
 * \param tam tama�o del vectos tipos
 * \param idtipo id a acrgar
 * \param descripcion espacio en memoria para escribir la descripcion
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int cargarDescripcionT(eTipo tipos[],int tam,int idTipo,char descripcion[]);



/**
 * \brief muestra los tipos
 * \param tipos array del tipo eTipos
 * \param tam tamanio del vector tipos
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarTipos(eTipo tipos[],int tam);

#endif /* TIPO_H_ */
