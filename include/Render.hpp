#pragma once

#include <array>

class Render {
private:
    static const char* toGlyph(const char c, bool sqr);
public:
    Render();
    ~Render();
    static void printBoard(const std::array<char,64>& board);
};
