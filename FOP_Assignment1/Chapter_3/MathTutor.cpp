#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
    int num1, num2, total;

    cout << "Welcome to your math tutor!" << endl;
    cout << "Here is your problem: " << endl;

    num1 = rand() % 999;
    num2 = rand() % 999;

    total = num1 + num2;

    cout << " " <<num1 << endl;
    cout << "+" << num2 << endl;
    cout << "------" << endl;

    cout << "\n Press any key to proceed with answer..." << endl;

    cin.get();

    cout << total;

}