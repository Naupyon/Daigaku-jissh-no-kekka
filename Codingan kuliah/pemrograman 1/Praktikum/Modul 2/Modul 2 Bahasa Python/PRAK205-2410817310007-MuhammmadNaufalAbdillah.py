import math

A, B = map(float, input().split())

alas = math.sqrt(B**2 - A**2)
tinggi = A
keliling = A + B + alas
luas = 0.5 * alas * A

print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")

A1 = float(input())
B1 = float(input())

alas1 = math.sqrt(B1**2 - A1**2)
tinggi1 = A1
keliling1 = A1 + B1 + alas1
luas1 = 0.5 * alas1 * A1

print(f"Alas = {alas1:.0f} cm")
print(f"Tinggi = {tinggi1:.0f} cm")
print(f"Keliling = {keliling1:.0f} cm")
print(f"Luas = {luas1:.0f} cm^2")