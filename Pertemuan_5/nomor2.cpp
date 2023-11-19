#include <iostream>

using namespace std;

int tinggi;

int segitiga (int tinggi){
    for (int i = 1; i <= tinggi; i++){
        //mencetak spasi
        for (int j = 1; j <= tinggi - i; j++){
            cout << " ";
        }
        //mencetak bintang
        for (int k = 1; k <= i; k++)
        {
            cout << "*" << " ";
    }
    cout << endl;
}
}

int main (){
    cout << "Masukkan tinggi segitiga siku-siku: ";
    cin >> tinggi;
    cout << endl;
    segitiga(tinggi);
}
