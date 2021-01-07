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
	/*Если сумма координат чётная,
	то поле чёрное, если нет - белое*/
	if ((xy.x + xy.y) % 2) { color = "белое"; }
	else { color = "чёрное"; }
}
rook::rook(coord& xy) {
	position = xy;
	int i;
	//запись в массив горизонтальных ходов
	for (i = 0; i < 8; i++) {
		g_moves[i].x = i + 1;
		g_moves[i].y = xy.y;
	}
	//запись в массив вертикальных ходов
	while (i < 15) {
		/*Чтобы не было повторяющегося элемента
		(координаты фигуры)*/
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
	int i;
	/*Обнуление массива ходов нужно, потому что
	массив может быт частично пустым, число
	"действующих" элементов массива зависит
	от координаты фигуры на доске*/
	for (i = 0; i < 14; i++) {
		g_moves[i].x = 0;
		g_moves[i].y = 0;
	}

	i = 0;
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
	for (i = 0; i < 28; i++) {
		g_moves[i].x = 0;
		g_moves[i].y = 0;
	}

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
horse::horse(coord xy) {
	position = xy;
	int i;
	g_moves[0] = xy;
	g_moves[1].x = xy.x - 1;
	g_moves[1].y = xy.y + 2;

	g_moves[2].x = xy.x + 1;
	g_moves[2].y = xy.y + 2;

	g_moves[3].x = xy.x - 1;
	g_moves[3].y = xy.y - 2;

	g_moves[4].x = xy.x + 1;
	g_moves[4].y = xy.y - 2;

	g_moves[5].x = xy.x - 2;
	g_moves[5].y = xy.y + 1;

	g_moves[6].x = xy.x - 2;
	g_moves[6].y = xy.y - 1;

	g_moves[7].x = xy.x + 2;
	g_moves[7].y = xy.y + 1;

	g_moves[8].x = xy.x + 2;
	g_moves[8].y = xy.y - 1;
}