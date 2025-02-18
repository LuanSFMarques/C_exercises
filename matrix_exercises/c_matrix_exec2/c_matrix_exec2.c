// https://www.geeksforgeeks.org/validity-of-a-given-tic-tac-toe-board-configuration/
// A Tic-Tac-Toe board is given after some moves are played. Find out if the given board is valid, i.e., is it possible to reach this board position after some moves or not.
// Note that every arbitrary filled grid of 9 spaces isn’t valid e.g. a grid filled with 3 X and 6 O isn’t valid situation because each player needs to take alternate turns.

// example: Input: board[] =  {'X', 'X', 'O',
//                             'O', 'O', 'X',
//                             'X', 'O', 'X'};
// output: Valid
//
// Input: board[] =  {'O', 'X', 'X',
//                    'O', 'X', 'X',
//                    'O', 'O', 'X'};
// output: invalid

#include <stdbool.h>
bool char_board_win(char board[3][3]);
bool board_is_valid(char board[3][3]);

int main(void){
    char board_1[3][3] = {
        {'O', 'X', 'X'},
        {'O', 'X', 'X'},
        {'O', 'O', 'X'}
    };

    char board_2[3][3] = {
        {'X', 'X', 'O'},
        {'O', 'O', 'X'},
        {'X', 'O', 'X'}
    };

    if (board_is_valid(board_1)){ //board 1
        printf("Valid Board\n");
    }
    else {
        printf("Invalid Board\n");
    }

    if (board_is_valid(board_2)){ //board 2
        printf("Valid Board\n");
    }
    else {
        printf("Invalid Board\n");
    }
}

bool char_board_win(char board[3][3], char char_symb){
    // VERIFICAR SE UM DADO CARACTER GANHOU O JOGO
}

bool board_is_valid(char board[3][3]){
    int count_x = 0, count_o = 0;

    // Counting the number of X and O
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (board[i][j] == 'X'){
                count_x += 1;
            }
            else {
                count_o += 1;
            }
        }
    }

    // Check 1
    if ((count_x != count_o)&&(count_x != count_o + 1)){
        return false;
    }
    bool win_x = char_board_win(board, 'X');
    bool win_o = char_board_wind(board, 'O');

    // Check 2
    if (win_x && win_o){
        return false;
    }
    if (win_o && (count_x > count_o)){
        return false;
    }

    return true;
}


