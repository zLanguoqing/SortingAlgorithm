#ifndef _SortingAlgorithm_H_
#define _SortingAlgorithm_H_
#include "math.h"
#include "stdio.h"
#include "stdlib.h"
#define MIN (1e-30)
void Rbub(double p[],int n);
void RQuick(double p[],int n);
static void Rsplit(double p[],int n,int *m);
#endif