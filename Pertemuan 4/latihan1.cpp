#include <iostream> // header untuk c++

using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library 

int main(){ // mulai program
    string kalimat; // inisialisasi variabel kalimat tipe data string
    int i; // inisialisasi variabel i tipe data integer

    cout << "Masukkan kalimat : "; // menampilkan output
    getline(cin, kalimat); // membaca 1 baris inputan dan disimpan di variabel kalimat

    
    for (i = 0; i < kalimat.length(); i++) {  // pengulangan sebanyak panjang karakter dari inputan string
        kalimat[i] = toupper(kalimat [i]); //mengubah karakter mulai dari awal sampai akhir menjadi huruf besar
    }

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl; // menampilkan output

    return 0; // mengembalikan nilai dan program selesai
}
