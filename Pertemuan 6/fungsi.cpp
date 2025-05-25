#include <iostream> // header untuk c++
using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library 

// fungsi tanpa nilai balikkan
void tampilkanPesan(){ // function tampilkanPesan dengan tipe data void 
    cout << "==== SELAMAT DATANG DI AP 1 ====" << endl; // menampilkan output
}

// fungsi dengan nilai balikkan
int tambah(int a, int b){ // function tambah tipe data integer dengan parameter formal integer a dan integer b
    return a + b; // mengembalikan nilai tambah menjadi a + b
}
// fungsi overload
int kali (int a, int b){ //function kali tipe data integer dengan parameter formal integer a dan integer b
    return a * b; // mengembalikan nilai kali menjadi a kali b
}

double kali(double a, double b){ // function kali tipe data double dengan parameter formal double a dan double b
    return a * b; // mengembalikan nilai menjadi a kali b
}

// fungsi rekursif : menghitung nilai faktorial
int faktorial (int n){ // function faktorial tipe data integer dengan parameter formal integer n
    if (n == 0 || n == 1){ // pengkondisian jika nilai dari n adalah 0 atau 1 maka jalankan perintah
        return 1; // mengembalikan nilai menjadi 1
        } else { // jika kondisi salah jalankan instruksi ini
            return n * faktorial (n - 1); // mengembalikan nilai menjadi n * faktorial (n - 1)
        }
    }


int main (){ // program utama
    system("CLS"); // bersihkan terminal

    // menggunakan fungsi tanpa nilai balikkan
    tampilkanPesan(); // menggunakan function tampilkanPesan

    int x = 5, y = 3; // inisialisasi variabel x dan y dengan tipe data integer 
    //menggunakan fungsi dengan nilai balikkan
    int hasilTambah = tambah(x,y); // inisialisasi hasilTambah tipe data integer adalah function tambah dengan parameter aktual x dan y
    cout << "Hasil penjumlahan : " << hasilTambah << endl; // menampilkan output

    // menggunakan fungsi overload
    int hasilKali = kali(x,y); // inisialisasi hasilKali tipe data integer adalah function kali dengan parameter aktual x dan y
    double hasilKaliDouble = kali(5.5, 2.0); // inisialisasi hasilKaliDouble tipe data double adalah function kali dengan parameter yang diberikan 5.5 dan 2.0
    cout << "Hasil perkalian (int) : " << hasilKali << endl; // menampilkan output
    cout << "Hasil perkalian (double) :" << hasilKaliDouble << endl; // menampilkan output

    // menggunakan fungsi rekursif
    int angka = 5; // menginisialisasi variabel angka tipe data integer
    cout << "Faktorial dari " << angka << " adalah " << faktorial(angka) << endl; // menampilkan output
}
