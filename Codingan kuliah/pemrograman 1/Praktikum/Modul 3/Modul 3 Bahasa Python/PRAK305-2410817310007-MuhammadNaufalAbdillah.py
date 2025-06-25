Total_detik = int(input("Masukan detik: "))
hari = Total_detik//86400
Total_detik%= 86400
jam = Total_detik// 3600
Total_detik %= 3600
menit = Total_detik//60
Total_detik %= 60

if hari > 0:
    print(f"{hari} hari")
print(f"{jam:02}:{menit:02}:{Total_detik:02}")