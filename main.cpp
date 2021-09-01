#include <iostream>
#include <windows.h>
#include "main.h"

using namespace std;

void calc_by_radius()
{
	number = (nump * 2) * radius;
}

void calc_by_diametr()
{
	number2 = nump * diametr;
}


int main()
{
	//Setup console
	SetConsoleTitleA("Circle Lenght Calculator by maj0r");

	cout << "Circle lenght calculator by maj0r\n";
	cout << "Select :\n";
	cout << "[1] Lenght By Radius\n";
	cout << "[2] Lenght by Diametr\n";
	cout << "[3] Info panel\n";
	cout << "\n";
	cout << "User input :";
	cin >> userinput; // Getting userinput

	if (userinput == 1)
	{
		cout << "\n";
		cout << "\n";
		cout << "Write the circle radius\n";
		cout << "User input : ";

		cin >> radius; // Getting userinput

		calc_by_radius(); // Calling main calculate function
		cout << "Circle lenght is " << number << "\n"; // Sending output with answer

		cout << "\n";
		system("pause");

	}
	else if (userinput == 2)
	{
		cout << "\n";
		cout << "\n";
		cout << "Write the circle diametr\n";
		cout << "User input : ";

		cin >> diametr; // Getting userinput

		calc_by_diametr(); // Calling main calculate function 
		cout << "Circle radius is " << number2 << "\n"; // Sending output with answer

		cout << "\n";
		system("pause");

	}
	else if (userinput == 3)
	{
		cout << "\n";
		cout << "\n";
		cout << "Hello this is circle calculator by maj0r\n";
		cout << "Here you can calculate circle lenght and radius\n";
		cout << "And you can write float ints like this : 3.1415\n";
		cout << "\n";
		system("pause");

	}
	/*else if (userinput == 4)
	{
		cout << "\n";
		cout << "Good bye!\n";
		cout << "See ya later!\n";
		cout << "\n";
		system("pause");
		system("exit");
	}*/
	else
	{
		cout << "\n";
		cout << "Invalid input!\n";
		cout << "\n";
		system("pause");

	}

}
