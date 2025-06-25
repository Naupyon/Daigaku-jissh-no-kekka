while True:
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    pilihan= int(input("Masukan pilihan : "))

    if pilihan == 5:
        print("Terimakasih, telah mengunakan Kalkulator MUHAMMAD NAUFAL ABDILLAH")
        break
    elif pilihan >= 1  and pilihan <= 5 :

        nilai_1=float(input("Masukan nilai kesatu :"))
        nilai_2=float(input("Masukan nilai kedua :"))
        
        if pilihan == 1:
            hasil=nilai_1+nilai_2
            print(f"Hasil Perjumlahan antara {nilai_1:.2f} dengang {nilai_2:.2f} adalah {hasil:.2f}")
            print("")
        elif pilihan == 2:
            hasil=nilai_1-nilai_2
            print(f"Hasil Pengurangan antara {nilai_1:.2f} dengang {nilai_2:.2f} adalah {hasil:.2f}")
            print("")
        elif pilihan == 3:
             hasil=nilai_1*nilai_2
             print(f"Hasil Perkalian antara {nilai_1:.2f} dengang {nilai_2:.2f} adalah {hasil:.2f}")
             print("")
        elif pilihan == 4:
            hasil=nilai_1/nilai_2
            print(f"Hasil Pembagian antara {nilai_1:.2f} dengang {nilai_2:.2f} adalah {hasil:.2f}")
            print("")
        else:
            print("Input anda salah, silahkan coba lagi")
            print("")
            continue