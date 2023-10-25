#include <iostream>

using namespace std;

int main()
{
    //membuat variabel
    int nilai ;

    //membuat input untuk variabel nilai
    cout << "Masukan Nilai (0 - 100): ";
    cin >> nilai;

    //menentukan grade A
    if (nilai >= 90 && nilai <= 100){
        cout << "Nilai anda " << nilai << " Selamat anda mendapat Grade A" << endl;
    }
    //menentukan grade B
    else if (nilai >= 80 && nilai <= 89){
        cout << "Nilai anda " << nilai << " Anda mendapat Grade B" << endl;
    }
    //menentukan grade C
    else if (nilai >= 70 && nilai <= 79){
        cout << "Nilai anda " << nilai << " Anda mendapat Grade C" << endl;
    }
    //menentukan grade D
    else if (nilai >= 60 && nilai <= 69){
        cout << "Nilai anda " << nilai << " Anda mendapat Grade D" << endl;
    }
    //menentukan grade E
    else if (nilai >= 0 && nilai <= 59){
        cout << "Nilai anda " << nilai << " Anda mendapat Grade E" << endl;
    }
    //menampilkan hasil input nilai yang tidak valid
    else {
        cout << "Nilai yang anda masukan tidak valid " << endl;
    }

    cout << "Terima Kasih" << endl;
    return 0;
}
