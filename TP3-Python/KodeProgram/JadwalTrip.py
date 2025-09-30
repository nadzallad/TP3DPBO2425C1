class JadwalTrip:
    # Menyimpan informasi jadwal keberangkatan dan kepulangan
    def __init__(self, tanggal_berangkat, tanggal_pulang, waktu_kumpul):
        self.tanggal_berangkat = tanggal_berangkat
        self.tanggal_pulang = tanggal_pulang
        self.waktu_kumpul = waktu_kumpul

    # menampilkan string dari jadwal trip
    def __str__(self):
        return f"{self.tanggal_berangkat} - {self.tanggal_pulang}, Kumpul: {self.waktu_kumpul}"