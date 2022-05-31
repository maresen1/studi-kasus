#include <iostream>
#include <stdio.h>
using namespace std;
class Sorting {
  friend istream& operator>>(istream& in, Sorting& a);
  friend ostream& operator<<(ostream& out, Sorting& a);
public:
  void selection_sort();
  int jualanBarang(int low, int high);
private:
  void minimum (int, int, int&);
  void tukar (int&, int&);
  int data [10], n;
};

struct notebook
{ char jenis[10],merk [10],tipe[15];
  int harga; };
struct notebook nb[5];
int main () {
int pil,bts,i, t, r,s, cari, a,e,m;
char jwb;
menu:
cout<<endl;
cout<<"Selamat Datang"<<endl;
cout<<"Ini Adalah Program Untuk menginputkan Barang"<<endl;
cout<<"TOKO AMMAR ABADI PUTRA"<<endl;
cout<<"=============================="<<endl;
cout<<endl;
cout<<"Silakan Pilih Menu"<<endl;
cout<<"1. INPUTKAN DATA BARANG"<<endl;
cout<<"2. TAMPILKAN DATA"<<endl;
cout<<"3. PENGURUTAN HARGA BARANG"<<endl;
cout<<"4. PENCARIAN BARANG"<<endl;
cout<<"5. Tentang Program"<<endl;
cout<<"6. Keluar"<<endl;
cout<<endl;
cout<<"Masukan pilihan : ";cin>>pil;
if (pil==1)
{ 

    cout<<"MENU INPUT BARANG"<<endl;
    cout<<endl;
    cout<<"Masukan jumlah Barang yang ingin diinputkan : ";cin>>bts;
      cout<<endl;
      cout<<"INPUTKAN DATA BARANG:"<<endl;
      cout<<"----------------------"<<endl;
      //menginputkan data
    for (i=0; i<bts; i++)
       {cout<<"Data Barang "<<(i+1)<<endl;
         cout<<"Jenis Barang\t: ";cin>>nb[i].jenis;
         cout<<"Merk\t: ";cin>>nb[i].merk;
         cout<<"Tipe\t: ";cin>>nb[i].tipe;
         cout<<"Harga\t: ";cin>>nb[i].harga;
         cout<<"-------------------"<<endl;}
         
         cout<<"Data Sudah di inputkan..:"<<endl;
         cout<<endl;
          cout<<"Kembali? [y/t] : ";cin>>jwb;
             if (jwb=='y'||jwb=='Y')
                {
                  goto menu;}
      }
//pilihan 2 (Menampilkan Data Barang)
else if (pil==2)
{
      
            for (i=0; i<bts; i++)
       {
         cout<<endl;
         cout<<"Data Barang "<<(i+1)<<endl;
         cout<<"Jenis\t: "<<nb[i].jenis<<endl;
         cout<<"Merk\t: "<<nb[i].merk<<endl;
         cout<<"Tipe\t: "<<nb[i].tipe<<endl;
         cout<<"Harga\t: "<<nb[i].harga<<endl;
         cout<<endl;
         }
         cout<<endl;
            cout<<"Kembali? [y/t] : ";cin>>jwb;
             if (jwb=='y'||jwb=='Y')
                {
                  goto menu;
                  }
   }
//jika pilihan 3 (Mengurutkan Harga) Sorting
else if (pil==3)
{
      ;cout<<" Berikut Adalah Sorting Data harga"<<endl;
         cout<<"(Diurutkan dari yang paling Murah)"<<endl;
         //pengurutan data ascending
         for(i=0;i<bts-1;i++){
t=i;
for(r=i+1;r<bts;r++){
if(nb[t].harga>nb[r].harga)
t=r;}
if(nb[i].harga !=nb[t].harga)
{s=nb[i].harga;
  nb[i].harga=nb[t].harga;
  nb[t].harga=s;}
   }
for(i=0;i<bts;i++){
cout<<" "<<nb[i].harga;
}
            cout<<endl;
            cout<<"Kembali? [y/t] : ";cin>>jwb;
             if (jwb=='y'||jwb=='Y')
                {
                  goto menu;}
   }
//jika yang dipilih menu 4 (Pencarian Barang)
else if (pil==4)
{
   cout<<"Untuk Mencari Barang Berdasar Harga"<<endl;
   cout<<"Inputkan Harga barang yang ingin dicari : ";
   cin>>cari;
   a=0;
   e=bts;
   while(a <= e)
   { m = (a + e)/2;
   if(bts > nb[m].harga)
   { a = m + 1; }
   else if(cari < nb[m].harga)
   { e = m - 1;  }
   else
   { a = e + 1; }
   }
    if(cari==nb[m].harga)
      { cout << "Harga "<<cari<<" ada di Barang/Produk ke "<<(m+1)<< endl; }
      else
      { cout << "Produk dengan Harga "<<m<<" Tidak ditemukan" << endl;  }
      cout<<"Kembali? [y/t] : ";cin>>jwb;
      if (jwb=='y'||jwb=='Y')
      {
      goto menu;}
   }
else if (pil==5)
{
    
    cout<<"-----------------------"<<endl;
    cout <<"Program ini dibuat Oleh:"<<endl;
    cout<<"Alfin Ammar Alif"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Terimakasih Telah Menggunakan Program ini"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"-------------------"<<endl;
    cout<<"Kembali? [y/t] : ";cin>>jwb;
      if (jwb=='y'||jwb=='Y')
      {
      goto menu;}
   }
else if (pil==6)
{
   cout<<"Tekan Enter untuk keluar";
   }
else {
cout<<"Anda Salah Input";
   cout<<endl;
   cout<<"Kembali? [y/t] : ";cin>>jwb;
      if (jwb=='y'||jwb=='Y')
      {
      goto menu;}
   }
return 0;
}