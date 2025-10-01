import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        // Jadwal trip
        JadwalTrip jadwal1 = new JadwalTrip("2025-10-01", "2025-10-03", "07:00");
        JadwalTrip jadwal2 = new JadwalTrip("2025-10-03", "2025-10-12", "08:00");
        JadwalTrip jadwal3 = new JadwalTrip("2025-11-04", "2025-11-10", "08:30");

        // Objek trip
        TripAlam trip1 = new TripAlam("T001", "Pendakian Gunung", 750000, "Gunung Gede", jadwal1, "Hiking", "Menengah");
        TripKuliner trip2 = new TripKuliner("T002", "Jelajah Kuliner Bandung", 600000, "Bandung", jadwal2,
                Arrays.asList("Batagor", "Sate Maranggi", "Nasi Tutug Oncom"),
                Arrays.asList("Restoran A", "Restoran B", "Warung Sunda"));
        TripSejarah trip3 = new TripSejarah("T003", "Wisata Sejarah Jakarta", 500000, "Jakarta Kota", jadwal3,
                Arrays.asList("Museum Fatahillah", "Monas", "Kota Tua"), "Pak Andi");

        // Tambah peserta awal
        Peserta peserta1 = new Peserta("1234567890", "Ali", 25, "08123456789");
        Peserta peserta2 = new Peserta("0987654321", "Budi", 30, "08987654321");
        Peserta peserta3 = new Peserta("8765432109", "Imut", 20, "08777688981");

        trip1.tambahPeserta(peserta1);
        trip2.tambahPeserta(peserta2);
        trip3.tambahPeserta(peserta3);

        System.out.println("\n========= DATA TRIP SEBELUM PENAMBAHAN =========");

        System.out.println("\n=== DATA TRIP ALAM ===");
        trip1.tampilkanData();

        System.out.println("\n=== DATA TRIP KULINER ===");
        trip2.tampilkanData();

        System.out.println("\n=== DATA TRIP SEJARAH ===");
        trip3.tampilkanData();

        // Tambah peserta baru
        Peserta peserta4 = new Peserta("111122223333", "Citra", 28, "08111222333");
        trip1.tambahPeserta(peserta4);
        trip2.tambahPeserta(peserta4);
        trip3.tambahPeserta(peserta4);

        System.out.println("\n========= DATA TRIP SESUDAH PENAMBAHAN =========");

        System.out.println("\n=== DATA TRIP ALAM ===");
        trip1.tampilkanData();

        System.out.println("\n=== DATA TRIP KULINER ===");
        trip2.tampilkanData();

        System.out.println("\n=== DATA TRIP SEJARAH ===");
        trip3.tampilkanData();
    }
}

