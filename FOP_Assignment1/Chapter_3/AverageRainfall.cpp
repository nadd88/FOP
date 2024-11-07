#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    string month1 , month2 , month3;
    double num1 , num2 , num3;

    cout << "Enter the first month: ";
    cin >> month1;
    cout << "Enter the average of rain that month: ";
    cin >> num1;

    cout << "Enter the second month: ";
    cin >> month2;
    cout << "Enter the average of rain that month: ";
    cin >> num2;

    cout << "Enter the third month: ";
    cin >> month3;
    cout << "Enter the average of rain that month: ";
    cin >> num3;

    double sum = num1 + num2 + num3; //count the sum of numbers
    double avg = sum / 3; //count the average

    cout << "The average amount of rain in " << month1 << ", " << month2 << ", " << month3 << " is " << avg; 

}