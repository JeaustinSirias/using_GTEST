#include "operaciones.h"
#include <iostream>
using namespace std;

int suma(int a, int b)
{
	return a + b;
}

int resta(int a, int b)
{
	return a - b;
}

int mult(int a, int b)
{
	return a * b;
}

float divide(int a, int b)
{
	return a / b;
}

void menu(int num1, int num2)
{
	cout<<"Introduzca el primer numero: ";
	cin>>num1;

	cout<<"Introduzca el segundo numero: ";
	cin>>num2;
}