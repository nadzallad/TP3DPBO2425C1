#pragma once
#include <string>
#include <iostream>
using namespace std;

// Kelas Peserta untuk informasi dari seseorang yang mengikuti trip
class Peserta {
public:
    string no_ktp;
    string nama;
    int umur;
    string kontak;

    // Konstruktor untuk inisialisasi data peserta
    Peserta(string no_ktp, string nama, int umur, string kontak)
        : no_ktp(no_ktp), nama(nama), umur(umur), kontak(kontak) {}

    // Method untuk menampilkan informasi peserta ke layar
    void tampilkan() const {
        cout << "  - " << nama << "(KTP: " << no_ktp 
             << ", Umur: " << umur << ", Kontak: " << kontak << ")" << endl;
    }
};
