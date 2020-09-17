#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#define PAWN 1
#define BISHOP 2
#define KNIGHT 3
#define ROOK 4
#define QUEEN 5
#define KING 6
	
typedef struct piece
{
	int id;
	int value;

}PIECE;

typedef PIECE* tab;

tab createtab();
void printtab(tab b);
