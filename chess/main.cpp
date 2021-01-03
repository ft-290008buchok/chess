#include <iostream>
#include "obgects.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int k, l, m, n;
	cout << "¬ведите координату первого пол€ в формате x y: ";
	cin >> k >> l;
	coord a(k, l);
	cout << "¬ведите координату второго пол€ в формате x y: ";
	cin >> m >> n;
	coord b(m, n);
	queen el(b);
	for (int i = 0; i < 28; i++) {
		cout << el.g_moves[i].x << " " << el.g_moves[i].y << endl;
	 }
	return 0;
}