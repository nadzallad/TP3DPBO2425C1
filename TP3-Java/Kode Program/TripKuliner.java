import java.util.List;

public class TripKuliner extends Trip {
    private List<String> daftarMakanan;
    private List<String> daftarTempat;

    // Konstruktor untuk menginisialisasi objek TripKuliner
    public TripKuliner(String idTrip, String namaTrip, double harga, String lokasi,
                       JadwalTrip jadwal, List<String> daftarMakanan, List<String> daftarTempat) {
        // Memanggil konstruktor dari kelas induk (Trip)
        super(idTrip, namaTrip, harga, lokasi, jadwal);
        this.daftarMakanan = daftarMakanan;
        this.daftarTempat = daftarTempat;
    }

    @Override
    public void tampilkanData() {
        // Menampilkan data umum trip dari kelas induk
        super.tampilkanData();

        // Menampilkan daftar makanan
        System.out.print("Daftar Makanan: ");
        for (String m : daftarMakanan) {
            System.out.print(m + ", ");
        }

        // Menampilkan daftar tempat kuliner
        System.out.print("\nDaftar Tempat: ");
        for (String t : daftarTempat) {
            System.out.print(t + ", ");
        }
        System.out.println();
    }
}
