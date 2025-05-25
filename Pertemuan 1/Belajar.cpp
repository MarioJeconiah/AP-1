#include <iostream> // header untuk c++
#include <conio.h> // header untuk getche() dan getch()
using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library

int main () { // program utama

    string nama; // deklarasi variabel nama bertipe data string
    char kom, jenisKelamin; // deklarasi variabel kom dan jenisKelamin tipe data char
    int nim; // deklarasi variabel nim bertipe data integer
    float ip; // deklarasi variabel ip bertipe data float
    
    /* ini untuk komentar 
    beberapa baris */

    cout << "Hello world!" << endl; //menampilkan output

    cout << "Masukkan nama : "; // menampilkan output
    // cin >> nama; // membaca input dan disimpan di variabel nama
    getline(cin, nama); // agar karakter spasi bisa terbaca dan membaca input yang akan disimpan di variabel nama

    cout << "Masukkan KOM : "; // menampilkan output
    cin >> kom; // membaca input dan disimpan di variabel kom

    cout << "Masukkan NIM : "; // menampilkan output
    cin >> nim; // membaca input dan disimpan di variabel nim

    cout << "Masukkan IP : "; // menampilkan output 
    cin >> ip; // membaca input dan disimpan di variabel ip

    cout << "Masukkan jenis kelamin (L/P) : "; // menampilkan output
    jenisKelamin = getche(); // agar karakter langsung tampil, jadi ga perlu tekan enter dan membaca input serta menyimpan input di variabel jenisKelamin

    /* untuk output */
    cout << "\n" << nama << endl; // menampilkan output
    cout << kom << endl; // menampilkan output
    cout << nim << endl; // menampilkan output
    cout << ip << endl; // menampilkan output
    putchar(jenisKelamin); // untuk menampilkan karakter jenis kelamin 

    getch(); // karakter yang diketik ga ditampilkan di layar
}
