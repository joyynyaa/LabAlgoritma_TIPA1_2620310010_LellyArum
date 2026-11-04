#include <iostream>
using namespace std;

int main() {
    int menu, bil, j, cek;

    do {
        cout << "======= Selamat Datang =======" << endl;
        cout << "1. Tentukan Bilangan Genap/Ganjil" << endl;
        cout << "2. Tentukan Bilangan Prima" << endl;
        cout << "0. Hentikan Program" << endl;
        cin >> menu;

        if (menu == 1) {
            cout << "====== Menu Bilangan Genap/Ganjil ======" << endl;
            cout << "Masukkan Bilangan : ";
            cin >> bil;

            if (bil % 2 == 0) {
                cout << bil << " Bilangan Genap" << endl << endl;
            } else {
                cout << bil << " Bilangan Ganjil" << endl << endl;
            }
        } else if (menu == 2) {
            cout << "====== Menu Bilangan Prima ======" << endl;
            cout << "Masukkan Bilangan : ";
            cin >> bil;

            cek = 1;

            if (bil <= 1) {
                cek = 0;
            } else {
                for (j = 2; j <= bil / 2; j++) {
                    if (bil % j == 0) {
                        cek = 0;
                    }
                }
            }
            
            if (cek == 1) {
                cout << bil << " Bilangan Prima" << endl << endl;
            } else {
                cout << bil << " Bukan Bilangan Prima" << endl << endl;
            }
        }

    } while (menu != 0);

    return 0;
}