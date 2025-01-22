#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    string user;
    char again = 'y';
    int wins = 0, losses = 0, ties = 0;

    srand(time(0));
    
    
    do {
        int opponent = rand() % 3; // Random number from 0 to 2 
        //0 = Rock, 1 = Paper, 2 = Scissors

        do{
            cout << "Please enter Rock, Paper, or Scissors: \n";
            cin >> user;
        } while (user != "Rock" && user != "rock" && user != "Paper" && user != "paper" && user != "Scissors" && user != "scissors");
        

        if (((user == "Rock" || user == "rock") && opponent == 2) || ((user == "Paper" || user == "paper") && opponent == 0) || ((user == "Scissors" || user == "scissors") && opponent == 1)) {
            if (opponent == 0){
                cout << "Your opponent chose ROCK!\n";
            }
            else if (opponent == 1){
                cout << "Your opponent chose PAPER!\n";
            }
            else{
                cout << "Your opponent chose SCISSORS!\n";
            }
            cout << "You WIN!\n\n";
            wins++;
        }
        else if (((user == "Rock" || user == "rock") && opponent == 1) || ((user == "Paper" || user == "paper") && opponent == 2) || ((user == "Scissors" || user == "scissors") && opponent == 0)){
            if (opponent == 0){
                cout << "Your opponent chose ROCK!\n";
            }
            else if (opponent == 1){
                cout << "Your opponent chose PAPER!\n";
            }
            else{
                cout << "Your opponent chose SCISSORS!\n";
            }
            cout << "You LOSE!\n\n";
            losses++;
        }
        else{
            if (opponent == 0){
                cout << "Your opponent chose ROCK!\n";
            }
            else if (opponent == 1){
                cout << "Your opponent chose PAPER!\n";
            }
            else{
                cout << "Your opponent chose SCISSORS!\n";
            }
            cout << "It is a TIE!\n\n";
            ties++;
    }

    cout << "Wins: " << wins << "\nLosses: " << losses << "\nTies: " << ties << "\n";

    cout << "Would you like to play again (y/n)?\n";
    cin >> again;
    } while (again == 'y' || again == 'Y');
    
    
    return 0;
}