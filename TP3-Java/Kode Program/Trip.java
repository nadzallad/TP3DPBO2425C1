import java.util.ArrayList;
import java.util.List;

/* Menyimpan informasi seperti ID trip, nama, harga, lokasi, jadwal, dan daftar peserta */
public class Trip {
    protected String idTrip;
    protected String namaTrip;
    protected double harga;
    protected String lokasi;
    protected JadwalTrip jadwal;
    protected List<Peserta> peserta;

    /*Konstruktor untuk membuat objek Trip */
    public Trip(String idTrip, String namaTrip, double harga, String lokasi, JadwalTrip jadwal) {
        this.idTrip = idTrip;
        this.namaTrip = namaTrip;
        this.harga = harga;
        this.lokasi = lokasi;
        this.jadwal = jadwal;
        this.peserta = new ArrayList<>();
    }

    /* Menambahkan satu peserta ke dalam daftar peserta trip */
    public void tambahPeserta(Peserta p) {
        peserta.add(p);
    }

    /* Menampilkan seluruh data trip, termasuk jadwal dan daftar peserta. */
    public void tampilkanData() {
        System.out.println("ID Trip: " + idTrip);
        System.out.println("Nama Trip: " + namaTrip);
        System.out.println("Harga: " + harga);
        System.out.println("Lokasi: " + lokasi);

        /* Menampilkan jadwal trip menggunakan metode dari kelas JadwalTrip */
        jadwal.tampilkan();

        /* Menampilkan daftar peserta */
        System.out.println("Peserta:");
        for (Peserta p : peserta) {
            p.tampilkan();
        }
    }
}
