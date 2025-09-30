from Trip import Trip

class TripKuliner(Trip):
    # memanggil konstruktor Trip lalu menambahkan atribut khusus trip kuliner
    def __init__(self, trip_id, nama_trip, harga, destinasi_utama, jadwal, daftar_makanan, daftar_restoran):
        super().__init__(trip_id, nama_trip, harga, destinasi_utama, jadwal)
        self.daftar_makanan = daftar_makanan
        self.daftar_restoran = daftar_restoran


    def tampilkan_data(self):
        # override dari Trip untuk menampilkan data tambahan
        super().tampilkan_data()
        print(f"Makanan: {', '.join(self.daftar_makanan)}")
        print(f"Restoran: {', '.join(self.daftar_restoran)}")
