#pragma once
#include "Array.h"

class Set : public Array
{
public:
	Set() { size = max; Create(size); }
	Set(const Set& a);
	Set& operator = (const Set& a);

	Set& operator +=(char q);
	Set& operator -=(const char q);
	friend Set operator + (const Set& a, const char q);			
	friend Set operator - (const Set& a, const char q);		

	friend bool operator <=(const Set& a, const Set& b);			
	friend bool operator <=(const char q, const Set& a);				
	friend Set operator +(const Set& a, const Set& b);	
	friend Set operator *(const Set& a, const Set& b);	 
	friend Set operator -(const Set& a, const Set& b);	 
	int kilkist();							
};
