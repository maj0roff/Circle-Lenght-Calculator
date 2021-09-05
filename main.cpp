#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

#define PI 3.1415926535

double calc_by_radius(double radius)
{
	return (PI * 2) * radius;
}

double calc_by_diametr(double diametr)
{
	return PI * diametr;
}


int main()
{
	int userinput;
	SetConsoleTitleA("Circle Lenght Calculator by maj0r");

	cout << "Circle lenght calculator by maj0r\n";
	cout << "Select :\n";
	cout << "[1] Lenght By Radius\n";
	cout << "[2] Lenght by Diametr\n";
	cout << "[3] Info panel\n";
	cout << "\n";
	cout << "User input : ";
	cin >> userinput; // Getting userinput

	switch (userinput)
	{
	case 2:
		cout << "\n";
		cout << "\n";
		cout << "Write the circle diametr\n";
		cout << "User input : ";

		double diametr;
		cin >> diametr; // Getting userinput

		cout << "Circle radius is " << calc_by_diametr(diametr) << "\n"; // Sending output with answer

		cout << "\n";
		break;
	case 1:
		cout << "\n";
		cout << "\n";
		cout << "Write the circle radius\n";
		cout << "User input : ";

		double radius;
		cin >> radius; // Getting userinput

		cout << "Circle lenght is " << calc_by_radius(radius) << "\n"; // Sending output with answer

		cout << "\n";
		break;
	case 3:
		cout << "\n";
		cout << "\n";
		cout << "Hello this is circle calculator by maj0r\n";
		cout << "Here you can calculate circle lenght and radius\n";
		cout << "And you can write float ints like this : 3.1415\n";
		cout << "\n";
		break;
	default:
		cout << "\n";
		cout << "Invalid input!\n";
		cout << "\n";
		break;
	}

	_getch();

	return 0;
}