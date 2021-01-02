#pragma once
#include <string>
using namespace std;
class coord {
public:
	coord(const int&, const int&);
	coord() {};
	bool equal(coord&);
	int x;
	int y;
};
class field {
public:
	field(coord&);
	coord coordinate;
	string color;
};
class rook {
public:
	rook(coord&);
	coord position;
	coord g_moves[16];
};
