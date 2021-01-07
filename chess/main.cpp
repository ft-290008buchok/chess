#include <iostream>
#include "obgects.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int k, l, m, n, i, j;
	while (true) {
		cout << "Введите координату поля (k, l) в формате x y: ";
		cin >> k >> l;
		if ((k < 1) || (k > 8) || (l < 1) || (l > 8))
			cout << "Вы ввели несуществующую координату\n";
		else
			break;
	}
	coord a(k, l);
	while (true) {
		cout << "Введите координату поля (m, n) в формате x y: ";
		cin >> m >> n;
		if ((m < 1) || (m > 8) || (n < 1) || (n > 8))
			cout << "Вы ввели несуществующую координату\n";
		else
			break;
	}
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
	
	//3===========================
	horse h(a);
	check = 0;
	for (i = 0; i < 9; i++) {
		if (h.g_moves[i].equal(b))
			check = 1;
	}
	if (check)
		cout << "Конь, расположенный на поле (k, l) угрожает полю (m, n)\n";
	else
		cout << "Конь, расположенный на поле (k, l) не угрожает полю (m, n)\n";

	//4==========================
	rook r(a);
	rook r_field(b);
    check = 0;
	for (i = 0; i < 15; i++) {
		if (r.g_moves[i].equal(b))
			check = 1;
	}
	if (check)
		cout << "Попасть ладьёй с поля (k, l) на поле (m, n) можно за один ход\n";
	else {
		cout << "Попасть ладбёй с поля (k, l) на поле (m, n)\n";
		cout << "можно за 2 хода, первый ход можно сделать на\n";
		for (i = 0; i < 15; i++) {
			for (j = 0; j < 15; j++) {
				if (r.g_moves[i].equal(r_field.g_moves[j]))
					cout << r.g_moves[i].x << " " << r.g_moves[i].y << endl;
			}
		}
	}
		
	//5==========================
	queen q_field(b);
	check = 0;
	for (i = 0; i < 28; i++) {
		if (q.g_moves[i].equal(b))
			check = 1;
	}
	if (check)
		cout << "Попасть ферзём с поля (k, l) на поле (m, n) можно за один ход\n";
	else {
		cout << "Попасть ферзём с поля (k, l) на поле (m, n)\n";
		cout << "можно за 2 хода, первый ход можно сделать на\n";
		for (i = 0; i < 28; i++) {
			for (j = 0; j < 28; j++) {
				if ((q.g_moves[i].equal(q_field.g_moves[j])) && (q.g_moves[i].x != 0))
					cout << q.g_moves[i].x << " " << q.g_moves[i].y << endl;
			}
		}
	}

	//6=========================
	elephant el(a);
	elephant el_field(b);
	check = 0;
	for (i = 0; i < 14; i++) {
		if (el.g_moves[i].equal(b))
			check = 1;
	}
	if (check)
		cout << "Попасть слоном с поля (k, l) на поле (m, n) можно за один ход\n";
	else if (f1.color == f2.color) {
		cout << "Попасть слоном с поля (k, l) на поле (m, n)\n";
		cout << "можно за 2 хода, первый ход можно сделать на\n";
		for (i = 0; i < 14; i++) {
			for (j = 0; j < 14; j++) {
				if ((el.g_moves[i].equal(el_field.g_moves[j])) && (el.g_moves[i].x != 0))
					cout << el.g_moves[i].x << " " << el.g_moves[i].y << endl;
			}
		}
	}
	if (f1.color != f2.color)
		cout << "Попасть слоном с поля (k, l) на поле (m, n) нельзя\n";

	return 0;
}