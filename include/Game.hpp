#pragma once

#include <iostream>

#include "Board.hpp"

class Game {
private:
    Board mBoard;
public:
    Game();
    ~Game();

    void makeMove(int from, int to);

    const std::array<char,64>& getBoardArray() const { return mBoard.getBoard();}
};