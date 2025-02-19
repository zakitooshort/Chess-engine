#include "board.h"

Board::Board() {
    for (int i = 0; i < 64; ++i) {
        board[i] = Piece::None;
    }

    for (int i = 0; i < 8; ++i) {
        board[i + 8] = Piece::WhitePawn;
        board[i + 48] = Piece::BlackPawn;
    }

    board[0] = board[7] = Piece::WhiteRook;
    board[1] = board[6] = Piece::WhiteKnight;
    board[2] = board[5] = Piece::WhiteBishop;
    board[3] = Piece::WhiteQueen;
    board[4] = Piece::WhiteKing;

    board[56] = board[63] = Piece::BlackRook;
    board[57] = board[62] = Piece::BlackKnight;
    board[58] = board[61] = Piece::BlackBishop;
    board[59] = Piece::BlackQueen;
    board[60] = Piece::BlackKing;
}

void Board::printBoard() const {
    for (int i = 0; i < 64; ++i) {
        if (i % 8 == 0) std::cout << std::endl;
        std::cout << static_cast<int>(board[i]) << " ";
    }
    std::cout << std::endl;
}