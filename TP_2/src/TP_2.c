/*
 Una aerol�nea requiere un sistema para administrar los pasajeros de cada vuelo. Se sabe que
no puede tener m�s de 2000 pasajeros.
Datos:

El sistema deber� tener el siguiente men� de opciones:
1. ALTAS: Se debe permitir ingresar un pasajero calculando autom�ticamente el
n�mero de Id. El resto de los campos se le pedir� al usuario.
2. MODIFICAR: Se ingresar� el N�mero de Id, permitiendo modificar: o Nombre o Apellido
o Precio o Tipo de pasajero o C�digo de vuelo
3. BAJA: Se ingresar� el N�mero de Id y se eliminar� el empleado del sistema.
4. INFORMAR:
1. Listado de los pasajeros ordenados alfab�ticamente por Apellido y Tipo de pasajero.
2. Total y promedio de los precios de los pasajes, y cu�ntos pasajeros superan el precio
promedio.
3. Listado de los pasajeros por C�digo de vuelo y estados de vuelos �ACTIVO�
1-NOTA: Se deber� realizar el men� de opciones y las validaciones a trav�s de funciones.
Tener en cuenta que no se podr� ingresar a los casos 2, 3 y 4; sin antes haber realizado la
carga de alg�n pasajero.
2-NOTA: Es deseable generar una segunda entidad y utilizarla en el programa.
Para la realizaci�n de este programa, se utilizar� una biblioteca llamada �ArrayPassenger� que
facilitar� el manejo de la lista de pasajeros y su modificaci�n. En la secci�n siguiente se
detallan las funciones que esta biblioteca debe tener.

2 Biblioteca �ArrayPassenger�
Agrupa funciones que permiten trabajar con los datos almacenados en la estructura
Passenger, la cual representa los datos de un empleado de la empresa.
struct
{
int id;
char name[51];
char lastName[51];
float price;
char flycode[10];
int typePassenger;
int isEmpty;
}typedef Passenger;
2.1 Funci�n initPassengers
Para indicar que todas las posiciones del array est�n vac�as, esta funci�n pone la bandera
(isEmpty) en TRUE en todas las posiciones del array.
/** \brief To indicate that all position in the array are empty,
* this function put the flag (isEmpty) in TRUE in all
* position of the array
* \param list Passenger* Pointer to array of passenger
* \param len int Array length
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*

int initPassengers(Passenger* list, int len)
{
return 0;
}
Ejemplo uso:
r = initPassengers(arrayPassengers, ELEMENTS);
2.2 Funci�n addPassengers
Agrega en un array de pasajeros existente los valores recibidos como par�metro en la primer
posici�n libre.
/** \brief add in a existing list of passengers the values received as parameters
* in the first empty position
* \param list passenger*
* \param len int
* \param id int
* \param name[] char
* \param lastName[] char
* \param price float
* \param typePassenger int
* \param flycode[] char
* \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok

2 Biblioteca �ArrayPassenger�
Agrupa funciones que permiten trabajar con los datos almacenados en la estructura
Passenger, la cual representa los datos de un empleado de la empresa.
struct
{
int id;
char name[51];
char lastName[51];
float price;
char flycode[10];
int typePassenger;
int isEmpty;
}typedef Passenger;
2.1 Funci�n initPassengers
Para indicar que todas las posiciones del array est�n vac�as, esta funci�n pone la bandera
(isEmpty) en TRUE en todas las posiciones del array.
/** \brief To indicate that all position in the array are empty,
* this function put the flag (isEmpty) in TRUE in all
* position of the array
* \param list Passenger* Pointer to array of passenger
* \param len int Array length
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*
int initPassengers(Passenger* list, int len)
{
return 0;
}
Ejemplo uso:
r = initPassengers(arrayPassengers, ELEMENTS);
2.2 Funci�n addPassengers
Agrega en un array de pasajeros existente los valores recibidos como par�metro en la primer
posici�n libre.
/** \brief add in a existing list of passengers the values received as parameters
* in the first empty position
* \param list passenger*
* \param len int
* \param id int
* \param name[] char
* \param lastName[] char
* \param price float
* \param typePassenger int
* \param flycode[] char
* \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok

2 Biblioteca �ArrayPassenger�
Agrupa funciones que permiten trabajar con los datos almacenados en la estructura
Passenger, la cual representa los datos de un empleado de la empresa.
struct
{
int id;
char name[51];
char lastName[51];
float price;
char flycode[10];
int typePassenger;
int isEmpty;
}typedef Passenger;
2.1 Funci�n initPassengers
Para indicar que todas las posiciones del array est�n vac�as, esta funci�n pone la bandera
(isEmpty) en TRUE en todas las posiciones del array.
/** \brief To indicate that all position in the array are empty,
* this function put the flag (isEmpty) in TRUE in all
* position of the array
* \param list Passenger* Pointer to array of passenger
* \param len int Array length
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*

int initPassengers(Passenger* list, int len)
{
return 0;
}
Ejemplo uso:
r = initPassengers(arrayPassengers, ELEMENTS);
2.2 Funci�n addPassengers
Agrega en un array de pasajeros existente los valores recibidos como par�metro en la primer
posici�n libre.
/** \brief add in a existing list of passengers the values received as parameters
* in the first empty position
* \param list passenger*
* \param len int
* \param id int
* \param name[] char
* \param lastName[] char
* \param price float
* \param typePassenger int
* \param flycode[] char
* \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok

2 Biblioteca �ArrayPassenger�
Agrupa funciones que permiten trabajar con los datos almacenados en la estructura
Passenger, la cual representa los datos de un empleado de la empresa.
struct
{
int id;
char name[51];
char lastName[51];
float price;
char flycode[10];
int typePassenger;
int isEmpty;
}typedef Passenger;
2.1 Funci�n initPassengers
Para indicar que todas las posiciones del array est�n vac�as, esta funci�n pone la bandera
(isEmpty) en TRUE en todas las posiciones del array.
/** \brief To indicate that all position in the array are empty,
* this function put the flag (isEmpty) in TRUE in all
* position of the array
* \param list Passenger* Pointer to array of passenger
* \param len int Array length
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*

int initPassengers(Passenger* list, int len)
{
return 0;
}
Ejemplo uso:
r = initPassengers(arrayPassengers, ELEMENTS);
2.2 Funci�n addPassengers
Agrega en un array de pasajeros existente los valores recibidos como par�metro en la primer
posici�n libre.
/** \brief add in a existing list of passengers the values received as parameters
* in the first empty position
* \param list passenger*
* \param len int
* \param id int
* \param name[] char
* \param lastName[] char
* \param price float
* \param typePassenger int
* \param flycode[] char
* \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

