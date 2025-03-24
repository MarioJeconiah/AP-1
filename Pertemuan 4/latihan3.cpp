#include <iostream>
using namespace std;

int main(){
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);


    for (int i = 0; i < kalimat.length(); i++){
        for (int j = 0; j <= i; j++){
            cout << kalimat[j];
        }
    }
}