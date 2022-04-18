#include "Money.h" 
#include "Payment.h" 
#include <Windows.h> 
#include <iostream> 

using namespace std;

int main()
{
	SetConsoleCP(1251);

	SetConsoleOutputCP(1251);

	Payment z;

	cout << " Payment: " << endl;

	z.Read();
	cin >> z;

	cout << " ========================================================================= " << endl;

	cout << z;

	Money s;

	cout << " ========================================================================= " << endl;

	cout << " Money: " << endl;

	cin >> s;

	cout << " ========================================================================= " << endl;

	cout << s;
	s.Display();

	cout << " \n ";

	s.Сomparison();
}
