#include "board.h"
#include "move_generator.h"
#include "search.h"

int main() {
    Board board;
    board.printBoard();

    auto moves = MoveGenerator::generateMoves(board);
    Move bestMove = Search::search(board, 3);

    std::cout << "Best Move: " << bestMove << std::endl;

    return 0;
}