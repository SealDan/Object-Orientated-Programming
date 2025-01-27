#include <iostream>
using namespace std;

int main(){
    int pin = 0, tries = 0;


    while (tries < 3){
        cout << "Enter your PIN: ";
        cin >> pin;

        while (pin != 1234){
            cout << "Incorrect PIN. Try again: ";
            cin >> pin;
            tries++;
        }

        if (pin == 1234){
            cout << "PIN ACCEPTED! You have access.";
        }
        else{
            cout << "PIN DECLINED! Please try again.";
        }
    }
    
    if (tries == 3){
        cout << "You have exhausted the maximum number of attempts!";
    }

    return 0;
}