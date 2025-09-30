from Trip import Trip

class TripAlam(Trip):
    # memanggil konstruktor Trip lalu menambahkan atribut khusus trip alam
    def __init__(self, trip_id, nama_trip, harga, destinasi_utama, jadwal, aktivitas_outdoor, tingkat_kesulitan):
            super().__init__(trip_id, nama_trip, harga, destinasi_utama, jadwal)
            self.aktivitas_outdoor = aktivitas_outdoor
            self.tingkat_kesulitan = tingkat_kesulitan

    def tampilkan_data(self):
        # override dari Trip untuk menampilkan data tambahan
        super().tampilkan_data()
        print(f"Aktivitas Outdoor: {self.aktivitas_outdoor}, Kesulitan: {self.tingkat_kesulitan}")