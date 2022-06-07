#include <iostream>
#include <string>
#include <fstream>
#include <ctype.h>
#include <stdio.h>
using namespace std;
int main(){
    int pilih;
    string barang[]={"LG LCD TV","dell inspiron","swis army","iphone X","macbook pro","sony a6000","samsung gear","hp pavilion","sandisk 32GB","epson printer"};
    int harga[]={200000,60000,120000,400000,3100000,2500000};
    int stok[]={30, 45, 55, 23, 12, 14};
    string cart_barang[100];
    int cart_harga[100];
    int jumlah,indeks=-1,N;
    string barang_nama;
    char lagi;
    char input;
    int maks;
    cout << "-----------------------------------------------------------------------------\n";
    cout << "  Id Barang\t\t  barang\t\tstok\t\t\tHarga\n";
    cout << "-----------------------------------------------------------------------------\n";
   for(int i=0;i<6;i++){
        cout << " " << i << "\t\t" << barang[i] << "\t\t " << stok[i] << "\t\t\t" << harga[i] << " " << endl;
   }
   cout << "------------------------------------------------------------------------------\n";
   cout << endl;
   {
}do{
        int N[100];
        int kode;
        cout << "masukkan kode barang : ";
        cin >> kode;
        if(stok[kode]==0){
            cout << "Barang yang anda pilih 'Out Of Stock'" << endl;
        }
        else{
        cout << "nama barang \t: " << barang[kode] << endl;
        cout << "harga barang \t: " << harga[kode] << endl;
        cout << "stok barang \t: " << stok[kode]-1 << endl;
        indeks=indeks+1;
        cart_barang[indeks]=barang[kode];
        cart_harga[indeks]=harga[kode];
        stok[kode]=stok[kode]-1;
        jumlah=stok[kode]*harga[kode];
        cout << "total harga \t: " << jumlah << endl;
        }
        cout << "belanja lagi?[y/n] ";
        cin >> lagi;
        cout << endl;
    }while(lagi=='Y' || lagi=='y');
	   {
	cout << endl;
    cout << "---------------------------------------------------------------------------\n";
    cout << "Daftar Barang yang anda beli:" << endl;
    for(int i=0;i<=maks;i++){
        cout << "\t" << i+1 << ". " << cart_barang[i] << "\t\t\tRp. " << cart_harga[i] << endl;
    cout << "---------------------------------------------------------------------------\n";
    cout << "\ttotal harga yang harus anda bayar adalah : ";
    cout << jumlah << endl;
    cout << "---------------------------------------------------------------------------\n";
}
}
}
