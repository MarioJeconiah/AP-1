#include <iostream> // header untuk c++
using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library 

void sapa(string nama) { // membuat function baru bertipe data void dengan parameter formal nama tipe data string
    cout << "Halo " << nama << "! Selamat belajar C++" << endl; // menampilkan output
}


int main(){ // mulai program utama
    string namaPengguna = "Mario"; // inisialisasi variabel namaPengguna dengan tipe data string 

    sapa(namaPengguna); // menjalankan function sapa dengan parameter aktual namaPengguna

    return 0; // mengembalikan nilai dan program selesai
}
