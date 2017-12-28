#ifndef BOARD_H
#define BOARD_H 

#include "definitions.hpp"

class Board
{
public:
	void NewGame();
	char* operator[](int i)
	{
		return pieces[i];
	}
private:
	void SetPieces(char newPieces[RANKS][FILES]);
	char pieces[RANKS][FILES];
};

#endif /* BOARD_H */
