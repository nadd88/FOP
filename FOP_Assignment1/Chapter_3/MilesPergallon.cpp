#include <iostream>

using namespace std;

int main(){
    double gallons, miles;

    cout << "Enter the number of gallons your car can hold: ";
    cin >> gallons;

    cout << "Enter the number of miles the car can drive on a full tank: ";
    cin >> miles;

    double miles_per_gallon = miles / gallons;

    cout << "The miles per gallon are: " << miles_per_gallon;
}