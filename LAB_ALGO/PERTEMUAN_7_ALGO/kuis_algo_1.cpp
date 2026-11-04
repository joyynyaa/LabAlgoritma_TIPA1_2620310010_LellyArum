#include <iostream>
using namespace std;
int main() {
    int opsi, nilai, i, cek;

    do {
cout << "======= Selamat Datang =======" << endl;
    cout << "1. Tentukan Bilangan Genap/Ganjil" << endl;
    cout << "2. Tentukan Bilangan Prima" << endl;
cout << "0. Hentikan Program" << endl;
        cin >> opsi;

        if (opsi == 1) {
    cout << "====== Menu Bilangan Genap/Ganjil ======" << endl;
        cout << "Masukkan Bilangan : ";
            cin >> nilai;
            
    if (nilai % 2 == 0) {
                cout << nilai << " Bilangan Genap" << endl << endl;
        } else {
cout << nilai << " Bilangan Ganjil" << endl << endl; }

        } else if (opsi == 2) {
cout << "====== Menu Bilangan Prima ======" << endl;
            cout << "Masukkan Bilangan : ";
    cin >> nilai;
            cek = 1;
    if (nilai <= 1) {
        cek = 0;
            } else {
        for (i = 2; i <= nilai / 2; i++) {
                if (nilai % i == 0) {
        cek = 0; }
            }
    }
if (cek == 1) {
cout << nilai << " Bilangan Prima" << endl << endl;
            } else {
    cout << nilai << " Bukan Bilangan Prima" << endl << endl;
    }
        }
    } while (opsi != 0);
    return 0;
}