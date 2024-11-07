#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double height = 6;
    double length = 100;
    double fence_area = height * length;
    double gallons_coverage = 340;

    //Area that needs to be coated
    double full_coat = fence_area * 2;

    //Numbers of gallons needed
    double gallons = full_coat / gallons_coverage;

    cout << "The number of gallons needed is: " << round(gallons) << endl;

}