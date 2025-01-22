#include <iostream>
using namespace std;

int main() {
    string Name;
    int dogAge = 0, dogHumanAge = 0;

    cout << "Please enter your dog's name: \n";
    cin >> Name;
    cout << "Please enter your dog's age (in years): \n";
    cin >> dogAge;

    if (dogAge == 1) {
        dogHumanAge = 21/2;
        cout << Name << "'s age is around " << dogHumanAge << " human years old\n";
    }
    else if (dogAge == 2) {
        dogHumanAge = 21;
        cout << Name << "'s age is " << dogHumanAge << " human years old\n";
    }
    else if (dogAge > 2) {
        dogHumanAge = (dogAge - 2)*4 + 21;
        cout << Name << "'s age is " << dogHumanAge << " human years old\n";
    }
    else {
        cout << "Please input a valid age for " << Name << "!";
    }

    return 0;
}