#include <iostream>
using namespace std;

int main(){
    int nilai;

    cin >> nilai;

    if (nilai % 10 == 0){
        cout << "Habis dibagi 10";
    }

    else if (nilai % 5 == 0){
        cout <<"Habis dibagi 5";
    }

    else {
        cout <<"tidak habis dibagi 5 atau 10";
    }
}