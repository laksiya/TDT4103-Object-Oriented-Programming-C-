#pragma once
#include "utilities.h"
double acclY();
double getVelocityY(double theta, double absVelocity);
double getVelocityX(double theta, double absVelocity);
double degToRad(double deg);
void getUserInput(double* theta, double *absVelocity);
void playTargetPractice();