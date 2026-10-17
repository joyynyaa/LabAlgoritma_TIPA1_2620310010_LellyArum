#include <iostream> // meminjam library dari iostream termasuk input-output
using namespace std; // memberitau compiler bahwa kita akan menggunakan fungsi seperti (cout/cin)
// tanpa perlu memakai std lagi di depannya

int // // tipe return, artinya fungsi ini mengembalikan nilai integer ke sistem operasi
main // nama fungsi, wajib dan cuma boleh ada satu
() // parameter 
{ // batas awal
    // inisialisasi variabel
    int // tipe data
    x // nama variable
    = 50; // mengisi variable x dengan nilai 50
    int a, b, c, d, e; // membuat lima variable bertipe integer untuk menyimpan hasil perhitungan

    // proses
    a = x > 5 + 5; // 5+5=10 apakah x>10 jawabannya benar jadi a=1
    b = x > 100; // apakah 50 lebih besar dari 100, salah jadi b=0
    c = a && // dan
    b; // kedua kondisi harus benar jadi c=0
    d = a || // atau, cukup salah satu kondisi benar
    b; // d=1
    e = ! // NOT (kebalikan)
    (c); // e=1

    // output berupa 1 (benar) dan 0 (salah)
    cout // menampilkan output
    << // mengirim teks atau nilai ke output
    "Nilai a = x > 5 + 5 = " // teks yang ditampilkan
    << a // menampilkan nilai variable a
    << endl // pindah ke baris baru
    ;  // akhir dari statement
    cout << "Nilai b = x > 100 = " << b << endl;
    cout << "Nilai c = a && b = " << c << endl;
    cout << "Nilai d = a || b = " << d << endl;
    cout << "Nilai e = !(c) = " << e << endl;

    getchar // membaca satu karakter dari keyboard
    ();
} // batas akhir