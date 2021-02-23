#include <iostream>
#include <ctime>
#include <algorithm> //  swap
using namespace std;

int main()
{
	int c = 0;
	srand(time(NULL));
	setlocale(LC_ALL, "");
	do
	{
		cout << "Работу выполнил Задорко Владимир 282гр\n";
		cout << "Доступные работы: сам.раб № 9, 10, 11, 12\n Напишите цифру чтобы открылась нужная работа: ";
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
		else if (result == 11) // 41, 44
		{
			cout << "Доступны Задачи № 41, 44\nНапишите соответсвующую цифру: ";
			cin >> res_1;
			switch (res_1)
			{
			case 41:
			{
				cout << "\tОбчислити суму елементів матриці, величина яких не перевишує 2,5.\n";
				
				const int raw = 5;
				const int col = 5;
				int j;
				int k = 0;
				int arr[raw][col]{};

				for (int i = 0; i < raw; i++)
				{
					for (j = 0; j < col; j++)
					{
						arr[i][j] = rand() % 10;
						cout << arr[i][j] << "\t";
						if (arr[i][j] < 2.5)
							k++;
					}
					cout << endl; 

				}
				cout << k << " = element's < 2,5\n";

				break;
			}// close case 41
			case 44:
			{
				cout << "Визначити кількість від'ємних елементів матриці\n";
				const int raw = 3;
				const int col = 3;
				int min_v1 = 0;
				int arr[raw][col]{};
				for (int i = 0; i < raw; i++)
				{
					for (int j = 0; j < col; j++)
					{
						arr[i][j] = -5 + rand() % 20;
						cout << arr[i][j] << "\t";
						if (arr[i][j] < 0)
							min_v1++;
					}
					
					cout << endl;
				}
				cout << "количество отрицательных чисел " << min_v1;
			}//case 44
			}// close switch

		} // close else if
		else if (result == 12)
		{
			cout << "Доступны Задачи № 51 \nНапишите соответсвующую цифру: ";
			cin >> res_1;
			switch (res_1)
			{
				case 51:
				{
					cout << "Визначити номери рядків матриці, які мають хоча б один від'ємний елемент\n";
					const int row = 3;
					const int col = 3;
					int m = 0;
					//int k = 0;
					int arr[row][col]{};
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 3; j++)
						{
							arr[i][j] = -4 + rand() % 10;
							cout << arr[i][j] << "\t";
							if (arr[i][j] < 0)
							{
								m = 1;
								
							}
						}
						if (m == 1)
						{
							
							m = 0;
							cout << i;
						}
						cout << endl;
					}
					break;
				}//case 51
			}//switch
		}//else if
		cout << "\nНужно остаться в программе и посмотреть другие работы?\nНажмите: \n\t1. для возвращения в главное меню\n\t2. Для выхода из всей программы!: ";
		cin >> c;
	} while (c == 1);
} 

