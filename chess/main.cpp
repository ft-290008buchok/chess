#include <iostream>
#include "obgects.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int k, l, m, n, i;
	cout << "Введите координату поля (k, l) в формате x y: ";
	cin >> k >> l;
	coord a(k, l);
	cout << "Введите координату поля (m, n) в формате x y: ";
	cin >> m >> n;
	coord b(m, n);
	
	//1===========================
	field f1(a), f2(b);
	if (f1.color == f2.color)
		cout << "Поля (k, l) и (m, n) являются полями одного цвета\n";
	else
		cout << "Поля (k, l) и (m, n) не являются полями одного цвета\n";

	//2===========================
	queen q(a);
	bool check = 0;
	for (i = 0; i < 28; i++) {
		if (q.g_moves[i].equal(b))
			check = 1;
	}
	if (check)
		cout << "Ферзь, расположенный на поле (k, l) угрожает полю (m, n)\n";
	else
		cout << "Ферзь, расположенный на поле (k, l) не угрожает полю (m, n)\n";
	
	return 0;
}