#include <iostream>
using namespace std;

string namaGLobal = "Ilmu";

void namaVariabel(){
    string namaLokal = "Komputer";

    // coba akses
    cout << namaLokal << endl; 

    // coba akses
    cout << namaGLobal << endl;
}

int main(){
    namaVariabel();

    // coba akses
    cout << namaGLobal << endl;
    
    // coba akses
    // cout << namaLokal << endl;    ga iso

}