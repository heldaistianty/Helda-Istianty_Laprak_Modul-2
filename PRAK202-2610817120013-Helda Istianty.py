# Input nilai (diubah ke float agar bisa membaca angka desimal)
nilai1 = float(input("Masukkan Nilai Pertama : "))
nilai2 = float(input("Masukkan Nilai Kedua   : "))

# Proses penjumlahan
hasil = nilai1 + nilai2

# Output sesuai format soal (menggunakan :.2f untuk 2 angka di belakang koma)
# Tanda g untuk cetak nilai asli tanpa nol berlebih di tengah kalimat
print(f'Hasil dari penjumlahan nilai pertama "{nilai1:g}" dan nilai kedua "{nilai2:g}" adalah "{hasil:.2f}"')