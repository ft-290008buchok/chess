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
	rook el(b);
	for (int i = 0; i < 15; i++) {
		cout << el.g_moves[i].x << " " << el.g_moves[i].y << endl;
	 }
	return 0;
}