## Game
making moves
checking if a move is legal
determining checkmate
determining winner
checking stalemate (50-move rule, threefold repetition)

## Board (Game instance)
storing piece positions
storing whose turn it is
storing castling rights
storing half-move clock
storing en-passant square

## Move
from/to squares
promotion piece
move flags (castling, en passant)

## MoveParser [static?](MoveParser -> Move -> Game -> Board)
getting move input
converting input to move coordinates

## Renderer (not too important, dbg only)
displaying the board state