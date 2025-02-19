#include "search.h"
#include "board.h"
#include "evaluation.h"
#include "move_generator.h"

Move Search::search(const Board& board, int depth) {
    return Move();
}

int Search::minimax(const Board& board, int depth, int alpha, int beta, bool isMaximizing) {
    if (depth == 0) return Evaluation::evaluate(board);

    std::vector<Move> moves = MoveGenerator::generateMoves(board);
    if (isMaximizing) {
        int maxEval = -INFINITY;
        for (const auto& move : moves) {
            Board newBoard = board; 
            int eval = minimax(newBoard, depth - 1, alpha, beta, false);
            maxEval = std::max(maxEval, eval);
            alpha = std::max(alpha, eval);
            if (beta <= alpha) break;
        }
        return maxEval;
    } else {
        int minEval = INFINITY;
        for (const auto& move : moves) {
            Board newBoard = board; 
            int eval = minimax(newBoard, depth - 1, alpha, beta, true);
            minEval = std::min(minEval, eval);
            beta = std::min(beta, eval);
            if (beta <= alpha) break;
        }
        return minEval;
    }
}