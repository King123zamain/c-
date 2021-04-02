#pragma once
#include<iostream>
#include<math.h>
using namespace std;

#ifndef _QUADRATIC_H
#define _QUADRATIC_H

class Quadratic
{
private:
	double SecondOrderCoeff;
	double FirstOrderCoeff;
	double ConstantCoeff;
	double CalcDeterminant();
public:
	Quadratic(); //first constructor
	Quadratic(double FirstOrderCoeff1, double secondOrderCoeff2, double constantCoeff3); //second constructor
	void SetCoefficient(double a,double b,double c);
	void GetCoefficient();
	void QuadraticRoots();
	void WriteRoots(double x1,double x2);
	Quadratic operator + (Quadratic N);
};

#endif;
