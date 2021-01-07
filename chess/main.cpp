#include <iostream>
#include "obgects.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int k, l, m, n, i, j;
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
	
	//3===========================
	horse h(a);
	check = 0;
	for (i = 0; i < 9; i++) {
		if (h.g_moves[i].equal(b))
			check = 1;
	}
	if (check)
		cout << "����, ������������� �� ���� (k, l) �������� ���� (m, n)\n";
	else
		cout << "����, ������������� �� ���� (k, l) �� �������� ���� (m, n)\n";

	//4==========================
	rook r(a);
	rook r_field(b);
    check = 0;
	for (i = 0; i < 15; i++) {
		if (r.g_moves[i].equal(b))
			check = 1;
	}
	if (check)
		cout << "������� ������ � ���� (k, l) �� ���� (m, n) ����� �� ���� ���\n";
	else {
		cout << "������� ����� � ���� (k, l) �� ���� (m, n)\n";
		cout << "����� �� 2 ����, ������ ��� ����� ������� ��\n";
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
		cout << "������� ����� � ���� (k, l) �� ���� (m, n) ����� �� ���� ���\n";
	else {
		cout << "������� ����� � ���� (k, l) �� ���� (m, n)\n";
		cout << "����� �� 2 ����, ������ ��� ����� ������� ��\n";
		for (i = 0; i < 28; i++) {
			for (j = 0; j < 28; j++) {
				if ((q.g_moves[i].equal(q_field.g_moves[j])) && (q.g_moves[i].x != 0))
					cout << q.g_moves[i].x << " " << q.g_moves[i].y << endl;
			}
		}
	}
	
	return 0;
}