#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)
#define nil NULL

struct asuransi_barang {
    int no_barang;
    double saldo;
    string nama;
    string jenis_asuransi;
} ;

typedef asuransi_barang infotype;
typedef struct element *adr;

struct List{
    adr first;
    adr last;
};

struct element{
    infotype info;
    adr next;
    adr prev;
};

void createList_1301213358(List &L);
adr newElement_1301213358(infotype x);
void showalldata_1301213358(List L);
void reverseList_1301213358(List &L);
void insertFirst_1301213358(List &L, adr P);
void addNdata_1301213358(List &L);
float rata_rata_1301213358(List L);




#endif // DLL_H_INCLUDED

