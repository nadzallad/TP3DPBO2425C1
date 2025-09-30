#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Trip.cpp"
using namespace std;

// kelas turunan dari trip untuk jenis trip sejarah
class TripSejarah : public Trip {
private:
    vector<string> tempat_bersejarah; //meyimpan dafatar tempat sejarah
    string pemandu;

public:
    //konstruktor trip sejarah, Meneruskan parameter umum ke constructor Trip  dan menginisialisasi atribut tambahan
    TripSejarah(string id_trip, string nama_trip, double harga, string lokasi, JadwalTrip jadwal,
                vector<string> tempat_bersejarah, string pemandu)
        : Trip(id_trip, nama_trip, harga, lokasi, jadwal),
          tempat_bersejarah(tempat_bersejarah), pemandu(pemandu) {}

    // Override method tampilkan_data() dari Trip
    // Untuk menampilkan data tambahan khusus trip sejarah
    void tampilkan_data() const override {
        // Tampilkan data trip umum dari superclass Trip
        Trip::tampilkan_data();

        // Tampilkan daftar tempat bersejarah yang akan dikunjungi
        cout << "Tempat Bersejarah: ";
        for (const auto& tempat : tempat_bersejarah) cout << tempat << ", ";
        // Tampilkan nama pemandu wisata
        cout << "\nPemandu: " << pemandu << endl;
    }
};
