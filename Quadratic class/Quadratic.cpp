#include "Quadratic.h";
#include <math.h>
#include <iostream>

using namespace std;

Quadratic::Quadratic()
{
	//Setting all coeffiecients to 0
	SecondOrderCoeff = 0;
	FirstOrderCoeff = 0;
	ConstantCoeff = 0;
}

Quadratic::Quadratic(double FirstOrderCoeff1, double secondOrderCoeff2, double constantCoeff3)
{
    
    FirstOrderCoeff= FirstOrderCoeff1;
    SecondOrderCoeff= secondOrderCoeff2;
    ConstantCoeff= constantCoeff3;
    cout << "Enter the value of firstorder coefficient:";
    cin >> FirstOrderCoeff1;
	cout << "Enter the value of secondorder coefficient:";
    cin >> secondOrderCoeff2;
	cout << "Enter the value of constant coefficient:";
    cin >> constantCoeff3;
  


}

void Quadratic::SetCoefficient(double a, double b, double c)
{
    SecondOrderCoeff = b;
    FirstOrderCoeff = a;
    ConstantCoeff = c;

}

void Quadratic::GetCoefficient()
{
    cout << "The firstOrderCoeffient=" << FirstOrderCoeff  << "The SecondOrderCoeffiecient=" << SecondOrderCoeff << "The constant coeffiecient=" << ConstantCoeff << endl << endl << endl;
}

double Quadratic::CalcDeterminant()
{
    double a, b, c, x1, x2, determinant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    determinant = b * b - 4 * a * c;

    if (determinant > 0) {
        x1 = (-b + sqrt(determinant)) / (2 * a);
        x2 = (-b - sqrt(determinant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (determinant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -b / (2 * a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-determinant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
    return determinant;

}

void Quadratic::QuadraticRoots()
{

    CalcDeterminant();
    double x1, x2;
    double b = 20;
    double a = 20;
    double c = 20;

    x1 = -b + sqrt((b * b) - 4 * a * c) / (2 * a);
    x2= -b + sqrt((b * b) - 4 * a * c) / (2 * a);
    cout << x1 << endl;
    cout << x2 << endl;


}



void Quadratic::WriteRoots(double x1,double x2)
{   
    cout << "Root 1:" << x1<< " Root 2:" << x2 << endl;
}

Quadratic Quadratic :: operator + (Quadratic N)
{
    Quadratic result;
    result.FirstOrderCoeff = FirstOrderCoeff + N.FirstOrderCoeff;
    result.SecondOrderCoeff = SecondOrderCoeff + N.SecondOrderCoeff;
    result.ConstantCoeff = ConstantCoeff + N.ConstantCoeff;
    return result;
}