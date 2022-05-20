#include <string.h>
#include "data.h"
#include "moto.h"
#include "tipo.h"
#include <stdio.h>
#include <stdlib.h>


char marcas [10] [20] ={
		"Yamaha",
		"Suzuki",
		"Honda",
		"Kawasaki",
		"BMW",
		"KTM",
		"Corven",
		"Zanella",
		"Motomel",
		"Gilera"
};



int puntajes [10] = {1,1,2,4,7,4,9,10,8,6};

int cilindradas [10] = {750,50,500,750,600,125,50,10,600,125};

int idTipos[10] = {1002,1003,1000,1001,1001,1002,1002,1003,1001,1000};

int idColor[10] = {10000,10002,10003,10001,10004,10002,10001,10000,10001,10000};

int hardcodear(eMoto lista[],int tam,int cant,int* pId){

	int contador = -1;

	if(lista != NULL && tam > 0 && cant >=0 && cant <= tam && pId != NULL){
		contador = 0;
		for(int i=0;i<cant;i++){
			lista[i].id = *pId;
			(*pId)++;
			strcpy(lista[i].marca,marcas[i]);
			lista[i].idTipo = idTipos[i];
			lista[i].idColor = idColor[i];
			lista[i].cilindrada = cilindradas[i];
			lista[i].puntaje = puntajes[i];
            lista[i].isEmpty = 0;
			contador++;
		}
	}


	return contador;
}

