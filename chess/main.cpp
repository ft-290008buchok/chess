#include <iostream>
#include "obgects.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int k, l, m, n;
	cout << "������� ���������� ���� (k, l) � ������� x y: ";
	cin >> k >> l;
	coord a(k, l);
	cout << "������� ���������� ���� (m, n) � ������� x y: ";
	cin >> m >> n;
	coord b(m, n);
	
	field f1(a), f2(b);
	if (f1.color == f2.color)
		cout << "���� (k, l) � (m, n) �������� ������ ������ �����\n";
	else
		cout << "���� (k, l) � (m, n) �� �������� ������ ������ �����\n";

	return 0;
}