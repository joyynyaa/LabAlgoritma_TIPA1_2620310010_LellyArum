#include<iostream>
using namespace std;

int main(){
    int angka;
    int jumlah_faktor = 0;

    cout << "Masukka sebuah angka : ";
    cin >> angka;

    for (int i = 1; i <= angka; i++){
        if (angka % i == 0){
            jumlah_faktor++;
        }
    }

    if (jumlah_faktor == 2){
        cout << "Termasuk bilangan PRIMA" << endl;
    } 
    else {
        cout << "Bukan termasuk bilangan prima" << endl;
    }
    return 0;
}