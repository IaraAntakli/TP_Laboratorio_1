#include <stdio.h>
#include <stdlib.h>
#include "FuncionesTp.h"
int main(void)
{
	setbuf(stdout, NULL);
	int opcion;
	int banderaDelTres = 1;
	int kilometros = 0;
	float precioAerolineasArgentinas = 0;
	float precioLatam = 0;
	float debito1;
	float debito2;
	float credito1;
	float credito2;
	float bitcoin1;
	float bitcoin2;
	float unitario1;
	float unitario2;
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
				precioLatam = ingresoDeDatos("Ingrese precio de vuelo de Latam: ", precioLatam);
				precioAerolineasArgentinas = ingresoDeDatos("Ingrese precio de vuelo de Aerolineas Argentinas: ", precioAerolineasArgentinas);
				printf("\n");
				break;
			case 3:
				if(precioAerolineasArgentinas == 0 && precioLatam == 0){
					printf("Error, no se pueden realizar calculos si no hay precio de vuelo ingresado\n");
				}
				else{
					banderaDelTres = 0;
					debito1= descuentos(precioAerolineasArgentinas, 10);
					debito2 = descuentos(precioLatam, 10);
					credito1 = interes(precioAerolineasArgentinas, 15);
					credito2 = interes(precioLatam, 15);
					bitcoin1 = vueloBitcoin(precioAerolineasArgentinas, valorBitcoin);
					bitcoin2 = vueloBitcoin(precioLatam, valorBitcoin);
					unitario1 = unitarioKm(precioAerolineasArgentinas, kilometros);
					unitario2 = unitarioKm(precioLatam, kilometros);
					diferencia = diferenciaPrecios(precioLatam, precioAerolineasArgentinas);
				}
			break;
			case 4:
				if(banderaDelTres == 0){
					printf("Kilometros ingresados: %d km", kilometros);
					printf("\n");
					printf("\nPrecio Latam: $%.2f ", precioLatam);
					printf("\na) Precio con tarjeta de débito: $%.2f", debito2);
					printf("\nb) Precio con tarjeta de crédito: $%.2f", credito2);
					printf("\nc) Precio pagando con bitcoin: %f BTC", bitcoin2);
					printf("\nd) Precio unitario: $%.2f", unitario2);
					printf("\n");
					printf("\nPrecio Aerolineas Argentinas: $%.2f ", precioAerolineasArgentinas);
					printf("\na) Precio con tarjeta de débito: $%.2f", debito1);
					printf("\nb) Precio con tarjeta de crédito: $%.2f", credito1);
					printf("\nc) Precio pagando con bitcoin: %f BTC", bitcoin1);
					printf("\nd) Precio unitario: $%.2f", unitario1);
					printf("\n");
					printf("\nLa diferencia de precio es: $%.2f \n", diferencia);
					printf("\n");
				}
				else{
					printf("Error, no se puede acceder a la opcion 4 sin antes haber accedido a la numero 3\n");
				}
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


