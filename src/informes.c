#include "informes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "moto.h"
#include "utn.h"
#include "tipo.h"
#include "trabajo.h"
#include "servicio.h"

//HICE ALGUNOS INFORMES DE MAS!!

int menuInforme() {

	int opcion;

	printf("\nInformes:\n");
	printf("\n1.Mostrar las motos del color seleccionado por el usuario. \n");
	printf("\n2.Informar el promedio de puntaje de un tipo seleccionado por el usuario.\n");
	printf("\n3.Informar la o las motos de mayor cilindrada.\n");
	printf("\n4.Mostrar un listado de las motos separadas por tipo.\n");
	printf("\n5.Elegir un color y un tipo y contar cuantas motos hay de ese color y ese tipo.\n");
	printf("\n6.Mostrar el o los colores más elegidos por los clientes.\n");

	printf("\nINFORMES DE TRABAJOS\n ");
	printf("\n7.Trabajos que se le hizo a una moto seleccionada\n");
	printf("\n8.Pedir una moto e informar la suma de los importes de los servicios que se le hicieron\n");
	printf("\n9.Pedir un servicio y mostrar las motos a las que se les realizo ese servicio y la fecha.\n");
	printf("\n10.Pedir una fecha y mostrar todos los servicios realizados en la misma.\n");


	printf("\nIngrese opcion: ");
	scanf("%d", &opcion);

	return opcion;
}

int mostrarMotoIdTipo(int idIngresado,eMoto lista[],int tam, eTipo tipo[],int tamT,eColor colores[],int tamC ){

	int todoOk = 0;
	int flag = 1;


		if(lista != NULL && tipo != NULL && tam > 0 && tamT > 0 && colores != NULL && tamC > 0 ){

printf("--------------------------------------------------------------------------\n");
printf("  ID     Marca       Tipo      Color         Cilindrada      Puntaje  \n");
printf("-------------------------------------------------------------------------\n");
		for (int i = 0; i < tam; i++) {

			if (lista[i].isEmpty == 0 && lista[i].idTipo == idIngresado) {
				mostrarUno(lista[i], tipo, tamT, colores, tamC);
				flag = 0;
				printf("\n");
			}

		}

		if (flag) {
			printf("No hay motos de ese tipo\n");
		}

		todoOk = 1;
	}
	return todoOk;

}

int mostrarMotosTipo(eMoto lista[], int tam, eTipo tipos[], int tamT,eColor colores[],int tamC) {

	int todoOk = 0;
	int idIngresado;

	if (lista != NULL && tipos != NULL && tam > 0 && tamT > 0) {

		mostrarTipos(tipos, tamT);

		idIngresado = getInt("Ingrese Id tipo: ", "ERROR.Ingrese Id tipo: ",1003, 1000);

		mostrarMotoIdTipo(idIngresado, lista, tam, tipos, tamT,colores,tamC);

		todoOk = 1;
	}
	return todoOk;
}




int mostrarMotoIdColor(int idIngresado,eMoto lista[],int tam, eTipo tipo[],int tamT,eColor colores[],int tamC ){

	int todoOk = 0;
	int flag = 1;


		if(lista != NULL && tipo != NULL && tam > 0 && tamT > 0 && colores != NULL && tamC > 0 ){

printf("------------------------------------------------------------------\n");
printf("  ID     Marca       Tipo      Color         Cilindrada      Puntaje  \n");
printf("------------------------------------------------------------------\n");
		for (int i = 0; i < tam; i++) {

			if (lista[i].isEmpty == 0 && lista[i].idColor == idIngresado) { //muestra solo los que estan cargados!!
				mostrarUno(lista[i], tipo, tamT, colores, tamC);
				flag = 0;
				printf("\n");
			}

		}

		if (flag) {
			printf("No hay motos de ese color\n");
		}

		todoOk = 1;
	}
	return todoOk;

}

