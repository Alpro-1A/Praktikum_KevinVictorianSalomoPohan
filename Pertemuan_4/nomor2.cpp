#include <iostream>

using namespace std;

int main()
{
    //membuat variabel
    int a;
    //menentukan tinggi segitiga
    cout << "Masukkan tinggi segitiga siku-siku: ";
    cin >> a;

    //melakukan loop sampai tinggi segitiga
    for (int i = 1; i <= a; i++){
        //mencetak spasi
        for (int j = 1; j <= a - i; j++){
            cout << " ";
        }
        //mencetak bintang
        for (int k = 1; k <= i; k++)
        {
            cout << "*" << " ";
    }
    cout << endl;
}
return 0;
}
