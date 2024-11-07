#include <iostream>
using namespace std;

int main(){
    double mealCharge = 88.67;
    double Tax = 6.75;
    double mealCharge_Tax = mealCharge * Tax / 100;
    double Tip = mealCharge_Tax * 20/100;
    double total = mealCharge + mealCharge_Tax + Tip;
    
    cout << "The meal cost: " << mealCharge << endl;
    cout << "The tax: " << mealCharge_Tax << endl;
    cout << "The tip amount: " << Tip << endl;
    cout << "The total: " << total;
    
}