int mostrarMotosColor(eMoto lista[], int tam,eTipo tipo[],int tamT ,eColor colores[], int tamC) {

	int todoOk = 0;
	int idIngresado;

	if (lista != NULL && colores != NULL && tam > 0 && tamC > 0) {

		mostrarColores(colores, tamC);

		idIngresado = getInt("Ingrese Id color: ", "ERROR.Ingrese Id color: ",10004, 10000);

		mostrarMotoIdColor(idIngresado, lista, tam,tipo,tamT, colores, tamC);

		todoOk = 1;
	}
	return todoOk;
}


int mostrarMotosSeparadasxTipo(eMoto lista[], int tam,eTipo tipos[], int tamT,eColor colores[],int tamC) {

	int todoOk = 0;


	if (lista != NULL && tipos != NULL && tam > 0 && tamT > 0) {

		printf("Motos de cada tipo\n");

		for(int i = 0; i < tamT ; i++){
			printf("Tipo de moto : %s\n",tipos[i].descripcion);
			mostrarMotoIdTipo(tipos[i].id,lista,tam,tipos,tamT,colores,tamC);
printf("\n----------------------------------------------------\n");
		}

		todoOk = 1;
	}

	return todoOk;
}


int contarMotosXUnColorYTipo(eMoto motos[], int tam,eTipo tipos[], int tamT,eColor colores[],int tamC)
{
    int retorno=-1;
    int auxColor;
    int auxTipo;
    int contador=0;


    if(motos != NULL && tam > 0 && colores != NULL && tamC > 0 && tipos != NULL && tamT > 0)
    {

        printf("Cantidad de motos de un color y tipo seleccionado\n\n");
        mostrarColores(colores,tamC);
        auxColor = getInt("Ingrese Id color: ", "ERROR.Ingrese Id color: ",10004, 10000);
        mostrarTipos(tipos,tamT);
        auxTipo = getInt("Ingrese Id tipo: ", "ERROR.Ingrese Id tipo: ",1003, 1000);
        for(int i=0;i<tam;i++)
        {
            if(motos[i].idColor == auxColor && motos[i].idTipo == auxTipo && motos[i].isEmpty == 0)
            {
                contador++;
            }
        }




        if(contador == 0)
        {
            printf("\nNo hay motos de ese tipo y color\n\n");
        }else if(contador==1)
        {
            printf("\nHay una moto con ese color y tipo\n\n");
        }else
        {
            printf("\nCantidad de motos de este color y tipo:%d\n\n",contador);
        }
    }

    return retorno;
}


int mostrarMarcaMotoMenorPuntaje(eMoto lista[], int tam) {
	int todoOk = 0;
	int menor;
	int flag = 1;

	if (lista != NULL && tam > 0) {

		for (int i = 0; i < tam; i++) {

			if (lista[i].isEmpty == 0) {
				if (flag == 1 || lista[i].puntaje < menor) {

					menor = lista[i].puntaje;

					flag = 0;

				}
			}

		}

		printf("Marca de la moto o motos con menor puntaje:\n");

		for (int i = 0; i < tam; i++) {

			if (lista[i].isEmpty == 0 && lista[i].puntaje == menor) {
				printf("%s\n", lista[i].marca);

			}
		}

	todoOk = 1;
	}

	printf("Menor puntaje: %d\n", menor);


return todoOk;
}




int colorConMasMotos(eMoto lista[], int tam,eColor colores[],int tamC){


	int todoOk = 0;
	int contadores[] = {0,0,0,0,0};
	int maximo;

	if (lista != NULL && tam > 0 && colores != NULL && tamC > 0) {

		printf("Color con mas motos\n");

		for (int i = 0; i < tamC; i++) {


			for (int j = 0; j < tam; j++) {

				if (lista[j].isEmpty == 0 && lista[j].idColor == colores[i].id) {
					contadores[i]++;
				}
			}

		}

		for (int i = 0; i < tamC; i++) {
			if (i == 0 || contadores[i] > maximo) {
				maximo = contadores[i];
			}
		}


		for(int i=0;i<tamC;i++){
			if(contadores[i]== maximo){

				printf("%s\n",colores[i].nombreColor);

			}
		}

	}

	return todoOk;
}





