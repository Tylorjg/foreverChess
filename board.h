//
//	Created by Tylor Graves on 2018/3/8.
//	Copyright © 2018 Tylor Graves. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#ifndef board_h
#define board_h

#define COLOR_BG_LG "\e[47m"
#define COLOR_BG_DG "\e[100m"
#define COLOR_RESET "\e[0m"

#define B_SIZE 8

struct Board {
    int size;
    char board[B_SIZE][B_SIZE];
};

struct Board* createBoard(int size);
void destroyBoard(struct Board* board);

void printBoard(const struct Board* baord);

#endif /* board_h */
	

