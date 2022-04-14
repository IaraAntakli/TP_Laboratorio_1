#include <stdio.h>
#include <stddef.h>
/**
 * @param opcion: variable
 * printf = opciones del menu
 * scanf = guarda opciones
 * if = valida que la opcion sea del 1 al 6.
 * @return opcion
 */
int mostrarMenu (int opcion)
{
	printf("              *** MENU ***");
	printf("\n        Elija una opcion del 1 al 6:\n");
	printf("\n1)Ingresar kilometros. \n2)Ingresar precio de vuelos (Latam/Aerolineas Argentinas). \n3)Calcular todos los costos. \n4)Informar  Resultados. \n5)Carga forzada de datos. \n6)Salir. \n" );
	scanf("%d", &opcion);
	if(opcion <=0 || opcion >= 7)
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
 * if: valida si el dato es mayor a 0
 * @return dato
 */
int ingresoDeDatos (char*mensaje, int dato)
{
	printf("%s",mensaje);
	fflush(stdin);
	scanf("%d",&dato);
	if(dato <= 0)
	{
		printf("Error, ingrese cantidad mayor a 0. \n");
		printf("%s",mensaje);
		fflush(stdin);
		scanf("%d",&dato);
	}
	return dato;
}
/**
 * @param precio de aerolinea
 * @param descuento porcentaje que se descuenta del precio
 * @return el total
 */
float descuentos (float precio, int descuento)
{
	float total;
	descuento = precio*descuento/100;
	total = precio - descuento;
	return total;
}
/**
 * @param precio de aerolinea
 * @param interes: porcentaje que se agrega al precio
 * @return el total
 */
float interes (float precio, int interes)
{
	float total;
	interes = precio*interes/100;
	total = precio + interes;
	return total;
}
/**
 * @param precio de aerolinea
 * @param valor de bitcoin por el que se divide el precio
 * @return total
 */
float vueloBitcoin (float precio, float valor)
{
	float total;
	total = precio / valor;
	return total;

}
/**
 * @param precio de aerolinea
 * @param kilometros del viaje por el que se divide el precio
 * @return total
 */
float unitarioKm (float precio, int kilometros)
{
	float total;
	total = precio / kilometros;
	return total;
}
/**
 * @param precioUno (precio de aerolinea)
 * @param precioDos(segundo precio de aerolinea) que se resta al primero
 * @return total
 */
float diferenciaPrecios (float precioUno, float precioDos)
{
	float total;
	total = precioUno - precioDos;
	return total;
}
/**
 * int kilometros: cantidad de kmt
 * float precio: uno es valor de Latam y otro de Aerolineas Argentinas
 * debito 1 y 2: descuentos que se hacen por pago con tarjeta de debito
 * credito 1 y 2: intereses que se suman por pago con tarjeta de credito
 * valorBitoin: valor de 1BTC en pesos
 * bitcoin 1 y 2: costo de vuelo dividido valor de bitcoin
 * unitario 1 y 2: cuanto vale cada kilometrto segun los costos de vuelo
 * diferencia: diferencia de precios entre aerolineas
 */
void cargaForzada ()
{
	int kilometros = 7090;
	float precioAerolineasArgentinas = 162965;
	float precioLatam = 159339;
	float debito1;
	float debito2;
	float credito1;
	float credito2;
	float valorBitcoin = 4663271.15;
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

