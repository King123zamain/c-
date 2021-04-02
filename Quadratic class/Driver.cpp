#include "Quadratic.h";
#include<math.h>
#include<iostream>
using namespace std;

int main()
{
	Quadratic QuadRealRepeat,QuadRealDiff(10,20,30),QuadImg;
	cout << "First run:" << endl;
	QuadRealRepeat.SetCoefficient(10,20,30);
	QuadRealRepeat.GetCoefficient();
	QuadRealRepeat.QuadraticRoots();

	cout << "Second run:" << endl;
	QuadRealDiff.SetCoefficient(10, 20, 30);
	QuadRealDiff.GetCoefficient();
	QuadRealDiff.QuadraticRoots();

	
	cout << "Third run:" << endl;
	QuadImg = QuadRealRepeat + QuadRealDiff;
	QuadRealRepeat.QuadraticRoots();

	QuadRealDiff.WriteRoots(20, -20);
	QuadRealRepeat.WriteRoots(20,-20);
	
	

	system("pause");
	return 0;
}