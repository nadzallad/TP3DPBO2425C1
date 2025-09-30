class Trip:
    def __init__(self, trip_id, nama_trip, harga, destinasi_utama, jadwal):
        # atribut umum untuk semua jenis trip
        self.trip_id = trip_id
        self.nama_trip = nama_trip
        self.harga = harga
        self.destinasi_utama = destinasi_utama
        self.jadwal = jadwal
        self.daftar_peserta = []

    # menambahkan peserta ke dalam daftar peserta trip
    def tambah_peserta(self, peserta):
        self.daftar_peserta.append(peserta)

    # Menampilkan semua data trip dan daftar peserta
    def tampilkan_data(self):
        print(f"\n[Trip ID: {self.trip_id}] {self.nama_trip}")
        print(f"Destinasi: {self.destinasi_utama}, Harga: Rp{self.harga}")
        print(f"Jadwal: {self.jadwal}")
        print("Peserta:")
        if self.daftar_peserta:
            for peserta in self.daftar_peserta:
                print(f"  - {peserta}")
        else:
            print("  Tidak ada peserta.")