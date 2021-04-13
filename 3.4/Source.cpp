#include "Set.h"
#include <iostream>

using namespace std;

int main()
{

	Set a, b, c;
	a += 'A';
	b += 'A';
	b += 'B';
	a = a + 'C';
	b = b + 'D';

	cout << "Element u mnoz : " << operator <=('A', a) << endl;
	cout << "Dodav u mnoz :\n" << a + 'A' << endl;
	cout << "Vidniman u mnoz :\n" << a - 'A' << endl;
	a + 'A';
	c = a + b;
	cout << "Objed mnoz :\n" << c << endl;
	c = a * b;
	cout << "Peret mnoz :\n" << c << endl;
	c = a - b;
	cout << "Rizn  mnoz :\n" << c << endl;
	cout << "Kilkst elem u mnoz : " << a.kilkist() << endl;

	/*cout << "A :\n" << a << endl;
	cout << "B :\n" << b << endl;*/

	return 0;
}