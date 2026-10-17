#include<iostream>
using namespace std;

int main(){
    double r;
    double luas;
    const double PI = 3.14159265358979323846;

    cout << "Masukkan jari-jari lingkaran : ";
    cin >> r;

    luas = PI * r * r;
    
    cout << "Luas lingkaran adalah : " << luas << endl;
    return 0;

}