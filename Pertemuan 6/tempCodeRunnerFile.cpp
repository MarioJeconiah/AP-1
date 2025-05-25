#include <iostream> // header untuk c++
using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library 

void sapa(string nama) { // function sapa tipe data void dengan parameter formal string nama
    cout << "Halo" << nama << "! Selamat belajar C++" << endl; // menampilkan output
}


int main(){ // mulai program utama
    string namaPengguna = "Mario"; // inisialisasi variabel namaPengguna tipe data string

    sapa(namaPengguna); // menggunakan function sapa dengan parameter aktual namaPengguna

    return 0; // mengembalikan nilai dan program selesai
}
