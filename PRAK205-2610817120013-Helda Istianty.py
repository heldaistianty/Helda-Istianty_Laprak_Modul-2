import math

# Input A dan B (bisa dalam satu baris atau dipisah enter)
try:
    A, B = map(float, input().split())
except ValueError:
    A = float(input())
    B = float(input())

# Menghitung sisi Alas (C) menggunakan rumus Pythagoras
alas = math.sqrt((B ** 2) - (A ** 2))
tinggi = A
keliling = alas + tinggi + B
luas = 0.5 * alas * tinggi

# Output dengan pembulatan bilangan bulat (integer) sesuai test case
print(f"Alas = {round(alas)} cm")
print(f"Tinggi = {round(tinggi)} cm")
print(f"Keliling = {round(keliling)} cm")
print(f"Luas = {round(luas)} cm^2")