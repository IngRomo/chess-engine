#include "Board.hpp"

Board::Board() : mBoard(kInitialBoardState) {
}

Board::~Board() { }

const Board::BoardArray& Board::getBoard() const {
    return mBoard;
}

void Board::applyMove(int8_t from, int8_t to){
    mBoard[to] = mBoard[from];
    mBoard[from] = '.';
}