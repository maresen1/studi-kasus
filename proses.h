using namespace std;

class Proses {
    public :
      void cetak (){
          cout << "Anda Sebagai Proses \n";
        }

      voide getData(){
        ambil_data.open("../dummy/out_input.txt");
        int t;
        while(!ambil data.eof()){
          ambil_data >> t;
          cout << t << endl;
        }
        anbil_data.close();
      }

    Private :
      ifstream ambil_data;
      int bnyk_ayamGr;
      int bnyk_ayamBk;
};