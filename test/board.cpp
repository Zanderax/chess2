#include "gtest/gtest.h"
#include "board.hpp"

TEST(example, subtract)
{
	Board board;
	board.NewGame();
	ASSERT_EQ('R', board[0][0] );
}
