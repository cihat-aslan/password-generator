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
}
