#include <iostream>
#include <ctime>
#include <algorithm> //  swap
using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");

	cout << "Работу выполнил Задорко Владимир 282гр\n";
	cout << "Доступные работы: сам.раб № 9, 10\n Напишите цифру чтобы открылась нужная работа: ";
	int result = 0, res_1 = 0;
	cin >> result;
	const int size = 10;

	if (result == 9)
	{
		cout << "Доступны Задачи № 13, 16\nНапишите соответсвующую цифру: ";
		cin >> res_1;
		switch (res_1)
		{
		case 13:
		{
			float arr[size]{};
			cout << "\t\tZadorko Volodymyr 282 group\n";
			cout << "\t\t13. Усi члени послiдовностi, починаючи з першого додатнього, зменшити на 0,5\n\n";
			for (int i = 0; i < 10; i++)
			{
				arr[i] = rand() % 20 + 5;
				cout << arr[i] << " random number\n";
				cout << arr[i] - 0.5 << " from random number array - 0.5\n";
			}
			break;
		}
		case 16:
		{
			cout << "\t\tZadorko Volodymyr 282 group\n";
			cout << "\t\t16. Визначити кiлькiсть членiв послiдовностi  , що мають парнi номери i є непарними числами\n\n";
			for (int j = 0; j < size; j++)
			{
				if (j % 2 == 0)
				{
					cout << j << " Парный номер последовательности\n";

					if (j % 2 == 1)
					{
						cout << j << "не парное число\n";
					}
				}
			}
			break;
		}
		} // close switch
	} // close if
	else if (result == 10)
	{
		cout << "Доступны Задачи № 18, 27\nНапишите соответсвующую цифру: ";
		cin >> res_1;
		switch (res_1)
		{
		case 18:
		{
			cout << "\t\tZadorko Volodymyr 282 group\n";
			cout << "\t\tЗаданий одновимiрний масив, що складається з N дiйсних елементiв. \nВизначити значення i номер мiнiмального додатного елемента.\n\n";
			
			const int size = 10;

			int arr[size]{};
			
			bool already_there;
			
			for (int i = 0; i < size;)
			{
				already_there = false;
				int new_random_value = rand() % 20;
				
				for (int j = 0; j < i; j++)
				{
					if (arr[j] == new_random_value)
					{
						already_there = true;
						break;
					}
				}
				
				if (!already_there)
				{
					arr[i] = new_random_value;
					i++;
				}
			}
			for (int i = 0; i < size; i++)
			{
				cout << arr[i] << endl;
			}
			int min_value = arr[0];
			for (int a = 0; a < size; a++)
			{
				if (arr[a] < min_value)
				{
					min_value = arr[a];
				}
			}
			cout << "минимальный элемент массива " << min_value << endl;
			break;
		}
		case 27:
		{
			cout << "\t\tZadorko Volodymyr 282 group\n";
			cout << "Заданi два масива дiйсних значень з N та M елементiв, якi упорядкованi за збiльшенням. \nУтворити упорядкований за збiльшенням масив з N + M елементiв заданих масивiв\n";
			
			const int length = 5;
			int array[length] = { 30, 50, 20, 10, 40 };

			for (int i = 0; i < length; i++)
			{
				cout << array[i] << " Исходные значения массива" << "\n\n";
			}
				
			for (int startIndex = 0; startIndex < length - 1; ++startIndex)
			{					
				int smallestIndex = startIndex;

					
				for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
				{
					if (array[currentIndex] < array[smallestIndex])
					{
						smallestIndex = currentIndex;
					}
				}

				swap(array[startIndex], array[smallestIndex]);
			}

			for (int index = 0; index < length; ++index)
				{
					cout << array[index] << " Результат" << "\n\n";
				}
			break;
		}// close case 27
		}// close switch
	} // close  else if
} 
