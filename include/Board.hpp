#pragma once

#include <array>

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

    void assignBoard(BoardArray&, const BoardArray&);
public:
    Board();
    ~Board();

    void setBoard();
    const BoardArray& getBoard() const;
};