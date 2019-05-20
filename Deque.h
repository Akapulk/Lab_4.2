#pragma once
#include <iostream>

using namespace std;

//дек реализван на основе массива
template <typename T>
class Deque {
	T *arr; //указатель на массив
	int size; //общий размер дека
	int last; //текущее количество элементов, хранящихся в деке
public:
	Deque() : arr(0), last(0), size(0) {}; //конструктор по умолчанию с полями инициализации
	Deque(int size); //конструктор с параметром
	Deque(Deque<T>& other); //конструктор копирования
	~Deque(); //дестркуктор

	void pushFront(T value); //добавление элемента в начало
	void pushBack(T value); //добавление элемента в конец

	Deque<T>& operator = (const Deque<T>& other); //перегрузка оператора присваивания

	friend ostream& operator << <>(ostream &out, const Deque<T> &ob); //перегрузка оператора вывода
	friend istream& operator >> <>(istream &in, Deque<T> &ob); //перегрузка оператора ввода

	Deque<T> operator + (const Deque<T>& other); //перегрузка бинарного плюса
	Deque<T> operator - (); //перегрузка унарного минуса

	bool operator < (const Deque<T>& other); //перегрузка сравнения <
};

//так как объявление и реализация шаблонов должна лежать в одном файле, подключаем файл с реализацией методовы
#include "Deque.cpp"