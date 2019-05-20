#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Deque.h"

using namespace std;

//��������� �������
template <typename T>
void objMenu(Deque<T>& ob1)
{
	int menu;
	bool flag = true;
	int size = rand() % 31; //��������� �������� ��� ������� ����
	Deque <T> ob2(size); //�������� ������� ������� ��� �������� � ��������� � ������ ��������

	while (flag) {
		system("cls");
		cout << ob1 << ob2; //����� ���� ����� �� �����
		cout << "1 - �������� �������� ����" << endl;
		cout << "2 - �������� �����" << endl;
		cout << "3 - ��������� ���� �����. �������� <" << endl;
		cout << "4 - ���������� ���������� ��������" << endl;
		cout << "0 - ����� � �������� ����" << endl;
		cout << "�������� ����� ����: ";
		cin >> menu;

		switch (menu) {
		case 1: cin >> ob1; break; //���������� �������� � ���
		case 2: ob1 = ob1 + ob2; break; //�������� �����
		case 3: (ob1 < ob2) ? cout << "������ ��� ������ �������" << endl : cout << "������ ��� �� ������ �������" << endl;  system("pause"); break;
		case 4: ob1 = -ob1; break; //������� �����
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
	int size = rand() % 31; //��������� �������� ��� ������� ����

	//�������� �������� ������ �����
	Deque<int> int_a(size);
	Deque<char> char_a(size);
	Deque<float> float_a(size);
	Deque<double> double_a(size);
	Deque<string> string_a(size);

	while (flag)
	{
		system("cls");
		cout << "1 - ��� ���� int" << endl;
		cout << "2 - ��� ���� char" << endl;
		cout << "3 - ��� ���� float" << endl;
		cout << "4 - ��� ���� double" << endl;
		cout << "5 - ��� ���� string" << endl;
		cout << "0 - �����" << endl;
		cout << "�������� ����� ����: ";
		cin >> menu;

		//�������� � ������� ������� ���������� ����
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