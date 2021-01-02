#include "obgects.h"
#include<cmath>
coord::coord(const int& x, const int& y) {
	coord::x = x;
	coord::y = y;
}
bool coord::equal(coord& c) {
	if ((coord::x == c.x) && (coord::y == c.y)) { return 1; }
	else { return 0; }
}
field::field(coord& xy) {
	coordinate = xy;
	if ((xy.x + xy.y) % 2) { color = "белое"; }
	else { color = "чёрное"; }
}
