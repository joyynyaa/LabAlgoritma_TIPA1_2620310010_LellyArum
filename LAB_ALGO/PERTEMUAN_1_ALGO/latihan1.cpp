#include<iostream> // perintah untuk memasukkan library input-output bawaan C++
using namespace std; // memberitahu compiler bahwa kita akan menggunakan fungsi seperti (cout/cin) 
// tanpa perlu menulis std lagi di depannya

int// tipe return, artinya fungsi ini mengembalikan nilai integer ke sistem operasi .
main // nama fungsi, ini wajib ada dan cuma boleh satu
() // parameter
{ // batas awal
    cout // objek buat nulis ke layar
    << // fungsinya "menyorongkan" data ke cout
     "Hello world" //  string literal, teks yang mau ditampilkan
     << endl // end line, buat pindah baris (newline) sekaligus flush buffer
     ;// akhir dari statement
    return 0; // andain program selesai dengan sukses (0 = sukses, selain 0 = error)
} // batas akhir