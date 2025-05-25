#include <iostream> // header untuk c++
#include <string> // header untuk string
#include <vector> // header untuk vector

using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library 

struct Alamat { // Mendefinisikan tipe data struct Alamat
    string jalan; // deklarasi variabel jalan tipe data string
    string kota; // deklarasi variabel kota tipe data string
    int kodePos; // deklarasi variabel kodePos tipe data integer
};

struct Mahasiswa { // Mendefinisikan tipe data struct Mahasiswa
    string nama; // deklarasi variabel nama tipe data string
    int umur; // deklarasi variabel umur tipe data integer
    float ipk; // deklarasi variabel ipk tipe data float
    Alamat alamat; // nested struct
};

int main(){ // mulai program utama
    system("CLS"); // bersihkan terminal
    Mahasiswa mhs1; // deklarasi variabel mhs1 tipe data Mahasiswa

    /*mhs1.alamat.jalan = "Jalan Katalia";  inisialisasi variabel jalan dari mhs1 ke alamat lalu ke jalan
    mhs1.alamat.kodePos = 20114;  inisialisasi variabel kodePos dari mhs1 ke alamat lalu ke kodePos
    mhs1.alamat.kota = "Medan";  inisialisasi variabel kota dari mhs1 ke alamat lalu ke kota
    
    cout << "Alamat " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodePos << endl; */ // menampilkan output
    vector <Mahasiswa> mahasiswa; // deklarasi variabel vektor Mahasiswa tipe data Mahasiswa
    int n; // deklarasi variabel n tipe data integer
    cout << "Masukkan banyak mahasiswa : "; // menampilkan output
    cin >> n; // membaca input dan disimpan di variabel n

    for (int i = 0; i < n; i++) { // pengulangan dari 0 sampai lebih kecil dari n
        cout << "Mahasiswa " << i + 1 << endl; // menampilkan output

        cin.get(); // Menunggu user menekan Enter
        cout << "Masukkan nama : "; // menampilkan output
        getline(cin, mhs1.nama); // membaca inputan 1 baris dan disimpan di variabel nama dari mhs1

        cout << "Masukkan umur : "; // menamppilkan output
        cin >> mhs1.umur; // membaca inputan 1 baris dan disimpan di variabel umur dari mhs1

        cout << "Masukkan ipk : "; // menampilkan output
        cin >> mhs1.ipk; // membaca inputan 1 baris dan disimpan di variabel ipk dari mhs1

        mahasiswa.push_back(mhs1); // menyimpan data mhs1 ke variabel vektor mahasiswa

    }

    for (int i = 0; i < n; i++) { // pengulangan dari 0 sampai < n
        // menampilkan output
        cout << "Mahasiswa" << i + 1 << endl;
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "umur: " << mahasiswa[i].umur << endl;
        cout << "IPK: " << mahasiswa[i].ipk << endl;

        
    }

}
