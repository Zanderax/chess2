#include "gtest/gtest.h"
#include "board.hpp"

TEST(board, NewGame)
{
	Board board;
	board.NewGame();
	
	char expectedPieces[RANKS][FILES] = 
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

	for(int r = 0; r < RANKS; ++r)
	{
		for(int f = 0; f < FILES; ++f)
		{
			ASSERT_EQ(board[r][f], expectedPieces[r][f]);
		}
	}
}
