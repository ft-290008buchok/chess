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
rook::rook(coord& xy) {
	position = xy;
	int i;
	for (i = 0; i < 8; i++) {
		g_moves[i].x = i + 1;
		g_moves[i].y = xy.y;
	}
	while (i < 15) {
		if (i - 7 < position.y) {
			g_moves[i].y = i - 7;
			g_moves[i].x = xy.x;
		}
		else {
			g_moves[i].y = i - 6;
			g_moves[i].x = xy.x;
		}
		i ++;
	}
}
elephant::elephant(coord xy) {
	position = xy;
	int i = 0;
	g_moves[i] = xy;
	while ((xy.x > 1) && (xy.y < 8)) {
		xy.x -= 1;
		xy.y += 1;
		i += 1;
		g_moves[i] = xy;
	}
	xy = position;
	while ((xy.x < 8) && (xy.y > 1)) {
		xy.x += 1;
		xy.y -= 1;
		i += 1;
		g_moves[i] = xy;
	}

	xy = position;
	while ((xy.x > 1) && (xy.y > 1)) {
		xy.x -= 1;
		xy.y -= 1;
		i += 1;
		g_moves[i] = xy;
	}
	xy = position;
	while ((xy.x < 8) && (xy.y < 8)) {
		xy.x += 1;
		xy.y += 1;
		i += 1;
		g_moves[i] = xy;
	}
}
queen::queen(coord xy) {
	position = xy;
	int i;
	for (i = 0; i < 8; i++) {
		g_moves[i].x = i + 1;
		g_moves[i].y = xy.y;
	}
	while (i < 15) {
		if (i - 7 < position.y) {
			g_moves[i].y = i - 7;
			g_moves[i].x = xy.x;
		}
		else {
			g_moves[i].y = i - 6;
			g_moves[i].x = xy.x;
		}
		i++;
	}
	while ((xy.x > 1) && (xy.y < 8)) {
		xy.x -= 1;
		xy.y += 1;
		g_moves[i] = xy;
		i += 1;
	}
	xy = position;
	while ((xy.x < 8) && (xy.y > 1)) {
		xy.x += 1;
		xy.y -= 1;
		g_moves[i] = xy;
		i += 1;
	}

	xy = position;
	while ((xy.x > 1) && (xy.y > 1)) {
		xy.x -= 1;
		xy.y -= 1;
		g_moves[i] = xy;
		i += 1;
	}
	xy = position;
	while ((xy.x < 8) && (xy.y < 8)) {
		xy.x += 1;
		xy.y += 1;
		g_moves[i] = xy;
		i += 1;
	}
}