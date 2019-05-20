#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Deque.h"

using namespace std;

//шаблонная функция
template <typename T>
void objMenu(Deque<T>& ob1)
{
	int menu;
	bool flag = true;
	int size = rand() % 31; //рандомное значение для размера дека
	Deque <T> ob2(size); //создание второго объекта для сложения и сравнения с первым объектом

	while (flag) {
		system("cls");
		cout << ob1 << ob2; //вывод двух деков на экран
		cout << "1 - Изменить элементы дека" << endl;
		cout << "2 - Сложение деков" << endl;
		cout << "3 - Сравнение двух деков. Оператор <" << endl;
		cout << "4 - Извлечение последнего элемента" << endl;
		cout << "0 - Выход в основное меню" << endl;
		cout << "Выберете пункт меню: ";
		cin >> menu;

		switch (menu) {
		case 1: cin >> ob1; break; //добавление элемента в дек
		case 2: ob1 = ob1 + ob2; break; //сложение деков
		case 3: (ob1 < ob2) ? cout << "Первый дек меньше второго" << endl : cout << "Первый дек не меньше второго" << endl;  system("pause"); break;
		case 4: ob1 = -ob1; break; //унарный минус
		case 0: flag = false;
		}
	}
}


int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	bool flag = true;
	int menu;
	int size = rand() % 31; //рандомное значение для размера дека

	//создание объектов разных типов
	Deque<int> int_a(size);
	Deque<char> char_a(size);
	Deque<float> float_a(size);
	Deque<double> double_a(size);
	Deque<string> string_a(size);

	while (flag)
	{
		system("cls");
		cout << "1 - Дек типа int" << endl;
		cout << "2 - Дек типа char" << endl;
		cout << "3 - Дек типа float" << endl;
		cout << "4 - Дек типа double" << endl;
		cout << "5 - Дек типа string" << endl;
		cout << "0 - Выход" << endl;
		cout << "Выберете пункт меню: ";
		cin >> menu;

		//передача в функцию объекта выбранного типа
		switch (menu) {
		case 1: objMenu(int_a); break;
		case 2: objMenu(char_a); break;
		case 3: objMenu(float_a); break;
		case 4: objMenu(double_a); break;
		case 5: objMenu(string_a); break;
		case 0: flag = false;
		}
	}
	return 0;
}