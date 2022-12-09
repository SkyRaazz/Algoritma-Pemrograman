#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

main()
{
    char kode;
    cout << "Masukan kode Barang [A..C] : ";
    cin >> kode;

    switch (kode)
    {
    case 'A':
        cout << "Alat Olahraga";
        break;
    case 'B':
        cout << "Alat Elektronik";
        break;
    case 'C':
        cout << "Alat Masak";
        break;
    default:
        cout << "Anda Salah Memasukan kode";
        break;
    }
    getch();
}