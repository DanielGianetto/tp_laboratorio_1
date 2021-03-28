/*
 * utn.h
 *
 *  Created on: Mar 25, 2021
 *      Author: Daniel Gianetto
 */

#ifndef UTN_LIB_H_
#define UTN_LIB_H_

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

float utn_getFloat(float* pNumero, char* pTexto);
int utn_getInt(int* pNum, char* pTexto, char* pError, int minimo, int maximo);
int utn_menu(int* pVariableOpcion, float NumA, float NumB, int changeA, int changeB, int minimo, int maximo);



#endif /* UTN_LIB_H_ */
