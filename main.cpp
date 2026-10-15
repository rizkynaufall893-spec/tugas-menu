#include <iostream>
using namespace std;

int main() {
    string menu[2] = {"soto", "rawon"};
    int harga[2] = {15000, 20000};
    int t;
    int porsi[2];
    int total[2];
    int totalSemua = 0;

    for(t = 0; t < 2; t++){
        cout << "Menu: " << menu[t] << endl;
        cout << "Harga: " << harga[t] << endl;
        cout << "Masukkan Porsi: ";
        cin >> porsi[t];
        
        total[t] = harga[t] * porsi[t];
        cout << "Total Anda: " << total[t] << endl << endl;

        totalSemua += total[t];
    }

    cout << "Total Semuanya: " << totalSemua << endl;

    system("pause");
    return 0;
}
