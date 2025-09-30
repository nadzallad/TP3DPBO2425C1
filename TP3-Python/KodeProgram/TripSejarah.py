from Trip import Trip

class TripSejarah(Trip):
    # memanggil konstruktor Trip lalu menambahkan atribut khusus trip Sejarah
    def __init__(self, trip_id, nama_trip, harga, destinasi_utama, jadwal, tempat_bersejarah, pemandu):
        super().__init__(trip_id, nama_trip, harga, destinasi_utama, jadwal)
        self.tempat_bersejarah = tempat_bersejarah
        self.pemandu = pemandu

    def tampilkan_data(self):
        # override dari Trip untuk menampilkan data tambahan
        super().tampilkan_data()
        print(f"Tempat Bersejarah: {', '.join(self.tempat_bersejarah)}, Pemandu: {self.pemandu}")