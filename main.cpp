#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;

int main() {

    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,-_/+*!@#$%^&";
    int leng = 0;
    while (true) {

        cout << "enter your password length (6-32):";
        cin >> leng;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "invalid character or too long integer. please choose a number between 6-32." << endl;

        }
        else if (leng < 6 || leng > 32) {
            cout << "invalid number. please choose a number between 6-32." << endl;
        }else {
            break;
        }
    }

    srand(time(nullptr));
    cout << "your password generated: ";
    for (int i = 0; i < leng; i++) {
        cout << characters[rand() % characters.size()];
    }
    cout << endl;

#ifdef _WIN32
    cout << "Press any key to close the console..." << endl;
    _getch();
#else
    cout << "Press Enter to close the console..." << endl;
    cin.get();
#endif

    return 0;
}
