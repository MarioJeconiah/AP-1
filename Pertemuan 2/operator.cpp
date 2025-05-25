#include <iostream> // header untuk c++

using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library

int main(){ // mulai program utama
    int a, b; // menginisialisasi variabel a dan b bertipe data integer

    system("CLS"); // membersihkan terminal

    //Assignment Operator (=)
    a = 3; // memberi nilai variabel a adalah 3
    b = 5; // memberi nilai variabel b adalah 5

    //Aritmethical Operator (+, -, /, *, %)
    /* int tambah = a + b; inisialisasi variabel tambah tipe data integer dan nilai adalah variabel a + b
    int kurang = a - b; inisialisasi variabel kurang tipe data integer dan nilai adalah variabel a - b 
    int kali = a * b; inisialisasi variabel kali tipe data integer dan nilai adalah variabel a * b 
    float bagi = (float) a / (float) b; // tipe casting mengubah tipe data dari sebuah variabel
    int modulo = a % b; // inisialisasi variabel modulo tipe data integer dengan nilai adalah sisa bagi a dengan b
    // menampilkan output
    cout << "Hasil penjumlahan : " << tambah << endl;
    cout << "Hasil pengurangan : " << kurang << endl;
    cout << "Hasil perkalian : " << kali << endl;
    cout << "Hasil pembagian : " << bagi << endl;
    cout << "Hasil sisa bagi : " << modulo << endl;*/

    // Relational Operator
    // menampilkan output
    /*cout << (a == b) << endl;
    cout << (a > b) << endl;
    cout << (a >= b) << endl;
    cout << (a < b) << endl;
    cout << (a <= b) << endl;
    cout << (a != b) << endl; */

    // Logical Operator (&&, ||, !!) dan menampilkan output berdasarkan hasil operasi logic
    /*cout << (true && true) << endl; 
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl; */

    /* cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl; */

    /* cout << !true << endl;
    cout << !false << endl; */

    // Bitwise Operator (&, |, ~, ^, <<, >>) --> Operasi Biner dan menampilkan output berdasarkan hasil operasi bitwise
    /* cout << (5 & 7) << endl;
    cout << (5 | 7) << endl;
    cout << (5 ^ 7) << endl;
    cout << (~7) << endl;
    cout << (7 << 2) << endl;
    cout << (7 >> 2) << endl; */

    // Shorthand dan menambahkan nilai ke variabel
    // a += 7 // a = a + 7
    /* a += 7;
    cout << a << endl; 

    a -= 7; mengurangkan nilai ke variabel
    cout << a << endl; menampilkan output

    a *= 7; mengalikan nilai ke variabel
    cout << a << endl; menampilkan output

    a /= 7; membagikan nilai ke variabel
    cout << a << endl; menampilkan output */ 

    // Increment % Decrement
    // Pre Increment 
    /* cout << a << endl; menampilkan output
    cout << ++a << endl; output ketika a pre increment

    cout << b << endl; menampilkan output
    cout << ++b << endl; output ketika b pre increment */

    // Post Increment
    /* cout << a << endl; menampilkan output
    cout << a++ << endl; output ketika a post increment
    cout << a << endl; menampilkan nilai output a yang bertambah 1
    
    cout << b << endl; menampilkan output
    cout << b++ << endl; output ketika b post increment
    cout << b << endl; menampilkan nilai output b yang bertambah 1 */ 

    //Pre Decrement
    /* cout << a << endl; menampilkan output
    cout << --a << endl; menampilkan nilai ketika a pre decrement

    cout << b << endl; menampilkan output
    cout << --b << endl; menampilkan nilai ketika b pre decrement*/

    // Post Decrement
    cout << a << endl; // menampilkan output
    cout << a-- << endl; // menampilkan output ketika a post decrement
    cout << a << endl; // menampilkan nilai output a yang berkurang 1
    
    cout << b << endl; // menampilkan output
    cout << b-- << endl; // menampilkan output ketika b post decrement
    cout << b << endl; // menampilkan nilai output b yang berkurang 1
} 
