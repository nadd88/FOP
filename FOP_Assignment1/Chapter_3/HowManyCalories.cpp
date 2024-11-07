#include <iostream>
using namespace std;

int main(){
    int total_cookies = 30;
    int servings = 10;
    int cookiesPerServing = total_cookies / servings;
    int caloriesPerServing = 300;
    int caloriesPerCookie = caloriesPerServing / cookiesPerServing;

    int num; //Number of cookies the user eaten

    cout << "How many cookies did you eat? "; 
    cin >> num;

    int totalCals = caloriesPerCookie * num;

    cout << "You have consumed " << totalCals << " Calories";
}