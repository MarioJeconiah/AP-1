#include <iostream> // header untuk c++
#include <vector> // header untuk vector
using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library 

int main () { // mulai program utama
    // Vector Declaration & Initialization

    vector<string> nama_karyawan = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"}; // inisialisasi variabel vector nama_karyawan tipe data string 

    // for (string karyawan : nama_karyawan) { pengulangan sebanyak jumlah elemen pada variabel vector nama_karyawan
    //     cout << karyawan << endl; tampilkan output
    // }

    // Add data to Vector
    nama_karyawan.push_back("Dhafa"); // menambahkan data ke variabel vektor nama_karyawan di index paling terakhir

    // for (int i = 0; i < nama_karyawan.size(); i++){ pengulangan sebanyak ukuran elemen vektor nama_karyawan
    //     cout << nama_karyawan[i] << endl; tampilkan output
    // }

    // Delete data from Vector
    nama_karyawan.pop_back();  // menghapus elemen terakhir pada variabel vektor nama_karyawan

    nama_karyawan.erase(nama_karyawan.begin() + 3); // menghapus elemen keempat pada variabel vektor nama karyawan

    for (int i = 0; i < nama_karyawan.size(); i++){ // pengulangan sebanyak jumlah elemen pada variabel vektor nama_karyawan
        cout << nama_karyawan[i] << endl; // tampilkan output 
    }
}
