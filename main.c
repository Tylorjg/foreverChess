//
//	Created by Tylor Graves on 2018/3/8.
//	Copyright © 2018 Tylor Graves. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "board.h"

int main(int argc, const char * argv[]) {
    
    struct Board* board = createBoard(B_SIZE);

    printBoard(board);


    destroyBoard(board);

    return 0;
}
