#include "Money.h" 
#include <iostream> 
#include <cmath> 
#include <stdlib.h> 
#include <string> 
#include <sstream> 

using namespace std;

Money::Money() { }

Money::Money(long a, long b, long c, long d, double e, double f, double g, double h) {
	UAH = a;
	UAH2 = b;
	lungs = c;
	multiplicationn = d;

	kopec = e;
	kopec1 = f;
	lungs1 = g;
	multiplicationn1 = h;
}

Money::Money(const Money& m) {
	*this = m;
}

Money::operator string() const {
	stringstream ss;
	ss << UAH << " " << UAH2 << " " << lungs << " " << multiplicationn << " " << kopec << kopec1 << lungs1 << multiplicationn1 << endl;
	return ss.str();
}

ostream& operator << (ostream& out, const Money& m) {
	out << string(m);
	return out;
}

istream& operator >> (istream& in, Money& m) {
	cout << "UAH : "; in >> m.UAH;
	cout << "UAH2 : "; in >> m.UAH2;
	cout << "Lungs : "; in >> m.lungs;
	cout << "Multiplicationn : "; in >> m.multiplicationn;

	cout << "Kopec : "; in >> m.kopec;
	cout << "Kopec1 : "; in >> m.kopec1;
	cout << "Lungs1 : "; in >> m.lungs1;
	cout << "Multiplicationn1 : "; in >> m.multiplicationn1;

	return in;
}

void Money::Init(long x, long y, long f, long w) {
	UAH = x;
	UAH2 = y;
	lungs = f;
	multiplicationn = w;
}

void Money::Init1(double h, double z, double r, double j) {
	kopec = h;
	kopec1 = z;
	lungs1 = r;
	multiplicationn1 = j;
}



void Money::Read() {
	long x, y, f, w;
	double h, z, r, j;

	cout << " Гривні: " << endl;
	cout << " Гривні перша сума більша = "; cin >> x;
	cout << " Гривні друга сума менша = "; cin >> y;
	cout << " Дробове число гривнів = "; cin >> f;
	cout << " Число для множення гривнів = "; cin >> w;
	cout << " Копійки:" << endl;
	cout << " Копійки перша сума більша = "; cin >> h;
	cout << " Копійки друга сума менша = "; cin >> z;
	cout << " Дробове число копійки = "; cin >> r;
	cout << " Число для множення копійки = "; cin >> j;

	Init(x, y, f, w);
	Init1(h, z, r, j);
}

long Money::addition() {
	return UAH + UAH2;
}

long Money::subtraction() {
	return UAH - UAH2;
}

long Money::divisionofsums() {
	return addition() / subtraction();
}

long Money::lungss() {
	return sqrt(lungs) / divisionofsums();
}

long Money::multiplication() {
	return sqrt(lungs) * multiplicationn;
}

void Money::Display() {
	cout << endl;

	cout << " Додавання гривнів = " << addition() << endl;
	cout << " Віднімання гривнів = " << subtraction() << endl;
	cout << " Ділення сум гривнів = " << divisionofsums() << endl;
	cout << " Ділення сум на дробове число для гривнів = " << lungss() << endl;
	cout << " Mноження на дробове число для гривнів = " << multiplication() << endl;
	cout << " Додавання копійок = " << addition1() << endl;
	cout << " Віднімання копійок = " << subtraction1() << endl;
	cout << " Ділення сум копійок = " << divisionofsums3() << endl;
	cout << " Ділення сум на дробове число для копійок = " << lungss3() << endl;
	cout << " Mноження на дробове число для копійок = " << multiplication3() << endl;
}

double Money::addition1() {
	return (kopec * 0.01) + (kopec1 * 0.01);
}

double Money::subtraction1() {
	return (kopec * 0.01) - (kopec1 * 0.01);
}

double Money::divisionofsums3() {
	return addition1() / subtraction1();
}

double Money::lungss3() {
	return sqrt((lungs1) * 0.01) / divisionofsums3();
}

double Money::multiplication3() {
	return sqrt((lungs1) * 0.01) - (multiplicationn1 * 0.01);
}

void Money::Сomparison() {
	if (multiplication() == multiplication3())
		cout << multiplication() << "  дорівнює  " << multiplication3() << " \n ";

	if (multiplication() > multiplication3())
		cout << multiplication() << "  більше  " << multiplication3() << " \n ";

	if (multiplication() < multiplication3())
		cout << multiplication() << "  менше   " << multiplication3() << " \n ";
}
