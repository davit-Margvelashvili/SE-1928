#include <iostream>
#include <string>

using namespace std;


struct Student
{
	string firstName;
	string lastName;
	int age;
	float score;
	string privateNumber;

	void Talk()
	{
		cout << "I am " << firstName << " " << lastName
			 << age << " years old" << " and I have " << score << " points " << endl;
	}
};



void PrintStudents(string firstNames[], string lastNames[], int ages[], float scores[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << firstNames[i] << " " << lastNames[i] 
			<< " is " << ages[i] << " years old" << " and has "<< scores[i] << " points " <<  endl;
	}
}

void PrintStudents(Student students[], int length)
{
	for (int i = 0; i < length; i++)
	{
		students[i].Talk();
	}
}

int findIndex(string array[], string value, int length)
{
	for (int i = 0; i < length; i++)
	{
		if (array[i] == value)
		{
			return i;
		}
	}
	return -1;
}

Student FindStudent(Student students[], string privateNumber, int length)
{
	for (int i = 0; i < length; i++)
	{
		if (students[i].privateNumber == privateNumber)
		{
			return students[i];
		}
	}
	return Student();
}

Student CreateStudent()
{
	Student student;
	cout << "Enter first name: ";
	cin >> student.firstName;

	cout << "Enter last name: ";
	cin >> student.lastName;

	cout << "Enter private number: ";
	cin >> student.privateNumber;

	cout << "Enter age: ";
	cin >> student.age;

	cout << "Enter score: ";
	cin >> student.score;

	return student;
}


int main()
{
	string firstNames[3];
	string lastNames[3];
	int ages[3];
	float scores[3];
	string privateNumbers[3];

	firstNames[0] = "Davit";
	lastNames[0] = "Margvelashvili";
	ages[0] = 25;
	scores[0] = 17.5;
	privateNumbers[0] = "01008052245";

	firstNames[1] = "Amiko";
	lastNames[1] = "Tandiashvili";
	ages[1] = 17;
	scores[1] = 20.22;
	privateNumbers[1] = "01001020305";

	firstNames[2] = "Giorgi";
	lastNames[2] = "Gvencadze";
	ages[2] = 29;
	scores[2] = 27.78;
	privateNumbers[2] = "01001025252";

	Student students[3];

	students[0].firstName = "Davit";
	students[0].lastName = "Margvelashvili";
	students[0].age = 25;
	students[0].score = 17.5;
	students[0].privateNumber = "01008052245";

	students[1].firstName = "Amiko";
	students[1].lastName = "Tandiashvili";
	students[1].age = 17;
	students[1].score = 20.22;
	students[1].privateNumber = "01001020305";

	students[2].firstName = "Giorgi";
	students[2].lastName = "Gvencadze";
	students[2].age = 29;
	students[2].score = 27.78;
	students[2].privateNumber = "01001025252";

	PrintStudents(firstNames, lastNames, ages, scores, 3);
	PrintStudents(students, 3);

	int index = findIndex(privateNumbers, "01001020305", 3);
	cout << firstNames[index] << endl;
	cout << lastNames[index] << endl;
	cout << ages[index] << endl;


	Student stud = FindStudent(students, "01001020305", 3);
	stud.Talk();
	//cout << stud.firstName << endl;
	//cout << stud.lastName << endl;
	//cout << stud.age<< endl;

	Student newStudent = CreateStudent();
	newStudent.Talk();

	/*
		შექმენით პროდუქტის სტრუქტურა რომელსაც ექნება შემდეგი მახასიათებლები:
			1. დასახელება
			2. აღწერა
			3. ერთეულის ფასი
			4. რაოდენობა
		
		და ფუქნცია რომელიც გამოთვლის ამ პროდუქტის ღირებულებას (ფასი * რაოდენობაზე).
	
	*/




	return 0;
}