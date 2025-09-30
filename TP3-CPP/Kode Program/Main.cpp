#include <iostream>
#include "TripAlam.cpp"
#include "TripKuliner.cpp"
#include "TripSejarah.cpp"
#include "Peserta.cpp"
#include "JadwalTrip.cpp"

using namespace std;

int main() {
    // Jadwal trip
    JadwalTrip jadwal1("2025-10-01", "2025-10-03", "07:00");
    JadwalTrip jadwal2("2025-10-03", "2025-10-12", "08:00");
    JadwalTrip jadwal3("2025-11-04", "2025-11-10", "08:30");

    // Objek trip
    TripAlam trip1("T001", "Pendakian Gunung", 750000, "Gunung Gede", jadwal1, "Hiking", "Menengah");
    TripKuliner trip2("T002", "Jelajah Kuliner Bandung", 600000, "Bandung", jadwal2,
                      {"Batagor", "Sate Maranggi", "Nasi Tutug Oncom"},
                      {"Restoran A", "Restoran B", "Warung Sunda"});
    TripSejarah trip3("T003", "Wisata Sejarah Jakarta", 500000, "Jakarta Kota", jadwal3,
                      {"Museum Fatahillah", "Monas", "Kota Tua"}, "Pak Andi");

    // Tambah peserta awal
    Peserta peserta1("1234567890", "Ali", 25, "08123456789");
    Peserta peserta2("0987654321", "Budi", 30, "08987654321");
    Peserta peserta3("8765432109", "Imut", 20, "08777688981");

    trip1.tambah_peserta(peserta1);
    trip2.tambah_peserta(peserta2);
    trip3.tambah_peserta(peserta3);

    cout << "\n========= DATA TRIP SEBELUM PENAMBAHAN =========\n";

    cout << "\n=== DATA TRIP ALAM ===\n";
    trip1.tampilkan_data();

    cout << "\n=== DATA TRIP KULINER ===\n";
    trip2.tampilkan_data();

    cout << "\n=== DATA TRIP SEJARAH ===\n";
    trip3.tampilkan_data();

    // Tambah peserta baru
    Peserta peserta4("111122223333", "Citra", 28, "08111222333");
    trip1.tambah_peserta(peserta4);
    trip2.tambah_peserta(peserta4);
    trip3.tambah_peserta(peserta4);

    cout << "\n========= DATA TRIP SESUDAH PENAMBAHAN =========\n";

    cout << "\n=== DATA TRIP ALAM ===\n";
    trip1.tampilkan_data();

    cout << "\n=== DATA TRIP KULINER ===\n";
    trip2.tampilkan_data();

    cout << "\n=== DATA TRIP SEJARAH ===\n";
    trip3.tampilkan_data();

    return 0;
}
