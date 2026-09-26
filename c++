#include <iostream>
using namespace std;

int main() {
    int soto=15000;
    int pecel=10000;
    int ps,pp;
    int jumlahPesanan = 0;
    
    cout<<"Berapa jumlah pesanannya? "<<endl;
    cout<<"Masukkan jumlah pesanan: ";
    cin>>jumlahPesanan;
    cout<<" "<<endl;
    
    for (int i=0;i<jumlahPesanan;i++){
        cout<<"Masukkan Porsi Soto: ";
        cin>>ps;
        cout<<"Masukkan Porsi Pecel: ";
        cin>>pp;
        int ts=ps*soto;
        int tp=pp*pecel;
        int t=ts+tp;
        cout<<"total kamu "<<t<<endl;
    }
    return 0;
}
