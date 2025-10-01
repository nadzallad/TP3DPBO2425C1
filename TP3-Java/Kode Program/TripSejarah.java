import java.util.List;

public class TripSejarah extends Trip {
    private List<String> tempatBersejarah;
    private String pemandu;

    //Konstruktor untuk menginisialisasi TripSejarah
    public TripSejarah(String idTrip, String namaTrip, double harga, String lokasi, JadwalTrip jadwal, List<String> tempatBersejarah, String pemandu) {
         // Memanggil konstruktor dari kelas induk (Trip)
        super(idTrip, namaTrip, harga, lokasi, jadwal);
        this.tempatBersejarah = tempatBersejarah;
        this.pemandu = pemandu;
    }

    @Override
    public void tampilkanData() {
        // Tampilkan data umum dari trip (dari kelas Trip)
        super.tampilkanData();

        // Tampilkan daftar tempat bersejarah
        System.out.print("Tempat Bersejarah: ");
        for (String tempat : tempatBersejarah) {
            System.out.print(tempat + ", ");
        }
        
        // Tampilkan nama pemandu
        System.out.println("\nPemandu: " + pemandu);
    }
}
