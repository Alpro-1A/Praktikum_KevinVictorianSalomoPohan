#include <iostream>

using namespace std;

int main ()
{
    //membuat variabel
    int bentuk;
    float a,b,luas;

    //membuat pilihan bangun datar yang akan dihitung
    cout << "Program menghitung Luas \n\nPilih Bangun Datar yang akan dihitung \n1. Persegi\n2. Persegi Panjang\n3. Segitiga" << endl <<endl;
    cout << "Masukan Angka Pilihan : " << endl;
    cin >> bentuk;


    //membuat switch untuk menghitung bangun datar yang dipilih
    switch (bentuk)
    {
    case 1:
        //menghitung luas persegi
        cout << "\nMasukan Sisi : " << endl;
        cin >> a;
        luas = a * a;

        cout << "\nLuas Segitiga dengan sisi " << a << " adalah " << luas << endl;
        break;

    case 2:
        //menghitung luas persegi panjang
        cout << "\nMasukan Panjang : " << endl;
        cin >> a;
        cout << "Masukan Lebar : " << endl;
        cin >> b;
        luas = a * b;

        cout << "\nLuas Persegi Panjang dengan panjang " << a << " dan lebar " << b << " adalah " << luas << endl;
        break;

    case 3:
        //menghitung luas segitiga
        cout << "\nMasukan Alas : " << endl;
        cin >> a;
        cout << "Masukan Tinggi : " << endl;
        cin >> b;
        luas = a * b /2;

        cout << "\nLuas Segitiga dengan alas " << a << " dan tinggi " << b << " adalah " << luas << endl;
        break;
    }

}
