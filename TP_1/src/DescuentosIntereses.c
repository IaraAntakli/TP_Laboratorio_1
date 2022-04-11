/*
 * DescuentosIntereses.c
 *
 *  Created on: 8 abr. 2022
 *      Author: W7
 */
#include <stdio.h>
float descuento (float numero, float precio)
{
	float descuento;
	descuento = numero*precio/100;
	return descuento;

}

float interes (float numero, float precio)
{
	float interes;
	interes = numero*precio/100;
	return interes;
}

int descuento2 (int numero, int precio)
{
	int descuento;
	descuento = numero*precio/100;
	return descuento;

}

int interes2 (int numero, int precio)
{
	int interes;
	interes = numero*precio/100;
	return interes;
}

