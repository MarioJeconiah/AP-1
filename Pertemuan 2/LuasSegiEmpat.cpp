#include <iostream> // header c++

using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library

int main(){ // mulai program utama
    float luas, p, l; // deklarasi variabel luas, p dan l dengan tipe data float

    cout << "Masukkan panjang: "; // menampilkan output
    cin >> p; // menerima inputan dan disimpan di variabel p

    cout << "Masukkan lebar: "; // menampilkan output
    cin >>l; // menerima inputan dan disimpan di variabel l

    luas = p * l; // menghitung luas = p * l
    cout << "luas = " << luas << endl; // menampilkan output

    return 0; // mengembalikan nilai dan program selesai
}
