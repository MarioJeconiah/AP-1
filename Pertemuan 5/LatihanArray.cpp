#include <iostream> // header untuk c++
using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library 

int main() { // mulai program

    // penjumlahan matriks 2 x 2
    int matriks1[2][2]; // inisialisasi matriks1 array dua dimensi tipe data integer
    int matriks2[2][2]; // inisialisasi matriks2 array dua dimensi dengan tipe data integer
    int hasil[2][2]; // inisialisasi array dua dimensi dengan nama hasil 2x2 dengan tipe data integer

    cout << "Matriks 1 : " << endl; // menampilkan output
    for(int i = 0; i < 2; i++) { // pengulangan sebanyak 2 kali
        for(int j = 0; j < 2; j++) { // pengulangan sebanyak 2 kali
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : "; // menampilkan output
            cin >> matriks1[i][j]; // membaca inputan dan disimpan di variabel matriks1 pada index ke [i] [j]
        }
    }

    cout << "Matriks 2 : " << endl; // menampilkan output
    for(int i = 0; i < 2; i++) { // pengulangan sebanyak 2 kali
        for(int j = 0; j < 2; j++) { // pengulangan sebanyak 2 kali
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : "; // menampilkan output
            cin >> matriks2[i][j]; // membaca inputan dan disimpan di variabel matriks2 pada index ke [i] [j]
        }
    }

    cout << "Hasil Penjumlahan" << endl; // menampilkan hasil 
    for (int i = 0; i < 2; i++) { // pengulangan sebanyak 2 kali
        for(int j = 0; j < 2; j++) { // pengulangan sebanyak 2 kali
            hasil[i][j] = matriks1[i][j] + matriks2[i][j]; // memberi nilai dari hasil index [i] [j] adalah matriks1 [i][j] + matriks2 [i][j]
            cout << hasil[i][j] << " "; // menampilkan hasil index [i][j]
        }
        cout << endl; // pindah baris
    }

}
