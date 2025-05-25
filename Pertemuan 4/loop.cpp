#include <iostream> // header untuk c++
using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library 


int main(){ // mulai program
    // Goto Label
    // Hello World, Fasilkom-TI Ilmu Komputer, IKLC
    // -> Hello World, IKLC, Ilmu Komputer, Fasilkom-TI

    /* a:
        cout << "Hello World" << endl; menampilkan output
        goto d; lompat ke label d
    b:
        cout << "Fasilkom-TI" << endl; menampilkan output
        return 0; pengembalian nilai dan program berakhir
    c:
        cout << "Ilmu Komputer" << endl; menampilkan output
        goto b; lompat ke label b
    d:
        cout << "IKLC" << endl; menampilkan output
        goto c; */ // lompat ke label c

        // menampilkan bilangan genap 10 - 2 dengan goto
        
        /*int i = 10;
        genap:

        if (i % 2 == 0){ pengkondisian jika sisa bagi i dengan 2 adalah 0 maka jalankan instruksi
            cout << i << endl; menampilkan output
        } i--;  kurangi nilai dari variabel i dengan 1

        if (i >=2){ pengkondisian jika nilai i >= 2 maka jalankan instruksi
            goto genap; lompat ke label genap
        } */

        // Statement While 
        /* int i = 1; inisialisasi variabel i dengan tipe data integer dan nilai adalah 1
        while(i <= 10){ pengkondisian pengulangan selama kondisi i <= 10
            if (i % 2 == 0){ pengkondisian jika sisa bagi i dengan 2 adalah 0 maka jalankan instruksi
                cout << i << " "; menampilkan output
            } i ++; iterasi nilai dari variabel i
        } */

        // Statement Do-While
        /* int i = 1; inisialisasi variabel
        i dengan tipe data integer dan nilai adalah 1
        do { lakukan instruksi ini
            cout << i << endl; menampilkan output
        }   while (i <= 0); */ // pengkondisian pengulangan selama kondisi i <= 0

        // Statement for 
        // for (inisialisasi, kondisi, increase)
        /* for (int i = 1; i <= 10; i+=2) { pengulangan dengan inisialisasi nilai variabel i = 1, kondisi i <= 10, dan tambah dengan 2 
            cout << "Hello World" << endl; menampilkan output
        } */

        // nested for
        // ***** 5 x 5
        /* for (int i = 1; i <= 5; i++) { pengulangan sebanyak 5 kali
            for (int j = 1; j <= 5; j++){ pengulangan sebanyak 5 kali
                cout << " * "; menampilkan output
            }
            cout << endl; pindah ke baris baru
        } */

        // segitiga siku-siku
        for (int i = 1; i <= 5; i ++){ // pengulangan sebanyak 5 kali
            for (int j = 1; j <= i; j++){ // pengulangan sebanyak i kali
                cout <<"* "; // menampilkan output
            }
            cout << endl; // pindah baris
        }
 }
