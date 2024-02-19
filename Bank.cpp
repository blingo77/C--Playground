#include <iostream>

using namespace std;

void showBalance(double balance);

double deposit();

double withdraw();

int main(){

    char choice;
    double balance = 0;
    bool running = true;

    while(running){

        cout << "#################" << endl;
        cout << "CHOOSE AN OPTION" << endl;
        cout << " Balance: $"<< balance << endl;
        cout << "#################" << endl;
        cout << "1. SHOW BALANCE (C)" << endl;
        cout << "2. DEPOSIT (D)" << endl;
        cout << "3. WITHDRAW (W)" << endl;
        cout << "4. Exit (E)" << endl;
        cout << "Enter choice: " << endl;
        cin >> choice;

        switch(choice){
            case 'c':
                showBalance(balance);
                break;
            case 'd':
                balance += deposit();
                break;
            case 'w':
                balance -= withdraw();
                break;
            case 'e':
                running = false;
                break;
            default:
                cout << "ERROR: That was not a valid option" << endl;
        }
    }
    
    cout << "Goodbye!" << endl;

    return 0;
}

void showBalance(double balance){

    cout << "You have a balance of: $" << balance << endl;

}

double deposit(){
    double amount;

    cout << "Enter an amount you would like to deposit: $" ;
    cin >> amount;

    return amount;
}

double withdraw(){
    double amount;

    cout << "Enter an amount you would like to withdraw: $ ";
    cin >> amount;
    
    return amount;

}