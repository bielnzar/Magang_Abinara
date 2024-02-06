#include <bits/stdc++.h>

using namespace std;

const double PI = acos(-1);

namespace trigonometri {
    class Kalku {

        char pilihan;
        double hasil;

        public:
        Kalku(char pilihan, double hasil){
            this->pilihan = pilihan;
            this->hasil = hasil;
        }

        double operasi(){
            switch (pilihan){
                case '1':
                    return sin(hasil);
                    break;
                case '2':
                    return cos(hasil);
                    break;
                case '3':
                    return tan(hasil);
                    break;
                case '4':
                    return asin(hasil) * 180 / PI;
                    break;
                case '5':
                    return acos(hasil) * 180 / PI;
                    break;
                case '6':
                    return atan(hasil) * 180 / PI;
                    break;
                default:
                    cout << "Input Error!" << endl;
                    cout << "Perhatikan Kembali Pilihanmu" << endl;
                    return 0;
                    break;
            }
        }
        
        void display(){
            cout << "Pilih operasi yang ingin anda lakukan:" << endl;
            cout << "1 : Sin" << endl;
            cout << "2 : Cos" << endl;
            cout << "3 : Tan" << endl;
            cout << "4 : Inverse Sin" << endl;
            cout << "5 : Inverse Cos" << endl;
            cout << "6 : Inverse Tan" << endl;
        }

        void tampil_hasil(){
            switch(pilihan){
                case '1':
                    cout << "Hasil Operasi Sin (" << hasil << ") ialah :" << operasi() << endl;
                    break;
                case '2':
                    cout << "Hasil Operasi Cos (" << hasil << ") ialah :" << operasi() << endl;
                    break;
                case '3':
                    cout << "Hasil Operasi Tan (" << hasil << ") ialah :" << operasi() << endl;
                    break;
                case '4':
                    if(hasil >= -1 && hasil <= 1){
                        cout << "Hasil Operasi Inverse Sin (" << hasil << ") Dalam Derajat ialah: " << operasi() << endl;
                    }
                    else {
                        cout << "Operasi Invers Sin hanya untuk nilai -1 sampai 1" << endl;
                        cout << "Perhatikan Kembali Input yang dimasukkan!" << endl;
                    }
                    break;
                 case '5':
                    if(hasil >= -1 && hasil <= 1){
                        cout << "Hasil Operasi Inverse Cos (" << hasil << ") Dalam Derajat ialah: " << operasi() << endl;
                    }
                    else {
                        cout << "Operasi Invers Cos hanya untuk nilai -1 sampai 1" << endl;
                        cout << "Perhatikan Kembali Input yang dimasukkan!" << endl;
                    }
                    break;
                 case '6':
                    cout << "Hasil Operasi Inverse Tan (" << hasil << ") Dalam Derajat ialah: " << operasi() << endl;
                    break;
                default:
                    cout << "Input Error!" << endl;
                    cout << "Perhatikan Kembali Pilihanmu" << endl;
                    break;
            }
        }
    };
}

int main(){
    char pilihan;
    double hasil;

    trigonometri::Kalku awal(pilihan, hasil);

    awal.display();

    cout << "Masukkan tipe operasi: ";
    cin >> pilihan;

    cout << "Masukkan nilai: ";
    cin >> hasil;

    trigonometri::Kalku akhir(pilihan, hasil);
    
    akhir.tampil_hasil();
            
    return 0;
}