#include <iostream> // header untuk c++
#include <string> // header untuk string

using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library 

class ContohAkses{ // membuat class baru dengan nama ContohAkses
    private: // bagian private yang hanya bisa diakses di class ini saja
        int privateVar; // deklarasi variabel privateVar tipe data integer

    protected: // bagian protected yang hanya bisa diakses di class ini dan turunannya
        int protectedVar; // deklarasi variabel protectedVar tipe data integer

    public: // bagian public yang bisa diakses dari mana saja
        int publicVar; // deklarasi variabel publicVar tipe data integer

    // constructor
    ContohAkses() { // contrusctor kelas ContohAkses
        privateVar = 1; // inisialisasi variabel privateVar
        protectedVar = 2; // inisialisasi variabel protectedVar
        publicVar = 3; // inisialisasi variabel publicVar
    }

    void tampilkanSemua () { // function tampilkanSemua dengan tipe data void
        // menampilkan output
        cout << "Akses dari dalam class : " <<  endl; 
        cout << privateVar << endl; 
        cout << protectedVar << endl; 
        cout << publicVar << endl; 
    }
};

class Turunan : public ContohAkses { // class baru bernama turunan yang mewarisi kelas ContohAkses
    public: // bagian public yang bisa diakses siapa saja
        void aksesProtected () { // function aksesProtected bertipe data void
            // menampilkan output
            cout << protectedVar << endl;
            cout << publicVar << endl;
            // cout << privateVar << endl; tidak bisa diakses di kelas turunan 
        }
};

int main(){ // mulai program utama
    system("CLS"); // bersihkan terminal
    ContohAkses obj; // inisialisasi obj dari kelas ContohAkses
    obj.tampilkanSemua(); // memanggil function tampilkanSemua dari kelas ContohAkses

    // cout << "\nAkses dari luar class : " << endl;
    // cout << obj.privateVar << endl;  ini error 
    
    // cout << obj.protectedVar << endl; ini error
    // menampilkan output
    cout << obj.publicVar << endl; 
    cout << "\nAkses dari kelas turunan " << endl;
    Turunan tur; // inisialisasi tur dari kelas Turunan 
    tur.aksesProtected(); // memanggil function aksesProtected dari kelas Turunan
}
