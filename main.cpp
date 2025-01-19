#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    string karakterler = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,-_/+*!@#$%^&";
    int boyut = 0;
    while (true) {

        cout << "sifrenizin boyutunu girin (6-32):";
        cin >> boyut;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "gecersiz karakter veya boyutu buyuk girdiniz. lutfen 6-32 arasında bir sayı girin." << endl;

        }
        else if (boyut < 6 || boyut > 32) {
            cout << "gecersiz bir sayı girdiniz. lutfen 6-32 arasında bir sayı girin." << endl;
        }else {
            break;
        }
    }

    srand(time(nullptr));
    cout << "sifreniz olusturuldu:";
    for (int i = 0; i < boyut; i++) {
        cout << karakterler[rand() % karakterler.size()];
    }


    return 0;


    /*
    string kucuk[] = {"abcdefghijklmnopqrstuvwxyz"};
    string buyuk[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"} ;
    string ozel[] = {".,-_/+*!@#$%^&"};
    string sayi[] = {"0123456789"};
    */
    /*
    while (boyut) {
        int secim = 0;
        cout << "sifrenizde olmasını istediginiz ozelligi secin (1-4): " << endl;
        cout << "1-kucuk harf" << endl;
        cout << "2-buyuk harf" << endl;
        cout << "3-sayı" << endl;
        cout << "4-ozel karakter" << endl;
        cin >> secim;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "gecersiz karakter veya boyutu buyuk girdiniz. lutfen 1-4 arasında bir sayı girin." << endl;

        }
        if (secim == 1) {
            int bos =  rand() % kucuk[boyut-1].length();
        }
        else if (secim == 2) {
            int bos =  rand() % buyuk[boyut-1].length();
        }
        else if (secim == 3) {
            int bos =  rand() % sayi[boyut-1].length();
        }
        else if (secim == 4) {
            int bos =  rand() % ozel[boyut-1].length();
        }
        else {
            break;
        }

    }
    */
}
