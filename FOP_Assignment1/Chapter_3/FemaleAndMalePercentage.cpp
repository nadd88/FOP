#include <iostream>
using namespace std;

int main(){
    double femaleNum ,  MaleNum , total;
    double femalePercentage , MalePercentage;

    cout << "Enter the number of females in the class: ";
    cin >> femaleNum;

    cout << "Enter the number of males in the class: ";
    cin >> MaleNum;

    total = femaleNum + MaleNum; 

    femalePercentage = femaleNum / total * 100;
    MalePercentage = MaleNum / total * 100;

    cout << "The percentage of females in the class is %" << femalePercentage << " and the percentage of males in the class is %" << MalePercentage << endl; 

}