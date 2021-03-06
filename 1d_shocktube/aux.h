#ifndef AUX_H
#define AUX_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "input.h"
#include "mesh.h"

typedef struct results{
    double *press;
    double *vel;
    double *rho;
    double *energy;
    double *iEnergy;
    double *Q1;
    double *Q2;
    double *Q3;
    double *E1;
    double *E2;
    double *E3;
    double *E1p;
    double *E2p;
    double *E3p;
    double *E1m;
    double *E2m;
    double *E3m;
    double *dissip1;
    double *dissip2;
    double *dissip3;
    double **A;
}results;

/* AUXILIARY FUNCTIONS AND DEFINITIONS */

void allocSolution(results *);
void freeSolution(results *);
void initSolution(results *);
/*
void jacobian(results *);
*/
void calcPrimitives(results *);
double max(double a, double b);
double min(double a, double b);
double ksiHarten(double a, double eps);
void calcFluxes(results *);
void calcStegerFluxes(results *);
void calcVanLeerFluxes(results *);
void calcLiouFluxes(results *);
void calcRoeFluxes(results *);
void calcHartenFluxes(results *, double lambda);
void calcDissipation(results *, double lambda);
void calcJacobian(double q1, double q2, double q3, results *);

#endif
