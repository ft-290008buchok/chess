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
private:
	coord coordinate;
	string color;
};

