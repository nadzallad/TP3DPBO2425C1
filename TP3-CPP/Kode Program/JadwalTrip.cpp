#pragma once
#include <string>
#include <iostream>
using namespace std;

// Kelas JadwalTrip menyimpan informasi tentang jadwal keberangkatan dan kepulangan trip
class JadwalTrip {
public:
    string tgl_mulai;
    string tgl_selesai;
    string jam_berangkat;

    // Konstruktor untuk menginisialisasi semua atribut
    JadwalTrip(string tgl_mulai, string tgl_selesai, string jam_berangkat)
        : tgl_mulai(tgl_mulai), tgl_selesai(tgl_selesai), jam_berangkat(jam_berangkat) {}

    // Method untuk menampilkan detail jadwal trip ke layar
    void tampilkan() const {
        cout << "Tanggal Mulai: " << tgl_mulai << ", Tanggal Selesai: " << tgl_selesai
             << ", Jam Berangkat: " << jam_berangkat << endl;
    }
};
