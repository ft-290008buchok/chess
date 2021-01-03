#include <iostream>
#include "obgects.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int k, l, m, n;
	cout << "Введите координату поля (k, l) в формате x y: ";
	cin >> k >> l;
	coord a(k, l);
	cout << "Введите координату поля (m, n) в формате x y: ";
	cin >> m >> n;
	coord b(m, n);
	
	field f1(a), f2(b);
	if (f1.color == f2.color)
		cout << "Поля (k, l) и (m, n) являются полями одного цвета\n";
	else
		cout << "Поля (k, l) и (m, n) не являются полями одного цвета\n";

	return 0;
}