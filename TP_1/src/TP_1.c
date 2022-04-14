#include <stdio.h>
#include <stdlib.h>
#include "FuncionesTp.h"
int main(void)
{
	setbuf(stdout, NULL);
	int opcion;
	int kilometros = 0;
	float precioAerolineasArgentinas = 0;
	float precioLatam = 0;
	float debito1 = 0;
	float debito2 = 0;
	float credito1 = 0;
	float credito2 = 0;
	float bitcoin1 = 0;
	float bitcoin2 = 0;
	float unitario1 = 0;
	float unitario2 = 0;
	float diferencia;
	float valorBitcoin = 4663271.15;
	do{
		opcion = mostrarMenu(opcion);
		switch(opcion){
			case 1:
				kilometros = ingresoDeDatos("Ingrese cantidad de kilometros: ",kilometros);

				printf("\n");
			break;
			case 2:
				precioAerolineasArgentinas = ingresoDeDatos("Ingrese precio de vuelo de Aerolineas Argentinas: ", precioAerolineasArgentinas);
				precioLatam = ingresoDeDatos("Ingrese precio de vuelo de Latam: ", precioLatam);
				printf("\n");
				break;
			case 3:
				debito1 = precioAerolineasArgentinas-precioAerolineasArgentinas*10/100;
				debito2 = precioLatam-precioLatam*10/100;
				credito1 = precioAerolineasArgentinas+precioAerolineasArgentinas*15/100;
				credito2 = precioLatam+precioLatam*15/100;
				bitcoin1 = precioAerolineasArgentinas / valorBitcoin;
				bitcoin2 = precioLatam / valorBitcoin;
				unitario1 = precioAerolineasArgentinas/kilometros;
				unitario2 = precioLatam/kilometros;
				diferencia = precioAerolineasArgentinas-precioLatam;
			break;
			case 4:
				printf("Kilometros ingresados: %d", kilometros);
				printf("\n");
				printf("\nPrecio Aerolineas Argentinas: $%.2f ", precioAerolineasArgentinas);
				printf("\na) Precio con tarjeta de débito: $%.2f", debito1);
				printf("\nb) Precio con tarjeta de crédito: $%.2f", credito1);
				printf("\nc) Precio pagando con bitcoin: %f BTC", bitcoin1);
				printf("\nd) Precio unitario: $%.2f", unitario1);
				printf("\n");
				printf("\nPrecio Latam: $%.2f ", precioLatam);
				printf("\na) Precio con tarjeta de débito: $%.2f", debito2);
				printf("\nb) Precio con tarjeta de crédito: $%.2f", credito2);
				printf("\nc) Precio pagando con bitcoin: %f BTC", bitcoin2);
				printf("\nd) Precio unitario: $%.2f", unitario2);
				printf("\n");
				printf("\nLa diferencia de precio es: $%.2f \n", diferencia);
				printf("\n");
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


