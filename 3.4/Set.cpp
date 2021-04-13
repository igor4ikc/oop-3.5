#include "Set.h"

Set::Set(const Set& a)
	:Array(a)
{}

Set& Set::operator = (const Set& a)
{
	Array::operator= (a);
	return *this;
}

bool operator <=(const char i, const Set& a)
{
	return (a[i]);
}
Set& Set::operator +=(char q)
{
	m[q] = true;
	return *this;
}
Set& Set::operator -=(const char q)
{
	m[q] = false;
	return *this;
}

Set operator + (const Set& a, const char i)
{
	Set tmp(a);
	tmp.m[i] = true;
	return tmp;
}
Set operator - (const Set& a, const char i)
{
	Set tmp(a);
	tmp.m[i] = false;
	return tmp;
}
Set operator +(const Set& a, const Set& b)
{
	Set tmp;
	for (int i = 0; i < a.size; i++)
		tmp.m[i] = a.m[i] || b.m[i];
	return tmp;
}
Set operator *(const Set& a, const Set& b)
{
	Set tmp;
	for (int i = 0; i < a.size; i++)
		tmp.m[i] = a.m[i] && b.m[i];
	return tmp;
}
Set operator -(const Set& a, const Set& b)
{
	Set tmp;
	for (int i = 0; i < a.size; i++)
		if (a.m[i])
			tmp.m[i] = a.m[i] - b.m[i];
	return tmp;
}

int Set::kilkist()
{
	int k = 0;
	for (int i = 0; i < size; i++)
	{
		if (m[i])
			k++;
	}
	return k;
}

bool operator <=(const Set& a, const Set& b)
{
	bool tmp = 1;
	for (int i = 0; i < a.size; i++)
	{
		if (a.m[i])
			tmp = tmp && b.m[i];
	}
	return tmp;
}