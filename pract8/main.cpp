#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	HINSTANCE load;
	load = LoadLibrary(L"DynamicLib.dll");
	typedef int (*found) (string, string);
	found Found;

	Found = (found)GetProcAddress(load, "Found");

	string mainstr;
	string substr;
	cout << "������� ������: ";
	cin >> mainstr;
	cout << "������� ��� � ��� ������: ";
	cin >> substr;
	cout << "�������� �� ������ " << mainstr << " ������� " << substr << " ?" << endl;

	bool check = Found(mainstr, substr);

	if (check) {
		cout << "��!!!!" << endl;
	}
	else {
		cout << "������!!!!" << endl;
	}
	FreeLibrary(load);
}