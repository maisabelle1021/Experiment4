#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int num[50], i, j , temp, size;
	
	cout << "Selection sorting..." << endl;
	cout << "Enter array size: "; cin >> size;
	cout << "Enter the 5 elements: \n";
	
	for (i=0; i<size; i++)
	{
		cin >> num[i];
	}
	
	cout << endl;
	cout << "Your data: ";
	for (i=0; i<size; i++)
	{
		cout << num[i] << " ";
	}
	
	
	for (i=0; i<size; i++)
	{
		for (j = i+1; j<size; j++)
		{
			if (num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	
	cout << endl << endl;
	cout << "After using selection sort..." << endl;
	cout << endl;
	
	cout << "Sorted data: ";
	
	for (i=0; i<size; i++)
	{
	 cout << num[i] << " ";
	}
	
	getch();
	return 0;
}
