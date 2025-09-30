#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Trip.cpp"
using namespace std;

//class unutk trip kuliner 
class TripKuliner : public Trip {
private:
    //vector untuk meyimpan daftar
    vector<string> daftar_makanan;
    vector<string> daftar_tempat;

public:
    // Konstruktor TripKuliner, Menginisialisasi data trip umum dari class Trip serta data spesifik kuliner 
    TripKuliner(string id_trip, string nama_trip, double harga, string lokasi, JadwalTrip jadwal,
                vector<string> daftar_makanan, vector<string> daftar_tempat)
        : Trip(id_trip, nama_trip, harga, lokasi, jadwal),
          daftar_makanan(daftar_makanan), daftar_tempat(daftar_tempat) {}
    
    // Override method tampilkan_data() dari class Trip
    // Menambahkan informasi khusus tentang trip kuliner
    void tampilkan_data() const override {
        // Tampilkan data umum trip (dipanggil dari superclass)
        Trip::tampilkan_data();

        // Tampilkan daftar makanan
        cout << "Daftar Makanan: ";
        for (const auto& m : daftar_makanan) cout << m << ", ";

        // Tampilkan daftar tempat kuliner
        cout << "\nDaftar Tempat: ";
        for (const auto& t : daftar_tempat) cout << t << ", ";
        cout << endl;
    }
};
