#include <stdio.h>
#include <stdlib.h>
#include "FuncionesTp.h"
int main(void)
{
	setbuf(stdout, NULL);
	int opcion;
	int kilometros;
	float precioAerolineasArgentinas;
	float precioLatam;
	do{
		opcion = mostrarMenu(opcion);
		switch(opcion){
			case 1:
				kilometros = ingresoDeDatos("Ingrese cantidad de kilometros: ",kilometros);
				printf("Usted ingresó %d kilometros.\n", kilometros);
				printf("\n");
			break;
			case 2:
				precioLatam = ingresoDeDatos("Ingrese precio de vuelo de Latam: ", precioLatam);
				precioAerolineasArgentinas = ingresoDeDatos("Ingrese precio de vuelo de Aerolineas Argentinas: ", precioAerolineasArgentinas);
				printf("\n");
				break;
			case 3:
			break;
			case 4:
			break;
			case 5:
				cargaForzada();
			break;
			default:
				printf("\nSaliste del menu.");
			break;
		}
	}while(opcion != 6);
	return EXIT_SUCCESS;
}