int mostrarMotodeMayorCilindrada(eMoto lista[], int tam) {

	int todoOk = 0;
	int mayor;
	int flag = 1;

	if (lista != NULL && tam > 0) {

		for (int i = 0; i < tam; i++) {

			if (lista[i].isEmpty == 0) {
				if (flag == 1 || lista[i].cilindrada > mayor) {

					mayor = lista[i].cilindrada;

					flag = 0;

				}
			}

		}

		printf("Marca de la moto o motos con mayor cilindrada:\n");

		for (int i = 0; i < tam; i++) {

			if (lista[i].isEmpty == 0 && lista[i].cilindrada == mayor) {
				printf("%s\n", lista[i].marca);

			}
		}

		todoOk = 1;
	}

	printf("Mayor cilindrada: %d\n", mayor);

	return todoOk;

}






int mostrarPromedioPuntajeTipo(eMoto lista[],int tam, eTipo tipos[],int tamT){

	int todoOk = 0;
	int idIngresado;

	if(lista != NULL && tipos != NULL && tam > 0 && tamT > 0 ){


		printf("Promedio de puntaje de un tipo en especifico");
			mostrarTipos(tipos, tamT);

			idIngresado = getInt("Ingrese Id tipo: ","ERROR.Ingrese Id tipo: ",1003,1000);

			mostrarPromedioPuntajeIdTipo(idIngresado,lista,tam,tipos,tamT);


		todoOk = 1;
	}
	return todoOk;
}

int mostrarPromedioPuntajeIdTipo(int idIngresado,eMoto lista[],int tam, eTipo tipos[],int tamT) {

	int todoOk = 0;
	char DescripcionT[20];
	int contador = 0;
	float acum = 0;
	float promedio;

	if (lista != NULL && tipos != NULL && tam > 0 && tamT > 0) {

		for (int i = 0; i < tam; i++) {

			if (lista[i].isEmpty == 0 && lista[i].idTipo == idIngresado) { //muestra solo los que estan cargados!!

				acum += lista[i].puntaje;

				contador++;

				printf("\n");
			}

		}

		if(contador == 0){
			cargarDescripcionT(tipos,tamT,idIngresado,DescripcionT);
			printf("No hay motos del tipo %s\n",DescripcionT);
		}
		else{
			promedio = (float)acum / contador;
			cargarDescripcionT(tipos,tamT,idIngresado,DescripcionT);
			printf("El promedio de puntaje del tipo %s es %.2f\n",DescripcionT,promedio);
		}

		todoOk = 1;
	}
	return todoOk;

}


///////////////////////////TRABAJOS/////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

int mostrarTrabajosDeUnaMoto(eTrabajo trabajos[],int tamTra,eServicio servicios[],int tamS,eMoto motos[],int tamM,eColor colores[],int tamC,eTipo tipos[],int tamT)
{
    int todoOk=0;
    int aux;
    int flag=0;

    if(trabajos != NULL && tamTra > 0 && servicios != NULL && tamS > 0 && motos != NULL && tamM > 0)
    {

        printf("Lista de trabajos de una moto\n\n");
        mostrarMuchos(motos, tamM,tipos,tamT,colores,tamC);
        aux = getInt("Ingrese Id Moto: ", "ERROR.Ingrese Id Moto: ",10010, 1000);

        printf("\n\n");
        printf("  Id        Moto       Servicio          Fecha\n");
        printf("-----------------------------------------------------------------------\n");
		for (int i = 0; i < tamM; i++) {
			if (trabajos[i].idMoto == aux && trabajos[i].isEmpty == 0) {
				mostrarTrabajo(trabajos[i], servicios, tamS, motos, tamM);
				flag = 1;
			}
		}

        if(flag == 0)
        {
            printf("No se realizo ningun trabajo con esta moto\n\n");
        }

        todoOk=1;
    }

    return todoOk;
}


