#include <iostream>
using namespace std;

// fungsi tanpa nilai balikkan
void tampilkanPesan(){
    cout << "==== SELAMAT DATANG DI AP 1 ====" << endl;
}

// fungsi dengan nilai balikkan
int tambah(int a, int b){
    return a + b;
}
// fungsi overload
int kali (int a, int b){
    return a * b;
}

double kali(double a, double b){
    return a * b;
}

// fungsi rekursif : menghitung nilai faktorial
int faktorial (int n){
    if (n == 0 || n == 1){
        return 1;
        } else {
            return n * faktorial (n - 1);
        }
    }


int main (){
    system("CLS");

    // menggunakan fungsi tanpa nilai balikkan
    tampilkanPesan();

    int x = 5, y = 3;
    //menggunakan fungsi dengan nilai balikkan
    int hasilTambah = tambah(x,y);
    cout << "Hasil penjumlahan : " << hasilTambah << endl;

    // menggunakan fungsi overload
    int hasilKali = kali(x,y);
    double hasilKaliDouble = kali(5.5, 2.0);
    cout << "Hasil perkalian (int) : " << hasilKali << endl;
    cout << "Hasil perkalian (double) :" << hasilKaliDouble << endl;

    // menggunakan fungsi rekursif
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah " << faktorial(angka) << endl; 
}