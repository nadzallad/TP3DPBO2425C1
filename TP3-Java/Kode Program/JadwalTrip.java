public class JadwalTrip {
    private String tglMulai;
    private String tglSelesai;
    private String jamBerangkat;

    /*Konstruktor untuk menginisialisasi objek JadwalTrip  */
    public JadwalTrip(String tglMulai, String tglSelesai, String jamBerangkat) {
        this.tglMulai = tglMulai;
        this.tglSelesai = tglSelesai;
        this.jamBerangkat = jamBerangkat;
    }

    /*menampilkan informasi jadwal trip */
    public void tampilkan() {
        System.out.println("Tanggal Mulai: " + tglMulai +
                           ", Tanggal Selesai: " + tglSelesai +
                           ", Jam Berangkat: " + jamBerangkat);
    }
}

