P=float(input("masukan NIlai Pertama :"))
K=float(input("Masukan Nilai kedua :"))
hasil=P+K
if P.is_integer():
    print(f"Hasil dari penjumlahan nilai pertama \"{int(P)}\" dan nilai kedua \"{K:.1f}\" adalah \"{hasil:.2f}\" ")
else:
    print(f"Hasil dari penjumlahan nilai pertama \"{P:.2f}\" dan nilai kedua \"{K:.1f}\" adalah \"{hasil:.2f}\" ")