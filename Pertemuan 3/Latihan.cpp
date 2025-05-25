#include <iostream> // header untuk c++
using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library     

int main(){ // mulai program
    int nilai; // inisialisasi variabel nilai bertipe data integer

    cin >> nilai; // menerima inputan dan disimpan di variabel nilai

    if (nilai % 10 == 0){ // pengkondisian jika sisa bagi nilai dengan 10 adalah 0 maka jalankan instruksi
        cout << "Habis dibagi 10"; // menampilkan output
    }

    else if (nilai % 5 == 0){ // jika pengkondisian sebelumnya salah lanjut ke pengkondisian baru yang dimana jika sisa bagi nilai dengan 5 adalah 0 maka jalankan instruksi
        cout <<"Habis dibagi 5"; // menampilkan output
    }

    else { // jika semua pengkondisian salah sebelumnya jalankan instruksi berikut
        cout <<"tidak habis dibagi 5 atau 10"; // menampilkan output
    }
}
