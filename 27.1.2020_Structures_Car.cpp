#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct Car
{
	int topSpeed;
	int fuel = 60;
	int speed = 0;
	bool isOn = false;

	void Start()
	{
		isOn = true;
	}

	void Stop()
	{
		isOn = false;
	}

	void Accelerate()
	{
		if (!isOn)
			return;

		if (fuel != 0)
		{
			speed += 5;
			fuel--;

			if (speed > topSpeed)
			{
				speed = topSpeed;
			}
		}
		else
		{
			speed = 0;
			Stop();
		}

	}

	void Brake()
	{
		speed -= 2;
		if (speed < 0)
		{
			speed = 0;
		}
	}

	void Info()
	{
		cout << "Speed: " << speed << " km --- Fuel: " << fuel << " liter" << endl;
	}
};

void Sort(int numbers[], int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (numbers[j] < numbers[i]) // გადავანაცვლოთ ამ ორი უჯრის მნიშნველობა
			{
				// ამ მოქმედებას ეძახიან swap (გადანაცვლება)
				int temp = numbers[j];
				numbers[j] = numbers[i];
				numbers[i] = temp;
			}
		}
	}
}

void PrintArray(int array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void FillArray(int array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		array[i] = rand() % 100;
	}

}

struct Employee
{
	string name;
	int age;
	float salary;
};


void SortByName(Employee employees[], int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (employees[j].name < employees[i].name) // გადავანაცვლოთ ამ ორი უჯრის მნიშნველობა
			{
				// ამ მოქმედებას ეძახიან swap (გადანაცვლება)
				Employee temp = employees[j];
				employees[j] = employees[i];
				employees[i] = temp;
			}
		}
	}
}

void SortByAge(Employee employees[], int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (employees[j].age < employees[i].age) // გადავანაცვლოთ ამ ორი უჯრის მნიშნველობა
			{
				// ამ მოქმედებას ეძახიან swap (გადანაცვლება)
				Employee temp = employees[j];
				employees[j] = employees[i];
				employees[i] = temp;
			}
		}
	}
}

void SortBySalary(Employee employees[], int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (employees[j].salary < employees[i].salary) // გადავანაცვლოთ ამ ორი უჯრის მნიშნველობა
			{
				// ამ მოქმედებას ეძახიან swap (გადანაცვლება)
				Employee temp = employees[j];
				employees[j] = employees[i];
				employees[i] = temp;
			}
		}
	}
}

void PrintEmployees(Employee array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << array[i].name << " is " << array[i].age << " years old " 
			<< " and has "<< array[i].salary << " dollars" << endl;
	}
	cout << endl;
}



int main()
{
	/*Car toyota;
	toyota.topSpeed = 220;
	Car bmw;
	bmw.topSpeed = 300;

	char control;

	while (true)
	{
		control = _getch();

		if (control == 'w')
		{
			toyota.Accelerate();
			toyota.Info();
		}
		else if (control == 's')
		{
			toyota.Brake();
			toyota.Info();
		}
		else if (control == 'e')
		{
			cout << "Engine Started!!!" << endl;
			toyota.Start();
		}

	}*/


	/*
		აღწერეთ მანქანის სტრუქტურა რომელსაც ექნება:
		 1. სიჩქარის მაჩვენებელი --- რაღაც რიცხვია
		 2. საწვავის მოცულობა --- ესეც რაღაც რიცხვია

		ასევე უნდა ქონდეს ფუნქციები:
			1. სიჩქარის მომატების ფუქნცია
			2. სიჩქარის შემცირების ფუქნცია

		სიჩქარის მომატების დროს უნდა იზრდებიდეს მანქანის სიჩქარის მაჩვენებელი
		და მცირდებოდეს საწვავის მოცულობა.

	*/

	const int length = 10;
	int numbers[length];

	FillArray(numbers, length);
	PrintArray(numbers, length);

	Sort(numbers, length);
	PrintArray(numbers, length);

	Employee employees[3];

	employees[0].name = "Giorgi";
	employees[0].age = 27;
	employees[0].salary = 15000;

	employees[1].name = "Levani";
	employees[1].age = 25;
	employees[1].salary = 22000;

	employees[2].name = "Mariami";
	employees[2].age = 33;
	employees[2].salary = 17000;

	SortByAge(employees, 3);
	PrintEmployees(employees, 3);

	SortByName(employees, 3);
	PrintEmployees(employees, 3);
	
	SortBySalary(employees, 3);
	PrintEmployees(employees, 3);


	return 0;
}