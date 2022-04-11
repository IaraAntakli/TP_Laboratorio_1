/* Iara Antakli
Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
para ofrecerlos a sus clientes.
Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar Kilómetros: ( km=x)
2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
	- Precio vuelo Aerolíneas:
	- Precio vuelo Latam:
3. Calcular todos los costos:
	a) Tarjeta de débito (descuento 10%)
	b) Tarjeta de crédito (interés 25%)
	c) Bitcoin (1BTC -> 4,606,954.55 Pesos Argentinos)
	d) Mostrar precio por km (precio unitario)
	e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
4. Informar Resultados
  “Latam:
	a) Precio con tarjeta de débito: r
	b) Precio con tarjeta de crédito: r
	c) Precio pagando con bitcoin : r
	d) Precio unitario: r"
  "Aerolíneas:
	a) Precio con tarjeta de débito: r
	b) Precio con tarjeta de crédito: r
	c) Precio pagando con bitcoin : r
	d) Precio unitario: r
	La diferencia de precio es : r “
5. Carga forzada de datos
6. Salir */
#include <stdio.h>
#include <stdlib.h>
#include "DescuentosIntereses.h"
#include "CargaForzada.h"
int main(void)
{	setbuf(stdout, NULL);
	int opcion;
	int kilometros = 0;
	float precioAerolineas;
	float precioLatam;
	float valorBitcoin;
	float tarjetaDebitoAerolineas;
	float tarjetaCreditoAerolineas;
	float vueloBitcoinAerolineas;
	float precioUnitarioAerolineas;
	float diferenciaPrecios;
	float tarjetaDebitoLatam;
	float tarjetaCreditoLatam;
	float vueloBitcoinLatam;
	float precioUnitarioLatam;
	valorBitcoin = 4606954.55;
	do{
		printf("1)Ingresar kilometros. \n2)Ingresar precio de vuelos (Latam/Aerolineas Argentinas). \n3)Calcular todos los costos. \n4)Informar  Resultados. \n5)Carga forzada de datos. \n6)Salir. \n" );
		scanf("%d", &opcion);
		switch(opcion){
			case 1:
				printf("Ingrese cantidad de kilometros: ");
				fflush(stdin);
				scanf("%d", &kilometros);
				printf("\n");
			break;
			case 2:
				printf("Ingrese precio de vuelo de Aerolineas Argentinas: ");
				scanf("%f", &precioAerolineas);
				fflush(stdin);
				printf("Ingrese precio de vuelo de Latam: ");
				scanf("%f", &precioLatam);
				printf("\n");
			break;
			case 3://cuentas
				tarjetaDebitoLatam = precioLatam - descuento(10, precioAerolineas);
				tarjetaCreditoLatam = precioLatam + interes(15, precioAerolineas);
				vueloBitcoinLatam = precioLatam / valorBitcoin;
				precioUnitarioLatam = precioLatam / kilometros;
				tarjetaDebitoAerolineas = precioAerolineas - descuento(10, precioAerolineas);
				tarjetaCreditoAerolineas = precioAerolineas + interes(15, precioAerolineas);
				vueloBitcoinAerolineas = precioAerolineas / valorBitcoin;
				precioUnitarioAerolineas = precioAerolineas / kilometros;
				diferenciaPrecios = precioAerolineas - precioLatam;
			break;
			case 4:
				printf("\n               |Latam|");
				printf("\nPrecio con tarjeta de débito: %.2f", tarjetaDebitoLatam);
				printf("\nPrecio con tarjeta de crédito: %.2f", tarjetaCreditoLatam);
				printf("\nvPrecio pagando con bitcoin: %f", vueloBitcoinLatam);
				printf("\nPrecio unitario: %.2f", precioUnitarioLatam);
				printf("\n");
				printf("\n        |Aerolineas Argentinas|");
				printf("\nPrecio con tarjeta de débito: %.2f", tarjetaDebitoAerolineas);
				printf("\nPrecio con tarjeta de crédito: %.2f", tarjetaCreditoAerolineas);
				printf("\nPrecio pagando con bitcoin: %f", vueloBitcoinAerolineas);
				printf("\nPrecio unitario: %.2f", precioUnitarioAerolineas);
				printf("\nLa diferencia de precio es: %.2f \n", diferenciaPrecios);
				printf("\n");
			break;
			case 5: //carga forzada

			break;
			case 6:
				printf("\nSaliste del menú");
			break;
			default:

			break;
		}

	}while(opcion != 6);
	return EXIT_SUCCESS;

}
