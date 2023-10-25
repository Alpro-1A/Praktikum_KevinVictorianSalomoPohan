#include <iostream>

using namespace std;

int main()
{
// menukar nilai dengan variabel tambahan
    int a, b, c;
    a = 10;
    b = 8;

    c = a;
    a = b;
    b = c;

    cout << "Dengan Variabel Tambahan" << endl;
    cout << "Nilai A : " << a << endl;
    cout << "Nilai B : " << b << endl << endl << endl;


    // menukar nilai tanpa variabel
    int x, y;
    x = 10;
    y = 8;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << "Tanpa Variabel Tambahan" << endl;
    cout << "Nilai X : " << a << endl;
    cout << "Nilai Y : " << b << endl;

    return 0;
}
