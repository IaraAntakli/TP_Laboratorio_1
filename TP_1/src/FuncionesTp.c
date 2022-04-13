#include <stdio.h>
#include <stddef.h>
/**
 * opcion = variable
 * printf = opciones del menu
 * scanf = guarda opciones
 * if = valida opciones
 */
int mostrarMenu (int opcion)
{
	printf("              *** MENU ***");
	printf("\n        Elija una opcion del 1 al 6:\n");
	printf("\n1)Ingresar kilometros. \n2)Ingresar precio de vuelos (Latam/Aerolineas Argentinas). \n3)Calcular todos los costos. \n4)Informar  Resultados. \n5)Carga forzada de datos. \n6)Salir. \n" );
	scanf("%d", &opcion);
	if(opcion >= 7)
	{
		printf("Error, ingrese una opcion valida\n");
		printf("1)Ingresar kilometros. \n2)Ingresar precio de vuelos (Latam/Aerolineas Argentinas). \n3)Calcular todos los costos. \n4)Informar  Resultados. \n5)Carga forzada de datos. \n6)Salir. \n" );
		scanf("%d", &opcion);
	}
	return opcion;
}
/**
 * @param mensaje: indica que ingresar (kmts o precios)
 * @param dato: numero ingresado
 * @return dato
 */
int ingresoDeDatos (char*mensaje, int dato)
{
	printf("%s",mensaje);
	fflush(stdin);
	scanf("%d",&dato);
	return dato;
}

float hacerCuentas (float cuentas)
{
	return 0;
}
 void mostrarCuentas ()
 {
	int kilometros;
	float precioAerolineasArgentinas;
	float precioLatam;
	float debito1;
	float debito2;
	float credito1;
	float credito2;
	float valorBitcoin;
	float bitcoin1;
	float bitcoin2;
	float unitario1;
	float unitario2;
	float diferencia;

	debito1 = precioAerolineasArgentinas-precioAerolineasArgentinas*10/100;
	debito2 = precioLatam-precioLatam*10/100;
	credito1 = precioAerolineasArgentinas+precioAerolineasArgentinas*15/100;
	credito2 = precioLatam+precioLatam*15/100;
	bitcoin1 = precioAerolineasArgentinas/valorBitcoin;
	bitcoin2 = precioLatam/valorBitcoin;
	unitario1 = precioAerolineasArgentinas/kilometros;
	unitario2 = precioLatam/kilometros;
	diferencia = precioAerolineasArgentinas-precioLatam;

	printf("\nPrecio Aerolineas Argentinas: $ ");
	printf("\na) Precio con tarjeta de débito: $%.2f", debito1);
	printf("\nb) Precio con tarjeta de crédito: $%.2f", credito1);
	printf("\nc) Precio pagando con bitcoin: %f BTC", bitcoin1);
	printf("\nd) Precio unitario: $%.2f", unitario1);
	printf("\n");
	printf("\nPrecio Latam: $159339");
	printf("\na) Precio con tarjeta de débito: $%.2f", debito2);
	printf("\nb) Precio con tarjeta de crédito: $%.2f", credito2);
	printf("\nc) Precio pagando con bitcoin: %f BTC", bitcoin2);
	printf("\nd) Precio unitario: $%.2f", unitario2);
	printf("\n");
	printf("\nLa diferencia de precio es: $%.2f \n", diferencia);
	printf("\n");
 }

void cargaForzada ()
{
	int kilometros = 7090;
	float precioAerolineasArgentinas = 162965;
	float precioLatam = 159339;
	float debito1;
	float debito2;
	float credito1;
	float credito2;
	float valorBitcoin = 4606954.55;
	float bitcoin1;
	float bitcoin2;
	float unitario1;
	float unitario2;
	float diferencia;

	debito1 = precioAerolineasArgentinas-precioAerolineasArgentinas*10/100;
	debito2 = precioLatam-precioLatam*10/100;
	credito1 = precioAerolineasArgentinas+precioAerolineasArgentinas*15/100;
	credito2 = precioLatam+precioLatam*15/100;
	bitcoin1 = precioAerolineasArgentinas/valorBitcoin;
	bitcoin2 = precioLatam/valorBitcoin;
	unitario1 = precioAerolineasArgentinas/kilometros;
	unitario2 = precioLatam/kilometros;
	diferencia = precioAerolineasArgentinas-precioLatam;

	printf("\nPrecio Aerolineas Argentinas: $162965");
	printf("\na) Precio con tarjeta de débito: $%.2f", debito1);
	printf("\nb) Precio con tarjeta de crédito: $%.2f", credito1);
	printf("\nc) Precio pagando con bitcoin: %f BTC", bitcoin1);
	printf("\nd) Precio unitario: $%.2f", unitario1);
	printf("\n");
	printf("\nPrecio Latam: $159339");
	printf("\na) Precio con tarjeta de débito: $%.2f", debito2);
	printf("\nb) Precio con tarjeta de crédito: $%.2f", credito2);
	printf("\nc) Precio pagando con bitcoin: %f BTC", bitcoin2);
	printf("\nd) Precio unitario: $%.2f", unitario2);
	printf("\n");
	printf("\nLa diferencia de precio es: $%.2f \n", diferencia);
	printf("\n");
}

