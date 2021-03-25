/*
 * utn_ope.c
 *
 *  Created on: Mar 25, 2021
 *      Author: daniel
 */

#include "utn_ope.h"

float suma(float x, float y, float* pResultado)
{
	*pResultado = x+y;

	return 0;
}

float resta(float x, float y, float* pResultado)
{
	*pResultado = x-y;

	return 0;
}

float multiplicacion(float x, float y, float* pResultado)
{
	*pResultado = x*y;

	return 0;
}

float division(float x, float y, float* pResultado)
{
	*pResultado = x/y;

	return 0;
}

long long factorial(float x, float* pResultado)
{
	int i;

	*pResultado = 1;

	if(x == 0)
	{
		*pResultado = 1;
	}
	else
	{
		for(i = 1; i <= x; i++)
		{
			*pResultado = *pResultado * i;
		}
	}

	return 0;
}
