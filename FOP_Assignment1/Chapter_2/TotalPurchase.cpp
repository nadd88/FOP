#include <iostream>
using namespace std;

int main(){
    double item1 = 15.95;
    double item2 = 24.95;
    double item3 = 6.95;
    double item4 = 12.95;
    double item5 = 3.95;
    double tax = 7.0;
    
    double subtotal = item1 + item2 + item3 + item4 + item5;
    double total_tax = subtotal * tax / 100;
    double total = total_tax + subtotal;
    
    cout << "Price of item 1 = $15.95\nPrice of item 2 = $24.95\nPrice of item 3 = $6.95\nPrice of item 4 = $12.95\nPrice of item 5 = $3.95" << endl;
    cout << "subtotal: " << subtotal << endl;
    cout << "tax: " << total_tax << endl;
    cout << "total: " << total << endl;
    
}