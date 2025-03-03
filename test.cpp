#include <iostream>  // input output stream
#include <iomanip>   // data manipulate
#include <conio.h>  //for getchar function 

using namespace std;



int main(){
    cout << "Hello world!" << endl;

    string nama;
    char kom, jenisKelamin;
    int NIM;
    float IP;

    cout <<"Masukkan nama\n";
    getline(cin, nama);   
    cout <<"Masukkan KOM\n";
    cin >> kom;   
    cout <<"Masukkan NIM\n";
    cin >> NIM;   
    cout <<"Masukkan IP\n";
    cin >> IP; 
    cout << "masukkan jenis kelamin (L/P) : " << endl;
    jenisKelamin = getche(); // getche untuk input tanpa enter 

    cout <<"\n \n";
    cout << nama << endl;
    cout << kom << endl;
    cout << NIM << endl;
    cout << IP << endl;
    putchar(jenisKelamin); // untuk menampilkan karakter jenisKelamin
    getch(); // disimpan di memori (tidak tampil di terminal)

}
