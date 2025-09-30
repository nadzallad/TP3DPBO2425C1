class Peserta:
    #konstruktor unutk meyimpan data peserta
    def __init__(self, no_ktp, nama, umur, kontak):
        self.no_ktp = no_ktp
        self.nama = nama
        self.umur = umur
        self.kontak = kontak

    #menampilkan string peserta
    def __str__(self):
        return f"{self.nama} (KTP: {self.no_ktp}, Umur: {self.umur}, Kontak: {self.kontak})"