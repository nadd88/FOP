#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const double YEN_PER_DOLLAR = 98.93;
    const double EURO_PER_DOLLAR = 0.74;
    double US_dollars;

    cout << fixed << setprecision(2);

    cout << "Enter the amount of dollars: ";
    cin >> US_dollars;

    double JP_yen = US_dollars * YEN_PER_DOLLAR;
    double Euro = US_dollars * EURO_PER_DOLLAR;

    cout << "The amount of dollars in yen: " << JP_yen << endl;
    cout << "The amount of dollars in Euro: " << Euro << endl;

}