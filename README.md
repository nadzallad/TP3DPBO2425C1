//Janji

Saya Nadzalla Diva Asmara Sutedja dengan Nim 2408095 mengerjakan TP3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak akan melakukan kecurangan seperti yang telah di spesifikasikan

//Diagram

<img width="882" height="482" alt="image" src="https://github.com/user-attachments/assets/fb648a0c-1de3-4d71-9ca6-61178c407592" />

//Penjelasan Desain dan Atribut 
1. Class trip ini menjadi induk (inharitance) dari class Trip Alam, Trip Sejarah dan Trip Kuliner dikarenakan adanya kesamaan kebutuhan atribut. Pada Class ini memiliki atribut Trip_Id, Nama_Trip , Harga, Destinasi_Utama, Daftar_Peserta, dan Jadwal. Adanya Atribut Jadwal pada class ini menjadikan class ini harus memiliki hubungan dengan class Jadwal Trip untuk dapat lebih jelas mendapatkan data/informasi waktu. Class ini juga memiliki atribit Daftar Peserta sehingga berhubungan aggression dengan class peserta untuk menampilkan daftar peserta pada class Trip.
2. Class Jadwal Trip, Clas ini berfungsi untuk menampilkan mengnai waktu dalam sebuah trip sehingga memiliki atribut Tanggal_Berangkat, Tanggal Pulang, Serta Waktu_Kumpul Peserta. Class ini juga memilki hubungan dengan clasa trip seperti yang sudah dijelaskan pada poin 1.
3. Class Peserta, class ini memilki data mengenai orang yang akan mengikuti trip dengan atribut No_KTP, Nama, dan Kontak. Class ini juga memiliki hubungan dengan class trip seperti yang sudah dijelaskan pada poin 1.
4. Class Trip Alam, class ini bertujuan untuk menyimpna informasi mengenai kegiatan outdoor  di alam seperti mendaki gunung, snorkling atau aktivitas alam lainnya sehingga dibutuhkan atribut Aktivitas_Outdoor, dan Tingkat_Kesulitan sebagai informasi umum yang perlu diketahui. Memiliki hubungan dengan kelas trip seperti pada poin 1.
5. Class Trip Sejarah, Digunakan untuk menyimpan informasi mengenai wisata sejarah sehingga diperlukan menganai daftar tempat bersejarah serta pemandu yang paham mengenai tempat tersebut oleh karena itu atributnya yaitu Daftar_tempat_Bersejarah dan Daftar_Pemandu. Memiliki hububgan ihatitance dengan clasa trip seperti dijelaskan pada poin 1.
6. Class Trip Kuliner, Terdiri dari atribut Daftar Makanan dan Daftar restoran dikarenakan untuk membuat trip tersebut diperlukan daftar daftar rekomendasi restoran dari destinasi utama serta makanan rekomendasi aa yang pelru dipesannnya. Memiliki hubunhan iharitance dengan clasa trip seperti pada poin 1.

//Method 

Dalam program jasa trip yang diimplementasikan dalam bahasa C++, Java, dan Python, terdapat sejumlah method utama yang memiliki fungsi serupa dengan perbedaan sintaks sesuai bahasa masing-masing. konstruktor sebagai method khusus untuk inisialisasi objek. Masing-masing kelas seperti Trip, JadwalTrip, dan Peserta, serta kelas turunan seperti TripAlam, TripKuliner, dan TripSejarah, memiliki konstruktor yang bertugas menginisialisasi atribut saat objek dibuat. Method tampilkan_data() di C++ dan Java (serta tampilkan_data() atau tampilkan_data(self) di Python) merupakan method utama yang bertugas menampilkan seluruh informasi sebuah trip, termasuk detail umum seperti ID, nama, harga, lokasi, serta daftar peserta dan jadwal. Method ini didefinisikan dalam kelas induk (Trip) dan dioverride oleh kelas-kelas turunan seperti TripAlam, TripKuliner, dan TripSejarah untuk menambahkan informasi khusus, seperti aktivitas, tingkat kesulitan, makanan khas, tempat sejarah, atau nama pemandu. Method tambah_peserta() (atau tambahPeserta() di Java, tambah_peserta(self, peserta) di Python) digunakan untuk menambahkan peserta ke dalam daftar peserta trip. Setiap kelas JadwalTrip memiliki method tampilkan() yang bertugas menampilkan tanggal dan jam keberangkatan, dan kelas Peserta juga memiliki method tampilkan() untuk menampilkan informasi personal peserta seperti nama, nomor identitas, umur, dan kontak. Ketiga bahasa memanfaatkan pemanggilan method secara berantai, di mana method tampilkan_data() akan memanggil method tampilkan() milik objek jadwal dan setiap peserta.  Struktur pewarisan dan overriding method juga serupa di ketiga bahasa, meskipun Python tidak memerlukan deklarasi eksplisit seperti virtual (C++) atau @Override (Java), karena sifat dinamisnya.

//Penjelasan Alur 

1. Mengimpor semua class yabg dibutuhkan dari class yang terpisah kemudian menggunakan #pragma  once untuk mencegah terjadi duplikasi pada saat kompilasi
2. Membuat Object JadwalTrip yang berisi tanggal mulai, tangggal selesai dan waktu keberangkatan.
3. Membuat Object Trip yang menentukan jenis trip yang digunakan yaitu alam, kuliner dan sejarah yang tentunya juga mengisi informasi umum dan menambahkan data jadwal yang sebelumnya dibuat.
4. Menambahkan peserta dari trip dengan no ktp, nama, umur dan kontak kedalam trip yang sudah dibuat sebelumnya
5. menampilkan data yang sebelumnya dimasukan pada setiap trip.
6. Melakukan penambahan peserta kedalam trip yang sebelumnya sudah dibuat kemudian kemabali menampilkan hasilnya

//Dokumentasi

== CPP ==

sebelum : <img width="1353" height="824" alt="Data Sebelum Penambahan png" src="https://github.com/user-attachments/assets/b6eecc44-c6ba-4076-af31-5e8417ce6373" />

Sesudah :<img width="1149" height="866" alt="Data Sesudah Penambahan png" src="https://github.com/user-attachments/assets/e2c35c0e-fb69-406d-bec5-6422b1bed647" />


== python == 

sebelum :<img width="1278" height="711" alt="Data Sebelum penambahan" src="https://github.com/user-attachments/assets/8d44b10d-d3d9-4294-b561-91d45aca6342" />

sesudah :<img width="1168" height="729" alt="Data Sesudah Penambahan" src="https://github.com/user-attachments/assets/546f1b95-e526-4b6b-beea-741504eccdd5" />

== Java == 

sebelum : <img width="1568" height="831" alt="Sebelum Penambahkan Data" src="https://github.com/user-attachments/assets/9458e219-15d7-48ed-98dd-1d7aecbcc7ad" />

Sesudah :  <img width="1399" height="824" alt="Sesudah Penambahkan Data" src="https://github.com/user-attachments/assets/8947b78a-71cd-4f85-a459-bda1ff94a1c2" />





