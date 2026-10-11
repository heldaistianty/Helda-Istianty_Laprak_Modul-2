# Input nilai a, b, i, j, x, y dalam satu baris dipisah spasi
a, b, i, j, x, y = map(float, input().split())

# Rumus dengan tanda kurung yang benar sesuai test case
hasil = (a - b) * i / j - (x + y)

# Output dengan ketelitian 3 angka di belakang koma
print(f"{hasil:.3f}")