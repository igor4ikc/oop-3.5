#include "Array.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void Array::Create(int n)
{
	m = new bool[size];

	for (int i = 0; i < size; i++)
	{
		m[i] = 0;
	}
}
Array::Array()
	:size(0)
{
	Create(size);
}
Array::Array(int n)
	: size(n)
{
	Create(size);
}

Array::Array(const Array& a)
	: size(a.size)
{
	m = new bool[size];

	for (int i = 0; i < size; i++)
	{
		m[i] = a.m[i];
	}
}

Array::~Array()
{
	delete[]m;
}


Array& Array::operator = (const Array& a)
{
	if (&a == this) return *this;

	delete[]m;
	size = a.size;

	m = new bool[size];

	for (int i = 0; i < size; i++)
	{
		m[i] = a.m[i];
	}

	return*this;
}

bool& Array:: operator [] (const int i)
{
	return m[i];
}

const bool& Array:: operator [] (const int i) const
{
	return m[i];
}

ostream& operator << (ostream& out, const Array& a)
{
	out << string(a);
	return out;
}

Array::operator string() const
{
	stringstream sout;
	for (int i = 0; i < size; i++)
		sout << "Array[ " << i << " ] = " << m[i] << endl;
	//sout << endl;
	return sout.str();
}

istream& operator >> (istream& in, Array& a)
{
	for (int i = 0; i < a.size; i++)
	{
		cout << "Array[ " << i << " ] =  "; in >> a[i];
	}
	cout << endl;
	return in;
}
