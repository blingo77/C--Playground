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
    
    while(running){
        displayBoard(board);
        playerMove(board, player);
        if(checkWinner(board, player, computer)){
            std:: cout << "hello";
            running = false;
            break;
        }

        std:: cout << "###########" << '\n';

        displayBoard(board);
        computerMove(board, computer);
        if(checkWinner(board, player, computer)){
            running = false;
            break;
        }

        std:: cout << "###########" << '\n';

    }
    
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

    int spot;

    do{
        std:: cout << "Enter a spot you would like (1-9): ";
        std:: cin >> spot;
        spot--;
        if(spaces[spot] == '-'){
            spaces[spot] = player;
            break;
        }
    }while(spot < 0 || spot > 8);
}

void computerMove(char *spaces, char computer){
    int spot;
    srand(time(0));

    while(true){
        spot = rand() % 9;
        if(spaces[spot] == '-'){
            spaces[spot] = computer;
            break;
        }
    }

}

bool checkWinner(char *spaces, char player, char computer){

    if(spaces[0] != '-' && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
        spaces[0] == player ? std:: cout << "Player Wns" << '\n' : std:: cout << "Computer Wins" << '\n';
    }
    else if(spaces[0] != '-' && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
        spaces[0] == player ? std:: cout << "Player Wns" << '\n' : std:: cout << "Computer Wins1" << '\n';
    }
    else if(spaces[1] != '-' && spaces[1] == spaces[4] && spaces[4] == spaces[7]){
        spaces[1] == player ? std:: cout << "Player Wns" << '\n' : std:: cout << "Computer Wins2" << '\n';
    }
    else if(spaces[2] != '-' && spaces[2] == spaces[5] && spaces[5] == spaces[8]){
        spaces[2] == player ? std:: cout << "Player Wns" << '\n' : std:: cout << "Computer Wins3" << '\n';
    }
    else if(spaces[3] != '-' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
        spaces[3] == player ? std:: cout << "Player Wns" << '\n' : std:: cout << "Computer Wins4" << '\n';
    }
    else if(spaces[6] != '-' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
        spaces[6] == player ? std:: cout << "Player Wns" << '\n' : std:: cout << "Computer Wins5" << '\n';
    }
    else if(spaces[0] != '-' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        spaces[0] == player ? std:: cout << "Player Wns" << '\n' : std:: cout << "Computer Wins6" << '\n';
    }
    else if(spaces[2] != '-' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        spaces[2] == player ? std:: cout << "Player Wns" << '\n' : std:: cout << "Computer Wins7" << '\n';
    }
    else{
        return false;
    }
    return true;
}

bool checkTie(char *spaces, char player, char computer){

}