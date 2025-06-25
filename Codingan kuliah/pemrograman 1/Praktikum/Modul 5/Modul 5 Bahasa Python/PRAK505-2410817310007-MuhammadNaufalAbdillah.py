def Biodata (Tahun_lahir, Namaku, Asal):
    Tahun_sekarang = 2020
    Umur = Tahun_sekarang - Tahun_lahir
    print (f"perkenalkan Nama Saya : {Namaku}")
    print(f"Umur Saya : {Umur}")
    print(f"Saya adalah angaktan : {Tahun_sekarang}")
    print(f"Asal saya dari : {Asal}")

Tahun_lahir = int(input())
Namaku = input()
Asal = input()
Biodata(Tahun_lahir, Namaku, Asal)