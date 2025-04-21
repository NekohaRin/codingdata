import math

# Fungsi untuk menghitung volume tabung
def hitung_volume_tabung(jari_jari, tinggi):
    volume = math.pi * jari_jari**2 * tinggi
    return volume

# Input dari pengguna
jari_jari = float(input("Masukkan jari-jari alas tabung (dalam satuan cm): "))
tinggi = float(input("Masukkan tinggi tabung (dalam satuan cm): "))

# Menghitung volume
volume = hitung_volume_tabung(jari_jari, tinggi)

# Menampilkan hasil
print(f"Volume tabung adalah {volume:.2f} cm³")
