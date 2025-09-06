#include "includes.h"

int main()
{
    SetConsoleTitleA("pass gen x manuuu is here");

    int length;
    char choice;

    cout << "Random Password Generator\n";
    cout << "Password length: ";
    cin >> length;

    cout << "Include numbers? (y/n): ";
    cin >> choice;
    bool useNumbers = (choice == 'y' || choice == 'Y');

    cout << "Include uppercase letters? (y/n): ";
    cin >> choice;
    bool useUppercase = (choice == 'y' || choice == 'Y');

    cout << "Include symbols? (y/n): ";
    cin >> choice;
    bool useSymbols = (choice == 'y' || choice == 'Y');

    string password = genPass(length, useNumbers, useUppercase, useSymbols);
    cout << "\nGenerated password: " << password << "\n";

    ofstream file("password.txt");
    if (file.is_open()) {
        file << password;
        file.close();
        cout << "Password saved in password.txt\n";
    }
    else {
        cout << "Error: cannot create file for the passwrod saving process.\n";
    }
    system("pause");
    return 0;
}