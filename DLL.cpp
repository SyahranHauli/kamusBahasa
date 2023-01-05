#include "DLL.h"

void createList_1301213358(List &L){
    first(L) = nil;
    last(L) = nil;
}

adr newElement_1301213358(infotype x){
    adr P = new element;
    info(P) = x;
    next(P) = nil;
    prev(P) = nil;
    return P;
}

void showalldata_1301213358(List L){
    adr P;
    int i = 1;
    if(first(L) != nil && last(L) != nil){
        P = first(L);
        while (P != nil){
            cout << endl;
            cout << " Nama              : " << info(P).nama << endl;
            cout << " Nomor Barang      : " << info(P).no_barang << endl;
            cout << " Saldo             : " << info(P).saldo << endl;
            cout << " Jenis Asuransi    : " << info(P).jenis_asuransi << endl;
            P = next(P);
            i++;
        }
        cout << endl;
    } else {
        cout << endl;
        cout << "List Masih Kosong" << endl;
        cout << "Tolong insert dahulu   : " << endl;
    }

}

void reverseList_1301213358(List &L){
    if (first(L) == nil){
        cout << "List Kosong !" << endl;
    }else{
        adr p = first(L);
        while(p != nil){
            adr q = prev(p);
            prev(p) = next(p);
            next(p) = q;
            p = prev(p);
        }
        p = first(L);
        first(L) = last(L);
        first(L) = p;
    }
}

void insertFirst_1301213358(List &L, adr P){
    if(first(L) == nil && last(L) == nil){
        first(L) = P;
        last(L) = P;
    }else{
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

float rata_rata_1301213358(List L){
    adr p = first(L);
    float x = 0;
    int i = 0;
    while(p != NULL){
        x += info(p).saldo;
        i++;
        p = next(p);
    }
    return x / i;
}























