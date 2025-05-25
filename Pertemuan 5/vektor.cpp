#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<string> cars = {"BMW", "Honda", "Volvo", "Palisade"};
    vector<int> angka;

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

    for (string car :cars){
        cout << car << endl;
    }

    cars.pop_back();
    cars.erase(cars.begin() + 2);

    for (string car :cars){
        cout << car << endl;
    }
    

    cout << cars.size() << endl;
    cout << cars.empty() << endl;
    cout << angka.empty() << endl;

    return 0;
}