#include <iostream>
#include <array>
#include <vector>

class Render {
private:
    std::array<char,64> Board{};
    static constexpr std::array initialBoardState{'r','n','b','q','k','b','n','r',
                                                  'p','p','p','p','p','p','p','p',
                                                  '.','.','.','.','.','.','.','.',
                                                  '.','.','.','.','.','.','.','.',
                                                  '.','.','.','.','.','.','.','.',
                                                  '.','.','.','.','.','.','.','.',
                                                  'P','P','P','P','P','P','P','P',
                                                  'R','N','B','Q','K','B','N','R'};

public:
    void printBoard();
    Render();
    ~Render();
};
