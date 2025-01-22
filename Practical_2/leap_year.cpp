#include <iostream>
using namespace std;

int leapYearChecker(int year){
    if ((year % 4 == 0 && year % 100 !=0) || year % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int year = 0;
    char again = 'y';

    while(again == 'y' || again == 'Y') {
        do{
        cout << "Please enter a year (4 digits!): \n";
        cin >> year;
        
    } while (year <= 1000 || year >= 9999);
   
    if (leapYearChecker(year) == 1) {
        cout << year << " is a leap year\n";
    } else {
        cout << year << " is NOT a leap year\n";
    }

    cout << "Would you like to check another year (y/n)?\n";
    cin >> again;
    }

    return 0;
}