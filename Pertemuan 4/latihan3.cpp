#include <iostream> // header untuk c++
using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library 

int main(){ // mulai program

    string kalimat; // deklarasi variabel kalimat tipe data string
    cout << "Masukkan kalimat: "; // menampilkan output
    getline(cin, kalimat); // membaca 1 baris inputan dan disimpan di variabel kalimat


    for (int i = 0; i < kalimat.length(); i++){ // pengulangan sebanyak panjang karakter dari inputan string
        for (int j = 0; j <= i; j++){ // pengulangan sebanyak i + 1 kali
            cout << kalimat[j]; // tampilkan karakter index ke j dari variabel kalimat
        }
    }
}
