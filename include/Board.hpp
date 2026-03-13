#pragma once

#include <array>
#include <cstdint>

class Board {
private:
    using BoardArray = std::array<char, 64>;

    BoardArray mBoard;
    static inline const BoardArray kInitialBoardState{'r','n','b','q','k','b','n','r',
                                                      'p','p','p','p','p','p','p','p',
                                                      '.','.','.','.','.','.','.','.',
                                                      '.','.','.','.','.','.','.','.',
                                                      '.','.','.','.','.','.','.','.',
                                                      '.','.','.','.','.','.','.','.',
                                                      'P','P','P','P','P','P','P','P',
                                                      'R','N','B','Q','K','B','N','R'};

public:
    Board();
    ~Board();

    void applyMove(int8_t from,int8_t to);
    const BoardArray& getBoard() const;
};