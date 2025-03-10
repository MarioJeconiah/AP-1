#include <iostream>
#define pi 3.14

using namespace std;

int main(){
    float jari, volume, luaspermukaan;
    cout << "Masukkan jari jari: ";
    cin >> jari;

    // volume = pi * 4 / 3* jari * jari * jari;
    luaspermukaan = 4 * pi * jari * jari;

    volume = 4/3;

    cout << "volume adalah: " << volume << endl;
    cout << "luas permukaan adalah: " << luaspermukaan << endl;
}