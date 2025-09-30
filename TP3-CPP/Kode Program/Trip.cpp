#pragma once // mencegah include lebih dari satu kali dalam 1 kompilasi 
#include <string> //untuk tipe data string
#include <vector> //untuk meyimpan daftar peserta
#include <iostream> //untuk output ke layar
#include "JadwalTrip.cpp" // include class JadwalTrip agar bisa digunakan dalam Trip
#include "Peserta.cpp" // include class Peserta agar bisa digunakan dalam Trip
using namespace std;

//kelas induk untuk setiap trip, menyimpan semua informasi umum
class Trip {
protected:
    string id_trip;
    string nama_trip;
    double harga;
    string lokasi;
    JadwalTrip jadwal;
    vector<Peserta> peserta;

public:
    //Komstruktor Trip
    Trip(string id_trip, string nama_trip, double harga, string lokasi, JadwalTrip jadwal)
        : id_trip(id_trip), nama_trip(nama_trip), harga(harga), lokasi(lokasi), jadwal(jadwal) {}

    // Destructor virtual agar bisa override saat pewarisan
    virtual ~Trip() {}

    // Method untuk menambahkan peserta baru ke vector
    void tambah_peserta(const Peserta& p) {
        peserta.push_back(p);
    }

    // Method virtual untuk menampilkan data trip (akan dioverride oleh subclass)
    virtual void tampilkan_data() const {
        cout << "ID Trip: " << id_trip << "\nNama Trip: " << nama_trip << "\nHarga: " << harga
             << "\nLokasi: " << lokasi << endl;
        
        // Menampilkan jadwal trip (memanggil method tampilkan dari JadwalTrip)
        jadwal.tampilkan();

        // Menampilkan daftar peserta
        cout << "Peserta: " << endl;
        for (const auto& p : peserta) {
            // Memanggil method tampilkan() dari class Peserta
            p.tampilkan();
        }
    }
};
