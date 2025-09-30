#pragma once
#include <string>
#include <iostream>
#include "Trip.cpp"
using namespace std;

//kelas turunan dari trip untuk tema alam
class TripAlam : public Trip {
private:
    string aktivitas;
    string tingkat_kesulitan;

public:
    // Konstruktor TripAlam
    // Menginisialisasi atribut dari superclass Trip dan atribut tambahan khusus alam
    TripAlam(string id_trip, string nama_trip, double harga, string lokasi, JadwalTrip jadwal,
             string aktivitas, string tingkat_kesulitan)
        : Trip(id_trip, nama_trip, harga, lokasi, jadwal), aktivitas(aktivitas), tingkat_kesulitan(tingkat_kesulitan) {}
    
    // Override method tampilkan_data() dari kelas Trip
    void tampilkan_data() const override {
        // Panggil method dari kelas induk untuk menampilkan data umum
        Trip::tampilkan_data();
        // Tampilkan atribut khusus trip alam
        cout << "Aktivitas: " << aktivitas << "\nTingkat Kesulitan: " << tingkat_kesulitan << endl;
    }
};
