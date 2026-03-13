#include "Board.hpp"

Board::Board() {
    mBoard = kInitialBoardState;
}

Board::~Board() = default;

void Board::assignBoard(BoardArray& dst, const BoardArray& src) {
    dst = src;
}

void Board::setBoard() {
    assignBoard(mBoard, kInitialBoardState);
}

const Board::BoardArray& Board::getBoard() const {
    return mBoard;
}
