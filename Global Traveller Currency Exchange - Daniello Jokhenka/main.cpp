#include <iostream>
using namespace std;

int main() {
    const double USD_TO_GBP = 0.82, EURO_TO_GBP = 0.84, CNY_TO_GBP = 0.11, SGD_TO_GBP = 0.6, MYR_TO_GBP = 0.18;
    double GBP = 0, USD = 0, EURO = 0, CNY = 0, SGD = 0, MYR = 0;

    cout << "Please enter the amount of US Dollar: ";
    cin >> USD;
    cout << "Please enter the amount of Euro: ";
    cin >> EURO;
    cout << "Please enter the amount of Chinese Yuan: ";
    cin >> CNY;
    cout << "Please enter the amount of Singapore Dollar: ";
    cin >> SGD;
    cout << "Please enter the amount of Malaysia Ringgit: ";
    cin >> MYR;

    GBP = USD * USD_TO_GBP + EURO * EURO_TO_GBP + CNY * CNY_TO_GBP + SGD * SGD_TO_GBP + MYR * MYR_TO_GBP;

    cout << "Total in British Pounds is " << GBP << endl;

    return 0;
}