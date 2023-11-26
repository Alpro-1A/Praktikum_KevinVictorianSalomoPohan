#include <iostream>

using namespace std;

int main (){

    int nilai;
    int NilaiTertinggi = 0;
    int IndexTertinggi;
    int jumlahnilai;

    //menentukan panjang array
    cout << "masukan jumlah nilai yang akan dimasukan : " ;
    cin >> jumlahnilai ;
    cout << endl;

    int aray[jumlahnilai];

    //memasukan nilai array
    for (int c =0; c < jumlahnilai; c++){
        cout << "masukan nilai aray ke " << c << " : " ;
        cin >> nilai;
        aray[c] = nilai;
    }

    //menentukan nilai dan index tertinggi
    for (int i = 0; i < jumlahnilai; i++){
        if( NilaiTertinggi < aray[i]){
            NilaiTertinggi = aray[i];
            IndexTertinggi = i;
        }
    }

    cout << endl << endl;

    cout << "Nilai Terbesar adalah " << NilaiTertinggi << endl;
    cout << "Dari index ke " << IndexTertinggi;
    cout << endl;


    return 0;
}
