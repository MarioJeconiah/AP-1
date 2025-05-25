#include <iostream> // header untuk c++
using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library 

string namaGLobal = "Ilmu"; // inisialisasi variabel namaGLobal tipe data string

void namaVariabel(){ // function namaVariabel tipe data void
    string namaLokal = "Komputer"; // inisialisasi variabel namaLokal tipe data string 

    // coba akses
    cout << namaLokal << endl; // menampilkan output

    // coba akses
    cout << namaGLobal << endl; // menampilkan output
}

int main(){ // mulai program utama
    namaVariabel(); // memanggil function namaVariabel

    // coba akses
    cout << namaGLobal << endl; // menampilkan output
    
    // coba akses
    // cout << namaLokal << endl;    ga iso

}
