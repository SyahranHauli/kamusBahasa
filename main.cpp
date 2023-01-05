#include <iostream>
#include "DLL.h"

using namespace std;

int main()
{
    List L;
    int pilihan = 1;
    createList_1301213358(L);

    while(pilihan != 0){
        cout<<"====== Menu ======"<<endl;
        cout<<"1. Menambah N data baru"<<endl;
        cout<<"2. Menampilkan semua data"<<endl;
        cout<<"3. Membalik List"<<endl;
        cout<<"4. Rata-rata Saldo"<<endl;
        cout<<"0. Exit"<<endl<<endl;
        cout<<"Choose Option: ";cin>>pilihan;
        switch(pilihan){
    case 0:
        cout<<"Anda Telah Keluar dari Program"<<endl;
        break;
    case 1:
        {int i;
        infotype x;
        cout<<"Jumlah Penambahan Data: "; cin>>i;
        for(int j=0; j<i; j++){
            cout<<"Masukkan No Barang: ";cin>>x.no_barang;
            cout<<"Masukkan Nama Pelanggan: ";cin>>x.nama;
            cout<<"Masukkan Jenis Asuransi: ";cin>>x.jenis_asuransi;
            cout<<"Masukkan Nominal Saldo: ";cin>>x.saldo;
            cout<<endl;
            insertFirst_1301213358(L, newElement_1301213358(x));
        }
        break;}
    case 2:
        {showalldata_1301213358(L);
        break;}
    case 3:
        {reverseList_1301213358(L);
        cout<<endl;
        showalldata_1301213358(L);
        break;}
    case 4:
        {rata_rata_1301213358(L);
        cout<<rata_rata_1301213358(L)<<endl;
        break;}
        }
    }
}
