#include <iostream>
#include "obgects.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int k, l, m, n;
	cout << "������� ���������� ������� ���� � ������� x y: ";
	cin >> k >> l;
	coord a(k, l);
	cout << "������� ���������� ������� ���� � ������� x y: ";
	cin >> m >> n;
	coord b(m, n);
	return 0;
}