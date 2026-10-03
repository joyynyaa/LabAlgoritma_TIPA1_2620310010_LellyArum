#include <iostream>
#include <string>
using namespace std;    

int main() {
    string nama;
    string npm;

    cout << "Masukkan nama:";
    getline (cin, nama);

cout << "Masukkan NPM:";
cin >> npm;

cout << "\nOutput:\n";
cout << "Nama : " << nama << endl;
cout << "NPM : " << npm << endl;

return 0;
}