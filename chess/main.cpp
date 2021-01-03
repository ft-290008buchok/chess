#include <iostream>
#include "obgects.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int k, l, m, n, i;
	cout << "������� ���������� ���� (k, l) � ������� x y: ";
	cin >> k >> l;
	coord a(k, l);
	cout << "������� ���������� ���� (m, n) � ������� x y: ";
	cin >> m >> n;
	coord b(m, n);
	
	//1===========================
	field f1(a), f2(b);
	if (f1.color == f2.color)
		cout << "���� (k, l) � (m, n) �������� ������ ������ �����\n";
	else
		cout << "���� (k, l) � (m, n) �� �������� ������ ������ �����\n";

	//2===========================
	queen q(a);
	bool check = 0;
	for (i = 0; i < 28; i++) {
		if (q.g_moves[i].equal(b))
			check = 1;
	}
	if (check)
		cout << "�����, ������������� �� ���� (k, l) �������� ���� (m, n)\n";
	else
		cout << "�����, ������������� �� ���� (k, l) �� �������� ���� (m, n)\n";
	
	return 0;
}