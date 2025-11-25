# responsi1internetofthings
Deskripsi Proyek

Proyek ini menggunakan WeMos D1 (ESP8266) untuk membaca dua jenis sensor, yaitu sensor suhu/kelembapan DHT22 dan sensor api (flame sensor) dengan output digital. Data yang terbaca ditampilkan melalui Serial Monitor, dan WeMos secara otomatis terhubung ke jaringan WiFi.
Proyek ini dapat digunakan sebagai sistem monitoring lingkungan dan pendeteksi dini potensi kebakaran berbasis IoT.

Fitur Utama
Pembacaan suhu dan kelembapan dengan sensor DHT22
Deteksi keberadaan api menggunakan flame sensor (pin digital)
Koneksi otomatis ke jaringan WiFi
Tampilan data real-time melalui Serial Monitor

Perangkat Yang Digunakan
WeMos D1 / WeMos D1 mini (ESP8266)
Sensor DHT22
Flame Sensor (DO)
Kabel jumper
Kabel USB

Rangkaian (Wiring)
DHT22
Pin + ke 5V
Pin - ke GND
Pin OUT ke D4

Flame Sensor (DO)
VCC ke 5V
GND ke GND
DO ke D5

Penjelasan Komponen
Sensor A (DHT22)
Digunakan untuk mengukur suhu dan kelembapan udara, kemudian menghasilkan data digital untuk diproses oleh mikrokontroler.
Sensor B (Flame Sensor)
Digunakan untuk mendeteksi api melalui cahaya inframerah. Sensor memberikan sinyal digital LOW ketika api terdeteksi.
Mikrokontroler (WeMos D1)
Berfungsi sebagai pengolah data sensor, pengendali logika sistem, serta penghubung perangkat ke jaringan WiFi.
