public class TripAlam extends Trip {
    private String aktivitas;
    private String tingkatKesulitan;

    /* Konstruktor untuk menginisialisasi TripAlam */
    public TripAlam(String idTrip, String namaTrip, double harga, String lokasi,
                    JadwalTrip jadwal, String aktivitas, String tingkatKesulitan) {
        // Memanggil konstruktor dari kelas induk (Trip)
        super(idTrip, namaTrip, harga, lokasi, jadwal);
        this.aktivitas = aktivitas;
        this.tingkatKesulitan = tingkatKesulitan;
    }

    @Override
    public void tampilkanData() {
        // Memanggil metode tampilkanData() dari kelas induk
        super.tampilkanData();

        // Menampilkan atribut tambahan milik TripAlam
        System.out.println("Aktivitas: " + aktivitas);
        System.out.println("Tingkat Kesulitan: " + tingkatKesulitan);
    }
}
