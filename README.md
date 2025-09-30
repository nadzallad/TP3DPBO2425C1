//Janji

Saya Nadzalla Diva Asmara Sutedja dengan Nim 2408095 mengerjakan TP3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak akan melakukan kecurangan seperti yang telah di spesifikasikan

//Diagram
<img width="1260" height="619" alt="image" src="https://github.com/user-attachments/assets/fabe1c3c-e7ca-4474-8605-ff821228d142" />

//Penjelasan Desain dan Atribut 
1. Class trip ini menjadi induk (inharitance) dari class Trip Alam, Trip Sejarah dan Trip Kuliner dikarenakan adanya kesamaan kebutuhan atribut. Pada Class ini memiliki atribut Trip_Id, Nama_Trip , Harga, Destinasi_Utama, Daftar_Peserta, dan Jadwal. Adanya Atribut Jadwal pada class ini menjadikan class ini harus memiliki hubungan dengan class Jadwal Trip untuk dapat lebih jelas mendapatkan data/informasi waktu. Class ini juga memiliki atribit Daftar Peserta sehingga berhubungan aggression dengan class peserta untuk menampilkan daftar peserta pada class Trip.
2. Class Jadwal Trip, Clas ini berfungsi untuk menampilkan mengnai waktu dalam sebuah trip sehingga memiliki atribut Tanggal_Berangkat, Tanggal Pulang, Serta Waktu_Kumpul Peserta. Class ini juga memilki hubungan dengan clasa trip seperti yang sudah dijelaskan pada poin 1.
3. Class Peserta, class ini memilki data mengenai orang yang akan mengikuti trip dengan atribut No_KTP, Nama, dan Kontak. Class ini juga memiliki hubungan dengan class trip seperti yang sudah dijelaskan pada poin 1.
4. Class Trip Alam, class ini bertujuan untuk menyimpna informasi mengenai kegiatan outdoor  di alam seperti mendaki gunung, snorkling atau aktivitas alam lainnya sehingga dibutuhkan atribut Aktivitas_Outdoor, dan Tingkat_Kesulitan sebagai informasi umum yang perlu diketahui. Memiliki hubungan dengan kelas trip seperti pada poin 1.
5. Class Trip Sejarah, Digunakan untuk menyimpan informasi mengenai wisata sejarah sehingga diperlukan menganai daftar tempat bersejarah serta pemandu yang paham mengenai tempat tersebut oleh karena itu atributnya yaitu Daftar_tempat_Bersejarah dan Daftar_Pemandu. Memiliki hububgan ihatitance dengan clasa trip seperti dijelaskan pada poin 1.
6. Class Trip Kuliner, Terdiri dari atribut Daftar Makanan dan Daftar restoran dikarenakan untuk membuat trip tersebut diperlukan daftar daftar rekomendasi restoran dari destinasi utama serta makanan rekomendasi aa yang pelru dipesannnya. Memiliki hubunhan iharitance dengan clasa trip seperti pada poin 1.

//Method 

//Penjelasan Alur 

//Dokumentasi

== CPP ==

sebelum : <img width="1353" height="824" alt="Data Sebelum Penambahan png" src="https://github.com/user-attachments/assets/b6eecc44-c6ba-4076-af31-5e8417ce6373" />

Sesudah :<img width="1149" height="866" alt="Data Sesudah Penambahan png" src="https://github.com/user-attachments/assets/e2c35c0e-fb69-406d-bec5-6422b1bed647" />


== python == 

sebelum :<img width="1278" height="711" alt="Data Sebelum penambahan" src="https://github.com/user-attachments/assets/8d44b10d-d3d9-4294-b561-91d45aca6342" />

sesudah :<img width="1168" height="729" alt="Data Sesudah Penambahan" src="https://github.com/user-attachments/assets/546f1b95-e526-4b6b-beea-741504eccdd5" />



