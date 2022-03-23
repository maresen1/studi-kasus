# studi-kasus

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    // inisialisasi variable terlebih dahulu.
    int bayar,liter,harga,nama;
    float total, total_semua;
    string jenis_bensin;

    cout<<"===========================\n";
    cout<<"Program SPBU\n";
    cout<<"===========================\n\n";

        cout<<"Jenis Bensin : ";
        cin>>jenis_bensin; //input jenis bensin yang dibeli

        cout<<"Total Liter : ";
        cin>>liter; //input total liter yang di beli

        cout<<"Harga Bensin : ";
        cin>>harga; //input harga perliter
        
        cout<<"Uang yang diterima :";
        cin>>bayar;//input uang yang diberikan
        
		cout<<"Nama Pelanggan :";
        cin>>nama;//input nama pelanggann
        
        
        
        total = liter*harga; //jumlah harga total barang
        total_semua = bayar-total;

    cout<<"\n===============";
    cout<<"\nCatatan";
    cout<<"\n===============";

    cout<<"\nNomer Barang  Jumlah Harga Total : \n";
    
    cout<<"Jumlah Bayar : Rp."<<total<<endl; 
    cout<<"Kembalian : Rp."<<total_semua<<endl;
    return 0;
}
