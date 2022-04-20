#include<iostream>
using namespace std;

class Tabungan{
	private:
		int a;
		int pendapatan;
	public:
		int tabungan=0;
		void cetak();
		int akumulasi(int a, int pendapatan);
};
int Tabungan::akumulasi(int a, int pendapatan){
	int n;
	int x;
	int hasil;
	if(a>0, a<=10){ 
		cout <<"\t\t";
		cin >> n;
		cout << "\t\t\t\t";
		cin >>x;
		hasil = pendapatan-x+n;
		cout << "| " << a << "\t   |" << "\t\t" << "  |\t" << "\t  |\t" << hasil << "\t\t|" << endl;
		cout << "_________________________\n";
		return akumulasi(a+1, pendapatan-x+n);
	}
};

void Tabungan::cetak(){
	int jumlahdapat;
	cout << "==================== AKUMULASI TABUNGAN ========================\n ";
	cout << "              dalam kurun waktu 10 hari\n";
	cout << "================================================================\n";
	cout << "\n";
	cout << "| Hari ke |   Tabungan   |   Pengeluaran  |   Total Tabungan  |\n";
	cout << "---------------------------------------------------------------\n";
	akumulasi(1, jumlahdapat);
};
int main (){
	Tabungan nanda;
	nanda.tabungan;
	nanda.cetak();
	return 0;
}
