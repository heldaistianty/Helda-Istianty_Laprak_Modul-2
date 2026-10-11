# Input jari-jari (r) dan tinggi (t) tabung
try:
    r, t = map(float, input().split())
except ValueError:
    r = float(input())
    t = float(input())

# Menggunakan phi = 22/7 sesuai standar modul praktikum
phi = 22.0 / 7.0

volume = phi * (r**2) * t
luas = 2 * phi * r * (r + t)
keliling = 2 * phi * r

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")