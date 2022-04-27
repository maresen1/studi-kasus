#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;
main ()
{
char nama [30], nim[10];
float nilai1, nilai2, nilai3, totalnilai;

/* judul Program dan Input */
cout<<".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-."<<endl;
cout<<"//                                             //"<<endl;
cout<<"//\t PROGRAM MENGHITUNG NILAI AKHIR        //"<<endl;
cout<<"//                                             //"<<endl;
cout<<"........................."<<endl;
cout<<endl;
cout<<"Nama   : ";
gets(nama);
cout<<"NIM    : ";
cin>>nim;
cout<<endl;
cout<<"Masukkan Nilai TUGAS Anda : "; cin>>nilai1;
cout<<"Masukkan Nilai UTS Anda   : "; cin>>nilai2;
cout<<"Masukkan Nilai UAS Anda   : "; cin>>nilai3;

/* Proses Penghitungan */
totalnilai=(nilai1*0.2+nilai2*0.4+nilai3*0.4);
cout<<"--------------------------------"<<endl;
if    (totalnilai >=85 && totalnilai <=100)
    cout<<"// Grade Yang Anda Peroleh: A //"<<endl;

    else if (totalnilai >=75 && totalnilai <=84)

    cout<<"// Grade Yang Anda Peroleh: B //"<<endl;

    else if (totalnilai >=65 && totalnilai <=75)

    cout<<"// Grade Yang Anda Peroleh: C //"<<endl;

    else if (totalnilai >=40 && totalnilai <=65)

    cout<<"// Grade Yang Anda Peroleh: D //"<<endl;

    else if (totalnilai >=0 && totalnilai <=40)

    cout<<"// Grade Yang Anda Peroleh: E //"<<endl;
    cout<<"--------------------------------"<<endl;


/* Output */
cout<<endl;
cout<<endl;
cout<<"-------------------------------------------"<<endl;
cout<<"Siswa Atas Nama : "<<endl
<<nama<<", NIM "<<nim;
cout<<endl;
cout<<"Memperoleh Total Nilai :"<<totalnilai<<endl;
cout<<"Selama perjuangannya di Universitas Ahmad Dahlan"<<endl;
cout<<"-------------------------------------------"<<endl;
getch ();
}
