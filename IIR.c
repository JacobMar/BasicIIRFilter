/*
 * IIR.c
 *
 *  Created on: Sep 15, 2018
 *      Author: Jacob
 */
#include "IIR.h"


void IIR(double new_value, double *result)
{
	*result = (A*result + B*new_value);
}
