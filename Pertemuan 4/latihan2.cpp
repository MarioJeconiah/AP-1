#include <iostream> // header untuk c++

using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library 

int main(){ // mulai program
    string kalimat; // deklarasi variabel kalimat bertipe data string
    int i; // deklarasi variabel i bertipe data integer

    cout << "Masukkan kalimat : "; // menampilkan output
    getline(cin, kalimat); // membaca 1 baris inputan dan disimpan di variabel kalimat

    
    for (i = 0; i < kalimat.length(); i++) { // pengulangan sebanyak panjang karakter dari inputan string
        if (kalimat[i] == 'a'|| kalimat[i] == 'i'|| kalimat[i] == 'u'|| kalimat[i] == 'e'|| kalimat[i] == 'o') // pengkondisian jika adanya huruf vokal di index tersebut
        kalimat[i] = toupper(kalimat [i]); // instruksi mengubah huruf vokal tersebut menjadi huruf kapital
    }

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl; // menampilkan output

    return 0; // mengembalikan nilai dan program selesai
}
