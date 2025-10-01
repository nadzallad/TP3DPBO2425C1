public class Peserta {
    private String noKtp;
    private String nama;
    private int umur;
    private String kontak;

    /*onstruktor untuk menginisialisasi objek Peserta */
    public Peserta(String noKtp, String nama, int umur, String kontak) {
        this.noKtp = noKtp;
        this.nama = nama;
        this.umur = umur;
        this.kontak = kontak;
    }
    
    /* Menampilkan informasi peserta */
    public void tampilkan() {
        System.out.println("  - " + nama + " (KTP: " + noKtp + ", Umur: " + umur + ", Kontak: " + kontak + ")");
    }
}
