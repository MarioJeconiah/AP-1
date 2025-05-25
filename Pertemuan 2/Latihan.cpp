#include <iostream> // header untuk c++
#define pi 3.14 
// konstanta pi dengan nilai 3.14  
using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library 

int main(){ // mulai program utama
    float jari, volume, luaspermukaan; // deklarasi variabel jari, volume dan luaspermukaan tipe data float 
    cout << "Masukkan jari jari: "; // menampilkan output
    cin >> jari; // menerima inputan dan disimpan di variabel jari

  
    luaspermukaan = 4 * pi * jari * jari;   // volume = pi * 4 / 3* jari * jari * jari;

    volume = 4/3; // memberi nilai volume = 4/3

    cout << "volume adalah: " << volume << endl; // menampilkan output
    cout << "luas permukaan adalah: " << luaspermukaan << endl; // menampilkan output 
}
