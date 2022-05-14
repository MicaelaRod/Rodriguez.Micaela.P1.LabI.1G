#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "moto.h"
#include "data.h"
#include "tipo.h"
#include "servicio.h"
#include "trabajo.h"
#include "utn.h"


int mostrarServicios(eServicio servicios[], int tam) {

	int todoOk = 0;

	if (servicios != NULL && tam > 0) {

		printf("***Servicios***\n");

		printf("---------------------------------------------------\n");

		printf("   ID     DESCRIPCION                 PRECIO\n");

		printf("---------------------------------------------------\n");

		for (int i = 0; i < tam; i++) {

			printf("  %d    %-10s                %.2f\n", servicios[i].id,
					servicios[i].descripcion,servicios[i].precio);

		}

		todoOk = 1;
	}

	return todoOk;
}

int cargarDescripcionServicios(eServicio servicios[],int tamC,int idServicios,char descripcion[]){
	int todoOk =0;

	if(servicios != NULL && tamC>0 && descripcion != NULL){

		for(int i=0;i<tamC;i++){
			if(servicios[i].id == idServicios){
				strcpy(descripcion,servicios[i].descripcion);
				break;
			}
		}

		todoOk = 1;
	}

	return todoOk;
}

