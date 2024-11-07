#include <iostream>
#include <iomanip>
using namespace std;

int main(){
   int classA = 15;
   int classB = 12;
   int classC = 9;
   double total_profit;

   int a,b,c; //To show how many tickets were sold for each one

   cout << "How many tickets from classA were sold: ";
   cin >> a;

   cout << "How many tickets from classB were sold: ";
   cin >> b;

   cout << "How many tickets from classC were sold: ";
   cin >> c;
   
   cout << fixed << setprecision(2);

   total_profit = classA * a + classB * b + classC * c;

   cout << "The total profit generated is: " << total_profit;
}