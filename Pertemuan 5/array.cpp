#include <iostream>
#include <vector>

using namespace std;

int main(){
    system ("CLS");
    string cars[4] = {"BMW", "Honda", "Volvo", "Palisade"};
    int x;
    cout << cars[1] << endl;
    cout << cars[2] << endl;

    for (int i = 0; i < 4; i++){
        cout << i + 1 << cars[i] << endl;
    }

    for (string i : cars){
        cout << i << endl;  // looping print all cars array
    }

    cout << sizeof(cars) << endl;

    int panjangArrayCars = sizeof(cars) / sizeof(cars[0]);

    cout << panjangArrayCars << endl;

    for (int i = 0; i < panjangArrayCars; i++){
        cout << cars[i] << endl;
    }
    
    return 0;
}