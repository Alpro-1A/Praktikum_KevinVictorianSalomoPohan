#include <iostream>

using namespace std;

int main ()
{
    //membuat variabel
    int angka1, angka2, angka3;

    //membuat input untuk ke 3 angka
    cout << "Menentukan Angka Tebesar" << endl << endl;
    cout << "Masukan angka pertama : " << endl;
    cin >> angka1;
    cout << "Masukan angka kedua : " << endl;
    cin >> angka2;
    cout << "Masukan angka ketiga : " << endl;
    cin >> angka3;

    //menentukan angka terbesar antara angka 1 dan angka 2 (angka terbesar dimasukan ke variabel angka1)
    if (angka1 > angka2 ) {
        angka1 = angka1;
    } else {
        angka1 = angka2;
    }
    //menentukan angka terbesar antara angka 1 terbaru dengan angka 3 (angka terbesar dimasukan ke variabel angka1)
    if (angka1 > angka3) {
        angka1 = angka1;
    } else {
        angka1 = angka3;
    }

    //menampilkan angka terbesar yang ada pada variabel angka1
    cout << "\nNilai Terbesar adalah " << angka1 << endl;
}
