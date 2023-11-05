#include <iostream>

using namespace std;

int main()
{
    //Membuat Variabel
    int batas,
    TotalGanjil = 0,
    TotalGenap = 0,
    TotalPrima = 0;

    //Menentukan Batasan
    cout << "Batas Bilangan : ";
    cin >> batas;


    //Menentukan bilangan ganjil
    cout << "Bilangan Ganjil antara 1 dan " << batas << " adalah : " ;
    for (int a = 1 ; a <= batas ; a += 2){
        cout << a << " ";
        TotalGanjil += a;
        }

    cout << endl;

    //Menentukan bilangan genap
    cout << "Bilangan Genap antara 1 dan " << batas << " adalah : " ;
    for (int b = 2 ; b <= batas ; b += 2){
        cout << b << " ";
        TotalGenap += b;
        }
    cout << endl;

    //menentukan bilangan prima
    cout << "Bilangan Prima antara 1 dan " << batas << " adalah : " ;
    for (int c = 2 ; c <= batas ; ++c){

        int Bprima = 1;
        for (int d = 2; d * d <= c; ++d){
            if (c % d == 0){
                Bprima = 0;
                break;
            }
        }
        if (Bprima == 1){
        cout << c << " ";
        TotalPrima += c;
        }
       }
    cout << endl;

    //menampilkan jumlah bilangan ganjil
    cout << "Jumlah semua Bilangan Ganjil antara 1 dan " << batas << " adalah : " << TotalGanjil ;

    cout << endl;
    //menampilkan jumlah bilangan genap
    cout << "Jumlah semua Bilangan Genap antara 1 dan " << batas << " adalah : " << TotalGenap ;

    cout << endl;
    //menampilkan jumlah bilangan prima
    cout << "Jumlah semua Bilangan Prima antara 1 dan " << batas << " adalah : " << TotalPrima ;

    cout << endl;

    //menghitung faktor bilangan ganjil
    cout << "Faktor Bilangan Ganjil antara 1 dan " << batas << " adalah : " ;
    for (int e = 1; e <= TotalGanjil; e++) {
        if (TotalGanjil % e == 0) {
            cout << e << " ";
        }
    }
    cout << endl;

    //menghitung faktor bilangan genap
    cout << "Faktor Bilangan Genap antara 1 dan " << batas << " adalah : " ;
    for (int f = 1; f <= TotalGenap; f++) {
        if (TotalGenap % f == 0) {
            cout << f << " ";
        }
    }
    cout << endl;

    //menghitung faktor bilangan prima
    cout << "Faktor Bilangan Prima antara 1 dan " << batas << " adalah : " ;
    for (int g = 1; g <= TotalPrima; g++) {
        if (TotalPrima % g == 0) {
            cout << g << " ";
        }
    }
    cout << endl;
    return 0;

}
