#ifndef KMEANSUTILITYFUNCTIONS_H
#define KMEANSUTILITYFUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Point.h"

/**
debug function to print a set of points
**/
void printPoints(int n,struct point * points);

/**
computes the target function for the given pointarray points[] (of size n) with the given array of
centres centres[] (of size k)
**/
double targetFunctionValue(int k,int n,struct point centres[],struct point points[]);

/**
computes the target function for the union of the given pointarrays setA[] (of size n_1) and setB[] (of size n_2) with the given array of centres centres[] (of size k)
**/
double unionTargetFunctionValue(int k,int n_1,int n_2,struct point centres[],struct point setA[], struct point setB[]);

/**
Computes the cost of point p with the given array of centres centres[] (of size k)
**/
double costOfPoint(int k,struct point centres[],struct point p);

/**
Computes the index of the centre nearest to p with the given array of centres centres[] (of size k)
**/
int determineClusterCentreKMeans(int k,struct point p,struct point centres[]);

/**
Computes the cost of point p with centre centre
**/
double costOfPointToCenter(struct point * p,struct point * centre);



#endif
