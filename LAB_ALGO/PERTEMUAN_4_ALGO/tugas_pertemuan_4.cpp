#include<iostream>
#include<string>
using namespace std;

int main(){
    string nama;
    float nilai1, nilai2, nilai3;
    double rata_rata;

    cout << "Nama Siswa : " << endl;
    cin >> nama;
    cout << "Nilai Pertandingan 1 : " << endl;
    cin >> nilai1;
    cout << "Nilai Pertandingan 2 : " << endl;
    cin >> nilai2;
    cout << "Nilai Pertandingan 3 : " << endl;
    cin >> nilai3;

    rata_rata = (nilai1 + nilai2 + nilai3) /  3.0;

    cout << "Siswa yang bernama : " << nama << endl;
    cout << "Memperoleh nilai rata-rata  " << rata_rata << "dari hasil perlombaan yang diikutinya" << endl;
    cout << "Hadiah yang didapat adalah ";
    if(rata_rata >= 85){
        cout << "Komputer Core i5" << endl;
    }

    else if(rata_rata >= 70){
        cout << "Uang sebesar Rp. 2.500.000" << endl;
    }
    else{
        cout <<  "hiburan" << endl;
    }

    return 0;

}