int sumarImportesdeServicios(eTrabajo trabajos[],int tamTra,eServicio servicios[],int tamS,eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC)
{
    int todoOk = 0;
    int aux;
    float acumulador=0;
    int flag=0;

    if(trabajos != NULL && tamTra > 0 && servicios != NULL && tamS > 0 && motos != NULL && tamM > 0 && tipos != NULL && colores != NULL && tamC > 0)
    {

        printf("Ganancias de un servicio\n\n");
        mostrarMuchos(motos, tamM,tipos,tamT,colores,tamC);
        aux = getInt("Ingrese Id Moto: ", "ERROR.Ingrese Id Moto: ",10010, 1000);

        for(int i=0 ; i<tamM ; i++)
        {
            if(trabajos[i].idMoto == aux && trabajos[i].isEmpty==0)
            {
                flag=1;
                for(int j=0 ; j < tamS ; j++)
                {
                    if(trabajos[i].idServicio==servicios[j].id)
                    {
                        acumulador+=servicios[j].precio;
                    }
                }
            }
        }

        if(flag == 0)
        {
            printf("\nNo se obtuvo ninguna ganancia\n\n");
        }else
        {
            printf("\nSuma de importes:%.2f\n\n",acumulador);
        }
        todoOk = 1;
    }

    return todoOk;
}

int mostrarFechaYMotoXServicio(eTrabajo trabajos[],int tamTra,eServicio servicios[],int tamS,eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC)
{
    int todoOk = 0;
    int aux;
    int flag=0;

    if(trabajos != NULL && tamTra > 0 && servicios != NULL && tamS > 0 && motos != NULL && tamM > 0)
    {

    	mostrarServicios(servicios,tamS);
    	aux = getInt("Ingrese Id del servicio: ", "ERROR.Ingrese Id servicio: ",20003, 20000);

        for(int i=0;i<tamTra;i++)
        {
            if(trabajos[i].idServicio == aux&&trabajos[i].isEmpty==0)
            {
                printf("\n\n");
                printf("----------------------------------------------------------------------------\n");
                printf("  ID     Marca       Tipo      Color         Cilindrada      Puntaje  \n");
                printf("---------------------------------------------------------------------------\n");
                mostrarUno(motos[buscarID(motos,tamM,trabajos[i].idMoto)],tipos,tamT,colores,tamC);

                printf("\nFecha:%02d/%02d/%d", trabajos[i].fecha.dia, trabajos[i].fecha.mes, trabajos[i].fecha.anio);

                printf("\n--------------------------------------\n");
                flag=1;

            }
        }

        if(flag == 0)
        {
            printf("Ningun trabajo necesito de ese servicio\n\n");
        }

        todoOk=0;
    }
    return todoOk;
}

int mostrarServiciosXFecha(eTrabajo trabajos[],int tamTra,eServicio servicios[],int tamS)
{
    int todoOk = 0;
    eFecha fecha;
    char aux[25];
    int flag=0;

    if(trabajos != NULL && tamTra >0  && servicios != NULL && tamS > 0)
    {

        printf("Mostrar servicios por fecha\n\n");

        fecha.dia = getInt("Ingrese dia: ", "ERROR.Reingrese dia: ",31, 1);

        fecha.mes = getInt("Ingrese mes: ", "ERROR.Reingrese mes: ",12, 1);

        fecha.anio = getInt("Ingrese año: ", "ERROR.Reingrese año: ",2022, 1995);


        printf("\n\nServicios que se hicieron en esta fecha:\n");

        for(int i=0;i<tamTra;i++)
        {
            if(trabajos[i].fecha.dia == fecha.dia && trabajos[i].fecha.mes == fecha.mes && trabajos[i].fecha.anio == fecha.anio && trabajos[i].isEmpty == 0)
            {
            	cargarDescripcionServicios(servicios,tamS,trabajos[i].idServicio,aux);
                printf("%s\n",aux);
                flag=1;
            }
        }

        if(flag == 0)
        {
            printf("No hay trabajos cargados ese dia\n");
        }

        todoOk = 1;
    }

    return todoOk;
}
