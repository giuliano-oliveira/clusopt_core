#ifndef LLYODPLUSPLUS_H
#define LLYODPLUSPLUS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Point.h"
#include "mt19937ar.h"
#include "kMeansUtilityFunctions.h"

#define TRUE 1
#define FALSE 0

/*
Determines when Lloyd terminates (should be between 0 and 1)
*/
#define THRESHOLD 1.000

/**
kMeans++ algorithm for n points of dimension d with k centres
**/
struct point * lloydPlusPlus(int k,int n,int d,struct point points[], double * resultCost);


#endif
