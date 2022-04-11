/*
 * utn.h
 *
 *  Created on: 11 abr. 2022
 *      Author: W7
 */

#ifndef UTN_H_
#define UTN_H_

int utn_getCaracter (char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos);
int utn_getNumero (int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);

#endif /* UTN_H_ */
