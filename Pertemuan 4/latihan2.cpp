#include <iostream>

using namespace std;

int main(){
    string kalimat;
    int i;

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);

    
    for (i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == 'a'|| kalimat[i] == 'i'|| kalimat[i] == 'u'|| kalimat[i] == 'e'|| kalimat[i] == 'o')
        kalimat[i] = toupper(kalimat [i]);
    }

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;

    return 0;
}