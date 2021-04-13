#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Array
{
protected:
	static const int max = 256;
	bool* m;
	int size;

	void Create(int n);

public:
	Array();
	Array(int n);
	~Array();
	Array(const Array& a);

	Array& operator = (const Array& a);
	bool& operator [] (const int i);
	const bool& operator [] (const int i) const;
	operator string() const;

	friend ostream& operator << (ostream& out, const Array& a);
	friend istream& operator >> (istream& in, Array& a);

};
