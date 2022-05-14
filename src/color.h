

#ifndef COLOR_H_
#define COLOR_H_

typedef struct{
	int id;
	char nombreColor[20];
}eColor;



/**
 * \brief le pone la descripcion al id
 * \param colores. Array a mostrar
 * \param tam tamaño del array
 * \param idColor
 *
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int cargarDescC(eColor colores[],int tam, int idColor, char descripcion[]);

/**
 * \brief Muestra la lista de colores
 * \param colores. Array a mostrar
 * \param tamaño del array
 *\return Retorna 1 si salio bien o 0 si salio mal
 */
int mostrarColores(eColor colores[], int tam);

#endif /* COLOR_H_ */





