#include<iostream>
#include<string>
#include<clocale>
#define B "\033[0m"
#define K "\033[31m"
#define Y "\033[32m"
#define S "\033[33m"
#define T "\033[36m"
using namespace std;
long long n;
int F;
int degisken1;
int taban1 = 2;
int degisken2;
int main()
{
    setlocale(LC_ALL, "Turkish");
    cout << T << "FERMAT SAYILARI " << B << endl;
    cout << Y << "n " <<B<< "sıfırdan küçük olmayan bir tam sayı olmak üzere, "<<
       S<<" 2^(2^n)+1 " <<B<<"şeklinde yazılabilen sayılardır." << endl;

    cout << "Lütfen "<<Y<< "n " <<B<< "sayısını giriniz." <<
        K << " Not: n tamsayısı [0,4] arası seçiniz." <<B<< endl << endl;
    do {
            if (!(cin >> n) || cin.peek() == '.' || cin.peek() == ',') {
                cout <<K<< "HATA! "<<B<< "Lütfen uygun bir tam sayı giriniz!" << endl;
                cin.clear();
                while (cin.get() != '\n');
                n = -1;
            continue;
        }
        if ( n > 4 ) {
            cout <<K<< "n sayısı 4 den büyük olamaz! "<<
                B<<"Lütfen n = [0, 4] arasında sayı giriniz."<<endl;
        }
        else if (n < 0) {
                cout <<K<<"n sayısı 0 dan küçük olamaz! "<<
                    B<<"Lütfen n = [0, 4] arasında sayı giriniz."<<endl;
            }
    } while (n < 0 || n > 4);


    degisken1 = 1;
    for (int i = 0 ; i < n; i++) {
        degisken1 = degisken1 * taban1;
    }
    degisken2 = degisken1;
    degisken1 = 1;
    for (int i = 0 ; i < degisken2; i++) {
        degisken1 = degisken1 * taban1;
    }
    F = degisken1 + 1;
    cout <<"Sayınız "<<Y<<F<<B<<" ve "<<Y<<"asal sayıdır."<<B<<endl;
}