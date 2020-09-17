#include "board.h"

void modCell(int x, int y, PIECE p, tab t){
     
     t[y * 8 + x] = p;
}

tab createtab(){
	tab final = malloc(sizeof(PIECE) * 64);

	PIECE pw = {.id = PAWN, .value = 1};
	PIECE bs = {.id = BISHOP, .value = 3};
	PIECE kn = {.id = KNIGHT, .value = 3};
	PIECE rk = {.id = ROOK, .value = 5};
	PIECE qn = {.id = QUEEN, .value = 9};
	PIECE kg = {.id = KING, .value = -1}; // provavel mudar valor de rei

	modCell(0, 0, rk, final);
	modCell(0, 1, kn, final);
	modCell(0, 2, bs, final);
	modCell(0, 3, qn, final);
	modCell(0, 4, kg, final);
	modCell(0, 5, bs, final);
	modCell(0, 6, kn, final);
	modCell(0, 7, rk, final);

	modCell(7, 0, rk, final);
	modCell(7, 1, kn, final);
	modCell(7, 2, bs, final);
	modCell(7, 3, qn, final);
	modCell(7, 4, kg, final);
	modCell(7, 5, bs, final);
	modCell(7, 6, kn, final);
	modCell(7, 7, rk, final);

	for (int y = 0; y < 8; y++)
	{
		modCell(1, y, pw, final);
	}
	for (int y = 0; y < 8; y++)
	{
		modCell(6, y, pw, final);
	}

	for (int x = 6; x < 8; x++)
	{
		for (int y = 0; y < 8 ; y++)
		{
			final[y * 8 + x].id *= -1;
		}
	}

	return final;
}

void printtab(tab b){
	for (int i = 0; i < 8; i++)
	{
		for (int k = 0; k < 8; k++)
		{
			putchar((char) b[k * 8 + i].id + 64);
		}
		putchar('\n');
	}
}