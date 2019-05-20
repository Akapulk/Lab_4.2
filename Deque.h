#pragma once
#include <iostream>

using namespace std;

//��� ��������� �� ������ �������
template <typename T>
class Deque {
	T *arr; //��������� �� ������
	int size; //����� ������ ����
	int last; //������� ���������� ���������, ���������� � ����
public:
	Deque() : arr(0), last(0), size(0) {}; //����������� �� ��������� � ������ �������������
	Deque(int size); //����������� � ����������
	Deque(Deque<T>& other); //����������� �����������
	~Deque(); //�����������

	void pushFront(T value); //���������� �������� � ������
	void pushBack(T value); //���������� �������� � �����

	Deque<T>& operator = (const Deque<T>& other); //���������� ��������� ������������

	friend ostream& operator << <>(ostream &out, const Deque<T> &ob); //���������� ��������� ������
	friend istream& operator >> <>(istream &in, Deque<T> &ob); //���������� ��������� �����

	Deque<T> operator + (const Deque<T>& other); //���������� ��������� �����
	Deque<T> operator - (); //���������� �������� ������

	bool operator < (const Deque<T>& other); //���������� ��������� <
};

//��� ��� ���������� � ���������� �������� ������ ������ � ����� �����, ���������� ���� � ����������� ��������
#include "Deque.cpp"