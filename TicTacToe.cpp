#include <iostream>

using namespace std;

void displayBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces, char player, char computer);

int main(){

    char board[9] = {'-', '-', '-', '-', '-', '-', '-', '-', '-'};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    displayBoard(board);
    
    return 0;
}

void displayBoard(char *spaces){
    
    for(int i = 0; i <= sizeof(spaces)/sizeof(spaces[0]); i += 3){
        std::cout << spaces[i] << '|' << spaces[i+1] << '|' << spaces[i + 2] << '\n';

        if(i <= 3 ){
            std::cout << "------" << std::endl;
        }
    }
}

void playerMove(char *spaces, char player){

}

void computerMove(char *spaces, char computer){

}

bool checkWinner(char *spaces, char player, char computer){

}

bool checkTie(char *spaces, char player, char computer){

}