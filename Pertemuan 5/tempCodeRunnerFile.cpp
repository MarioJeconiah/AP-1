#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<string> cars = {"BMW", "Honda", "Volvo", "Palisade"};
    vector<int> angka = {10, 20, 30, 40};

    system("CLS");

    cout << cars[0] << endl;
    cout << cars.at(1) << endl;
    cout << cars.front() << endl;
    cout << cars.back() << endl;

    cars[2] = "Mazda";
    cars.at(1) = "Opec";
    cars.front() = "KIA";
    cars.back() = "Avanza";

    cout << cars[2] << endl;
    cout << cars.at(1) << endl;
    cout << cars.front() << endl;
    cout << cars.back() << endl; 

    cars.push_back("Sigra");
    for (string x :cars){
        cout << x << endl;
    }
}