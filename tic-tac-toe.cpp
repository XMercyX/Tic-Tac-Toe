#include <iostream>
#include <vector>

std::vector<int> board {
    0,0,0,
    0,0,0,
    0,0,0
};

std::string ticTacToeCharFunction(int T){
    if(T == 0){
        return "_";
    } else if(T == 1){
        return "X";
    } else if(T == -1){
        return "O";
    }
}

void displayBoard(){
    std::cout << ticTacToeCharFunction(board[0]) << " | " << ticTacToeCharFunction(board[1]) << " | " << ticTacToeCharFunction(board[2]) << '\n' << ticTacToeCharFunction(board[3]) << " | " << ticTacToeCharFunction(board[4]) << " | " << ticTacToeCharFunction(board[5]) << '\n'  << ticTacToeCharFunction(board[6]) << " | "  << ticTacToeCharFunction(board[7]) << " | "  << ticTacToeCharFunction(board[8]);
}

void resetBoard(){
    std::vector blankBoard {
        0,0,0,
        0,0,0,
        0,0,0
    };
    board = blankBoard;
}

void checkWins(){
    /*
    Ways to win in tic-tac-toe
    
    horizontal --> 3 rows
    vertical --> 3 columns
    diagonal --> diag. down, diag. up
    
    */
}

bool isSpotFree(int index){
    if(board[index] != 0){
        return false;
    }
    return true;
}

bool takeUserInput(){
    int userInput;
    std::cout << "Pick an empty spot: ";
    std::cin >> userInput;
    if(isSpotFree(userInput)){
        board[userInput] = 1;
        return true;
    } else {
        return false;
    }
}

int main(){
    
    displayBoard();
    
    return 0;
}