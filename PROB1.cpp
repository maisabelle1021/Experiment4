#include <iostream>
#include <conio.h>

using namespace std;

int addition (int a, int b)
{
	int C;
	C=a+b;
	return C;
}

int subtraction (int a, int b)
{
	int C;
	C=a-b;
	return C;
}

int multiplication (int a, int b)
{
	int C;
	C=a*b;
	return C;
}

int division (int a, int b)
{
	int C;
	C=a/b;
	return C;
}

int main ()
{
	int a,b,z, opt;
	char end = false;
	char cont;
	
	while (!end)
	{
		cout << "MENU: " << endl;
		cout << "1. Add " << endl;
		cout << "2. Subtract " << endl;
		cout << "3. Multiply " << endl;
		cout << "4. Divide " << endl;
		cout << "5. Modulus" << endl;
		cout << endl;
		cout << "Enter your choice: "; cin >> opt;
		
		switch (opt)
		{
			case 1:
				cout << "Enter your two numbers: "; cin >> a >> b;
				z = addition(a,b);
				cout << "Result: " << z << endl;
				break;
			case 2:
				cout << "Enter your two numbers: "; cin >> a >> b;
				z = subtraction(a,b);
				cout << "Result: " << z << endl;
				break;
			case 3:
				cout << "Enter your two numbers: "; cin >> a >> b;
				z = multiplication(a,b);
				cout << "Result: " << z << endl;
				break;
			case 4:
				cout << "Enter your two numbers: "; cin >> a >> b;
				z = division(a,b);
				cout << "Result: " << z << endl;
				break;
			case 5:
				cout << "Enter your two numbers: "; cin >> a >> b;
				z = a%b;
				cout << "Result: " << z << endl;
				break;
		}
		
		cout << endl;
		cout << "Continue? "; cin >> cont;
		
		switch (cont)
		{
			case 'Y':
			case 'y':
				end = false;
				cout << endl << endl;
				continue;
			case 'N':
			case 'n':
				end = true;
				break;
		}
		
		return 0;
	}
		
}
