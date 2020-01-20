#include <iostream>

using namespace std;




int RandBetween(int min, int max)
{
	return rand() % (max - min) + min;
}

void FillArray(int array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		array[i] = rand() % 100;
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

void CopyArray(int source[], int destionation[], int length)
{
	for (int i = 0; i < length; i++)
	{
		destionation[i] = source[i];
	}
}


int main()
{
	int numbers1[10];
	int numbers2[20];
	int numbers3[15];
	int numbers4[22];

	FillArray(numbers1, 10);
	PrintArray(numbers1, 10);

	FillArray(numbers2, 20);
	FillArray(numbers3, 15);
	FillArray(numbers4, 22);

	CopyArray(numbers4, numbers1, 10);
	PrintArray(numbers1, 10);
	PrintArray(numbers2, 20);
	PrintArray(numbers3, 15);
	CopyArray(numbers2, numbers3, 15);
	PrintArray(numbers3, 15);
	PrintArray(numbers4, 22);




	return 0;
}


