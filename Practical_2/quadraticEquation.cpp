#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a = 0, b = 0, c = 0, quadraticPlus = 0, quadraticMinus = 0, realNum = 0, imgNum = 0, discriminant = 0;

    cout << "Please input coefficient a:";
    cin >> a;
    cout << "Please input coefficient b:";
    cin >> b;
    cout << "Please input coefficient c:";
    cin >> c;

    discriminant = pow(b, 2) - (4*a*c);

    if (discriminant > 0) {
        quadraticPlus = (-b + sqrt(discriminant)) / (2*a);
        quadraticMinus = (-b - sqrt(discriminant)) / (2*a);
        cout << "Because the discriminant is " << discriminant << " (positive), there are two different real roots:\n";
        cout << quadraticPlus << " and " << quadraticMinus;
    } else if (discriminant == 0) {
        quadraticPlus = -b / (2*a);
        cout << "Because the discriminant is " << discriminant << ", there is only one real root:\n";
        cout << quadraticPlus;
    } else if (discriminant < 0) {
        realNum = -b / (2*a);
        imgNum = sqrt(-discriminant) / (2*a);
        cout << "Because the discriminant is " << discriminant << " (negative), there are two complex roots:\n";
        cout << realNum << " + " << imgNum << "i and " << realNum << " - " << imgNum << "i";
    }
    else {
        cout << "Please input valid coefficients!";
    }

    return 0;
}