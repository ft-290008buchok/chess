#pragma once
#include <string>

using namespace std;

class coord {//координата шахматного пол€
public:
	coord(const int&, const int&);
	coord() {};
	bool equal(coord&);
	int x;
	int y;
};
class field {//шахматное поле
public:
	field(coord&);
	field() {};
	coord coordinate;
	string color;
};
//классы фигур
//===============================
class rook {//ладь€
public:
	rook(coord&);
	coord position;
	coord g_moves[15];
};
class elephant {//слон
public:
	elephant(coord);
	coord position;//координата фигуры на доске
	/*ћассив, содержащий координаты
	всех полей, на которые может сходить фигура,
	расчитан на максимальное число ходов фигуры*/
	coord g_moves[14];
};
class queen {//ферзь
public:
	queen(coord);
	coord position;
	coord g_moves[28];
};
class horse {//конь
public:
	horse(coord);
	coord position;
	coord g_moves[9];
};