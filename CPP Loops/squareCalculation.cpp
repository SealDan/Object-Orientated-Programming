#include <iostream>
using namespace std;

int main() {
    int i = 0, square = 0;

    while (i < 10) {
        square = i*i;
        cout<< "The square of " << i << " is " << square << "\n";
        i++;
    }

    return 0;
}