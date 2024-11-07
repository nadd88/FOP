#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double angle;

    cout << "Please enter the angle in radians: ";
    cin >> angle;

    double sine = sin(angle);
    double cose = cos(angle);
    double tane = tan(angle);

    cout << fixed << setprecision(4);

    cout << "The sin of the angle is: " << sine << endl;
    cout << "The cos of the angle is: " << cose << endl;
    cout << "The tan of the angle is: " << tane << endl;
    
}