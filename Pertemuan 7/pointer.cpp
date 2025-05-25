#include <iostream> // header untuk c++
using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library 

void penjumlahan(int a, int b) { // function penjumlahan tipe data void dengan parameter formal integer a dan integer b
    cout << a + b << endl; // menampilkan output
}

void penjumlahanPointer (int *a, int *b) { // function penjumlahanPointer tipe data void dengan parameter formal variabel pointer integer a dan variabel pointer integer b
    *a += *b; // variabel pointer a ditambah variabel pointer b
    cout << *a << endl; // menampilkan output
}

void doubleValue (int *a) { // function doubleValue tipe data void dengan parameter formal variabel pointer a
    *a *= 2; // mengkali variabel pointer a dengan 2
    cout << *a << endl; // menampilkan output
}

int main() { // mulai program utama
    system("CLS"); // bersihkan terminal

    // Deklarasi Pointer
    int number = 35; // inisialisasi variabel number tipe data integer
    int *pointer_number = &number; // inisialisasi variabel pointer pointer_number tipe data integer adalah alamat dari variabel number
    
    // menampilkan output
    // cout << "Isi variabel number = " << number << endl; 
    // cout << "Alamat memori variabel number = " << &number << endl;
    // cout << "Isi variabel pointer_number = " << pointer_number << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;


    // Pointer Operation
    // *pointer_number = 25; // inisialisasi variabel pointer pointer_number
    // menampilkan output
    // cout << "Isi variabel number = " << number << endl; 
    // cout << "Alamat memori variabel number = " << &number << endl;
    // cout << "Isi variabel pointer_number = " << pointer_number << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;


    // Pointer in Array
    int num[] = {1, 2, 3, 4, 5}; // inisialisasi variabel num tipe data integer dengan panjang array sebanyak jumlah elemen
    int *pointer_num = num; // inisialisasi variabel pointer pointer_num tipe data integer adalah num
    // menampilkan output
    // cout << "Isi variabel num = " << num[0] << endl;
    // cout << "Alamat memori variabel num = " << &num[3] << endl;
    // cout << "Isi variabel pointer_num = " << pointer_num << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    // cout << endl;

    // *pointer_num += 5; // 6      menambah nilai dari variabel pointer pointer_num dengan 5
    // menampilkan output
    // cout << "Isi variabel num = " << num[0] << endl;
    // cout << "Alamat memori variabel num = " << &num[0] << endl;
    // cout << "Isi variabel pointer_num = " << pointer_num << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    // cout << endl;


    // Pointer in Parameter
    // int num1 = 5; inisialisasi variabel num1 tipe data integer
    // int num2 = 7; inisialisasi variabel num2 tipe data integer
    // penjumlahan(num1, num2); memanggil function penjumlahan dengan parameter aktual num1 dan num2
    // menampilkan output
    // cout << num1 << endl; 
    // cout << num2 << endl;
    // penjumlahanPointer(&num1, &num2); memanggil function penjumlahanPointer dengna parameter aktual variabel alamat num1 dan num2
    // menampilkan output
    // cout << num1 << endl;
    // cout << num2 << endl;

    // Pointer in Pointer
    // int score = 4;  inisialisasi variabel score tipe data integer
    // int *pointer_score = &score; inisialisasi variabel pointer pointer_score tipe data integer
    // int **ptr_pointer_score = &pointer_score; inisialisasi variabel pointer pointer ptr_pointer_score dengan tipe data integer
    // menampilkan output
    // cout << "Isi variabel score " << score << " dan alamat memorinya " << &score << endl;
    // cout << "Isi variabel pointer_score " << pointer_score << " dan isi variabel yang ditunjuk oleh pointer score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    // cout << "Isi variabel ptr_pointer_score " << pointer_score << " dan isi variabel yang ditunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori ptr_score " << &ptr_pointer_score << endl;


    // Dynamic Pointer
    // int *ptr = new int; inisialisasi variabel pointer ptr tipe data integer menunjuk ke memori baru bertipe data integer
    // *ptr = 30;  inisialisasi variabel pointer ptr
    // cout << "Isi variabel ptr = " << *ptr << " alamat variabel ptr = " << &ptr << endl;menampilkan output

    // delete ptr; //deallocation
    // cout << "Isi variabel ptr = " << *ptr << " alamat variabel ptr = " << &ptr << endl; menampilkan output


    // Contoh
    // int n; deklarasi variabel n tipe data integer
    // cout << "Masukkan sebuah angka = "; menampilkan output
    // cin >> n; membaca input dan disimpan di variabel n

    // doubleValue(&n); menjalankan function doubleValue dengan parameter aktual variabel alamat n
    // cout << "Nilai angka setelah di kali 2 = " << n << endl; menampilkan output
}
