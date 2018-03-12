//
//	Created by Tylor Graves on 2018/3/8.
//	Copyright © 2018 Tylor Graves. All rights reserved.
//


#include "board.h"

static void clearBoard(char *row);


struct Board* createBoard(int size) {
    assert(size == B_SIZE);
    struct Board* board = malloc(sizeof(struct Board));
    board->size = size;
    for (int i = 0; i < B_SIZE; i += 1) {
        clearBoard(board->board[i]);
    }
    return board;
}


void printBoard(const struct Board* board) {
    for (int i = 0; i < board->size; i += 1) {
        for (int j = 0; j < board->size; j+= 1) {
            if ((i + j) % 2 == 0) {
                printf(COLOR_BG_DG "%c " COLOR_RESET, board->board[i][j]);
            } else {
                printf(COLOR_BG_LG "%c " COLOR_RESET, board->board[i][j]);
            }
        }
        printf("\n");
    }
}

void destroyBoard(struct Board* board) {
    free(board);
}

static void clearBoard(char *row) {
    for (int i = 0; i < B_SIZE; i += 1) {
        row[i] = 'B';
    }
}