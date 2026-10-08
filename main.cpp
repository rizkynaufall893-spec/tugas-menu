#include <iostream>
using namespace std;

int main() {
    string menu[2]={"soto","rawon"};
    int harga[2]={15000,20000};
    int t;
    int porsi[2];
    int total[2];
    for(t=0; t<1; t++){
        cout<<"Menu ";
        cout<<menu[0]<<endl;
        cout<<"Harga: ";
        cout<<harga[t]<<endl;
        cout<<"Masukkan Porsi: ";
        cin>>porsi[t];
        cout<<"Total Anda ";
        cin>>total[t];
        cout<<"Menu ";
        cout<<menu[1]<<endl;
        cout<<"Harga ";
        cout<<harga[t]<<endl;
        cout<<"Masukkan Porsi: ";
        cin>>porsi[t];
        cout<<"Total Semuanya: ";
        cout<<total[t];
    }
    return 0;
    }
