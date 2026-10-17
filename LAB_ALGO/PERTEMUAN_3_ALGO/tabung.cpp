#include<iostream>
using namespace std;

int main(){
    double r;
    double t;
    double volume;
    const double PI = 3.14159265358979323846;

    cout << "Masukkan jari-jari tabung (r) : ";
    cin >> r;

    cout << "Masukkan tinggi tabung (t) : ";
    cin >> t;

    volume = PI * r * r * t;

    cout << "Volume Tabung adalah : " << volume << endl;

    return 0;

}