/*
 * utn.c
 *
 *  Created on: 11 abr. 2022
 *      Author: W7
 */
#include <stddef.h>
#include <stdio.h>

int utn_getCaracter (char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos)
{
	int retorno = -1;
	char areaDeIntercambio;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do{
			printf("%s",mensaje);
			scanf("%c",&areaDeIntercambio);
			if(areaDeIntercambio >= minimo && areaDeIntercambio <= maximo)
			{
				*pResultado = areaDeIntercambio;
				retorno = 0;
			}
			else
			{
				printf("%s", mensajeError);
				reintentos--;
			}
		}while(reintentos >= 0);
	}
	return retorno;
}

int utn_getNumero (int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int areaDeIntercambio;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do{
			printf("%s",mensaje);
			scanf("%d",&areaDeIntercambio);
			if(areaDeIntercambio >= minimo && areaDeIntercambio <= maximo)
			{
				*pResultado = areaDeIntercambio;
				retorno = 0;
			}
			else
			{
				printf("%s", mensajeError);
				reintentos--;
			}
		}while(reintentos >= 0);
	}
	return retorno;
}
