#include <iostream>
using namespace std;

int main(){
    double purchase = 95;
    double stateTax = 0.04;
    double countyTax = 0.02;
    double Taxtotal = stateTax + countyTax;
    double Tax = purchase * Taxtotal;
    double total = purchase + Tax;
    cout << "Your Purchase is : " << purchase << endl;
    cout << "Your total is : " << total << endl;
}