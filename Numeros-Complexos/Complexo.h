#pragma once
#include <math.h>
#include <iostream>

#define PI 3.14159265
using namespace std;

template <class T>
class Complexo
{
private:
	T real, imag;

	T getReal()
	{
		return real;
	}
	T getImag()
	{
		return imag;
	}

	T getModulo()
	{
		return sqrt(pow(real, 2) + pow(imag, 2));
	}

	T getAngulo()
	{
		return atan(imag / real) * (180 / PI);
	}
public:
	
	Complexo(T real, T imag)
	{
		this->real = real;
		this->imag = imag;
	}

	Complexo operator+(Complexo& c)
	{
		return Complexo(this->real + c.real, this->imag + c.imag);
	}

	Complexo operator-(Complexo& c)
	{
		return Complexo(this->real - c.real, this->imag - c.imag);
	}

	void imprimirFormaCartesiana()
	{
		cout << real << " + " << imag << "j" << endl;
	}

	void imprimirFormaPolar()
	{
		cout << getModulo() << "|" << getAngulo() << "°" << endl;
	}
};

