from Peserta import Peserta
from JadwalTrip import JadwalTrip
from TripAlam import TripAlam
from TripKuliner import TripKuliner
from TripSejarah import TripSejarah

#jadwal trip
jadwal1 = JadwalTrip("2025-10-01", "2025-10-03", "07:00")
jadwal2 = JadwalTrip("2025-10-03", "2025-10-12", "08:00")
jadwal3 = JadwalTrip("2025-11-04", "2025-11-10", "08:30")

#objek Trip
trip1 = TripAlam("T001", "Pendakian Gunung", 750000, "Gunung Gede", jadwal1, "Hiking", "Menengah")
trip2 = TripKuliner("T002", "Jelajah Kuliner Bandung",  600000, "Bandung", jadwal2,
                        ["Batagor", "Sate Maranggi", "Nasi Tutug Oncom"],
                        ["Restoran A", "Restoran B", "Warung Sunda"])
trip3 = TripSejarah("T003", "Wisata Sejarah Jakarta",500000, "Jakarta Kota", jadwal3,
                        ["Museum Fatahillah", "Monas", "Kota Tua"], "Pak Andi")

#Tambahkan peserta awal
peserta1 = Peserta("1234567890", "Ali", 25, "08123456789")
peserta2 = Peserta("0987654321", "Budi", 30, "08987654321")
peserta3 = Peserta("8765432109", "Imut", 20, "08777688981")

trip1.tambah_peserta(peserta1)
trip2.tambah_peserta(peserta2)
trip3.tambah_peserta(peserta3)

#Tampilkan data sebelum penambahan peserta baru
print("\n========= DATA TRIP SEBELUM PENAMBAHAN =========")
print("\n=== DATA TRIP ALAM ===")
trip1.tampilkan_data()

print("\n=== DATA TRIP SEJARAH ===")
trip2.tampilkan_data()

print("\n=== DATA TRIP KULINER ===")
trip3.tampilkan_data()

#Tambah peserta baru
peserta4 = Peserta("111122223333", "Citra", 28, "08111222333")
trip1.tambah_peserta(peserta4)
trip2.tambah_peserta(peserta4)
trip3.tambah_peserta(peserta4)

#Tampilkan data setelah penambahan
print("\n========= DATA TRIP SESUDAH PENAMBAHAN =========")
print("\n=== DATA TRIP ALAM ===")
trip1.tampilkan_data()

print("\n=== DATA TRIP SEJARAH ===")
trip2.tampilkan_data()

print("\n=== DATA TRIP KULINER ===")
trip3.tampilkan_data()
print("\n")