jarijari = float(input())
tinggi = float(input())
volume = 22 / 7 * jarijari**2 * tinggi
luas = 2 * 22 / 7 * jarijari * (jarijari + tinggi)
keliling = 2 * 22 / 7 * jarijari
print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")

jarijari1, tinggi1 = map(float, input().split())
volume1 = 22 / 7 * jarijari1**2 * tinggi1
luas1 = 2 * 22 / 7 * jarijari1 * (jarijari1 + tinggi1)
keliling1 = 2 * 22 / 7 * jarijari1
print(f"Volume = {volume1:.2f}")
print(f"Luas = {luas1:.2f}")
print(f"Keliling = {keliling1:.2f}")