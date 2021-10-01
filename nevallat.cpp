#include <iostream>

using namespace std;

int main(){
    char nev[30], kedvenc_allat[30];
    cout << "Nev: " << endl;
    cin >> nev;
    cout << "Kedvenc allat: " << endl;
    cin >> kedvenc_allat;

    cout << kedvenc_allat << endl
        << nev << endl
    << kedvenc_allat;
    return 0;
}
