#include <iostream> // header untuk c++
#include <string> // header untuk string
using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library 

struct Mahasiswa { // Mendefinisikan tipe data struct Mahasiswa
    string nama; // deklarasi variabel nama tipe data string
    int umur; // deklarasi variabel umur tipe data integer
    float ipk; // deklarasi variabel ipk tipe data float
};

int main(){ // mulai program utama
    Mahasiswa mhs1; // variabel mhs1 tipe data Mahasiswa
    
    mhs1.nama = "Mario"; // inisialisasi variabel nama dari mhs1 
    mhs1.umur = 19; mhs1.nama = "Mario"; // inisialisasi variabel umur dari mhs1 
    mhs1.ipk = 4.00; mhs1.nama = "Mario"; // inisialisasi variabel nama dari mhs1 
    // menampilkan output
    /*cout << "Akses dengan ." << endl;
    cout << "Nama : " << mhs1.nama << endl;
    cout << "Umur : " << mhs1.umur << endl;
    cout << "IPK : " << mhs1.ipk << endl; */

    Mahasiswa *ptrMhs = &mhs1; // inisialisasi variabel pointer ptrMhs tipe data Mahasiswa adalah variabel alamat mhs1
    // menampilkan output
    cout << "Akses dengan ->" << endl; 
    cout << "Nama : " << ptrMhs->nama << endl;
    cout << "Umur : " << ptrMhs->umur << endl;
    cout << "IPK : " << ptrMhs->ipk << endl;
}
