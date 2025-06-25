import math
def hitung_nilai(nilai1, nilai2):
    return math.sqrt((nilai2 - nilai1) ** 2)

def mutlak(angka):
    return abs(angka)

a, b, c, d = map(int, input().split())

hasil = hitung_nilai(a, c) + hitung_nilai(b, d)
print(mutlak(int (hasil)))