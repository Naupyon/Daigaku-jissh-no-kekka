baris1,baris2=map(int,input().split())
total=0
for i in range(1,baris1 +1):
    hasilbaris=0

    for j in range(i,0, -1):
        hasilbaris+=j*baris2
        print(f"({j}*{baris2})",end="")
        if j>1 :
            print("+",end="")

    print(f"={hasilbaris}")
    total+=hasilbaris

print(total)