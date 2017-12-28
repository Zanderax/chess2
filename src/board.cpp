#include "board.hpp"

void Board::SetPieces(char newPieces[RANKS][FILES])
{
	for(int r = 0; r < RANKS; ++r)
	{
		for(int f = 0; f < FILES; ++f)
		{
			pieces[r][f] = newPieces[r][f];
		}
	}
}

void Board::NewGame()
{
	char newPieces[RANKS][FILES] = 
	{
		{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
	};

	SetPieces( newPieces );
}
