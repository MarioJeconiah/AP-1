#include <iostream> // header untuk c++
#include <string> // header untuk string
#include <array> // header untuk array
using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library 

int main () { // mulai program utama

    // Array Declaration & Initialization
    /* 2 Cara Membuat Array */

    // cara 1 : array kosong 
    // string nama[5]; deklarasi variabel nama dengan tipe data string panjang array 5

    // nama[0] = "Alya"; inisialisasi pada elemen pertama dari array nama
    // nama[1] = "Parul"; inisialisasi pada elemen kedua dari array nama
    // nama[2] = "Syukron"; inisialisasi pada elemen ketiga dari array nama
    // nama[3] = "Aurick"; inisialisasi pada elemen keempat dari array nama
    // nama[4] = "Dzakwan"; inisialisasi pada elemen kelima dari array nama

    // cara 2 : array yang langsung diisi
    // string nama[5] = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"}; inisialisasi variabel nama tipe data string dengan panjang array 5 
    // string nama[] = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"}; inisialisasi variabel nama tipe data string dengan panjang adalah jumlah dari elemen

    // Ascending Element in Array
    // cout << nama[0] << endl; menampilkan output variabel nama elemen ke 1
    // cout << nama[1] << endl; menampilkan output variabel nama elemen ke 2
    // cout << nama[2] << endl; menampilkan output variabel nama elemen ke 3
    // cout << nama[3] << endl; menampilkan output variabel nama elemen ke 4
    // cout << nama[4] << endl; menampilkan output variabel nama elemen ke 5

    // Menggunakan looping
    // for (int i = 0; i < 5; i++) { pengulangan sebanyak 5 kali
    //     cout << nama[i] << endl; // menampilkan output variabel nama elemen ke i
    // }

    // Descending Element in Array use Looping
    // for (int i = 4; i >= 0; i--) { pengulangan sebanyak 5 kali tetapi i dimulai dari 4 menurun sampai 0
    //     cout << nama[i] << endl; // menampilkan output variabel nama elemen ke i
    // }
    

    // Multidemensional Array
    // 1 3 5
    // 2 4 6

    // int matrix[2][3] = {{1,3,5},{2,4,6}}; inisialisasi variabel matrix tipe data integer dengan array 2x2
    // for(int i = 0; i < 2; i++){ pengulangan sebanyak 3 kali
    //     for(int j = 0; j < 3; j++){ pengulangan sebanyak 3 kali 
    //         cout << matrix[i][j] << " "; menampilkan variabel matrix index[i][j]
    //     }
    //     cout << endl; pindah baris
    // }

    // int matrix[4][6]  = { deklarasi variabel matrix tipe data integer dengan array 2x2
    //     {1, 2, 3, 4, 5, 6}, inisialisasi isi dari variabel matrix setiap elemen
    //     {7, 8, 9, 10, 11, 12},
    //     {13, 14, 15, 16, 17, 18},
    //     {19, 20, 21, 22, 23, 24}
    // };
    
    // for (int i = 0; i < 4; i++) { pengulangan sebanyak 4 kali
    //     for (int j = 0; j < 6; j++) { pengulangan sebanyak 6 kali
    //         cout << matrix[i][j] << "\t"; menampilkan variabel matrix index ke [i][j]
    //     }
    //     cout << endl; pindah baris
    // }


    // String (array of characters) 
    // string nama = "Naufal"; inisialisasi variabel nama tipe data string 
    // cout << nama[0] << endl; menampilkan output
    // cout << nama[2] << endl; menampilkan output

    // for(int i = 0; i < nama.length(); i++){ pengulangan sebanyak panjang variabel nama
    //     cout << nama[i] << endl; menampilkan output variabel nama index [i]
    // }
    
    // string s1 = "Hello"; inisialisasi variabel s1 tipe data string
    // string s2 = "world"; inisialisasi variabel s2 tipe data string

    /* 1. s1 = s2*/ 
    // s1 = s2; Menyalin isi s2 ke s1
    // cout << "s1 = " << s1 << endl; menampilkan output 

    /* 2. s1 = s1 + s2 */
    // s1 = "Hello"; inisialisasi s1 ke nilai awal
    // cout << "Hasil : " << s1 + s2 << endl; menampilkan output

    /* 3. s1.length() */
    // cout << s1.length() << endl; menampilkan panjang dari string s1
    // cout << (s1 + s2).length() << endl; menampilkan panjang hasil dari string s1 + string s2

    /* 4. s1.substr(n,m) */
    // cout << s1.substr(2,4) << endl; menampilkan karakter dari index ke 2 dan diambil 4 karakter
    // cout << (s1 + s2).substr(5, 3) << endl; menampilkan karakter dari index ke 5 dan diambil 3 karakter


    // Operator sizeof() 
    // int angka = 10; inisialisasi variabel angka tipe data integer
    // cout << sizeof(angka); menampilkan ukuran memori yang digunakan oleh variabel angka

    // int nilai[] = {10, 20, 30, 40, 50}; inisialisasi variabel nilai tipe data integer dengan panjang array sesuai isi elemen
    // cout << sizeof(nilai); menampilkan ukuran memori yang digunakan oleh variabel nilai

    // string s ="Alya"; inisialisasi variabel s tipe data string
    // cout << sizeof(s); menampilkan ukuran memori yang digunakan variabel s
    // cout << s.length(); menampilkan panjang dari nilai vairbale s

    
    // string nama_karyawan[] ={"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"}; inisialisasi variabel nama karyawan tipe data string dengan panjang array sesuai isi elemen
    // int n = sizeof(nama_karyawan) / sizeof(string); inisialisasi variabel n tipe data integer adalah ukuran memori variabel nama_karyawan / ukuran memori 1 elemen string
    // cout << n << endl; menampilkan output

    
    // Array Library
    // array<float, 5> nilai = {87.2, 90, 100, 95.7, 78.5}; inisialisasi variabel nilai tipe data float dengan panjang array 5
    // cout << "Nilai : "; menampilkan output
    // for (int i = 0; i < nilai.size(); i++) { pengulangan sebanyak jumlah elemen
    //     cout << nilai[i] << " "; menampilkan output variabel nilai index [i]
    // }

    // for (float n : nilai) { pengulangan sebanyak jumlah elemen pada array nilai
    //     cout << n << " "; menampilkan output
    // }
}
