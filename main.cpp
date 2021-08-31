#include <iostream>
#include <windows.h>
#include "main.h"

using namespace std;

void calc()
{
	number = (nump * 2) * radius;
}

int main()
{
	
	SetConsoleTitleA("Circle Lenght Calculator by maj0r");

	cout << "Hello, write radius : ";
	cin >> radius;
	calc();
	cout << "Lenght : " << number << "\n";

	system("pause");

	return 0;

}