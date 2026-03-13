#pragma once

#include <array>

class Board;

class Render {
private:
    std::array<char,64> mBoard;

    void printBoard();
    const char* toGlyph(const char c, bool sqr);
public:
    Render(const Board& board);
    ~Render();
};
