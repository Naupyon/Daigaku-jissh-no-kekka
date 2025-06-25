ordo=int(input())

awalnama1,namamatriks1=input().split()
matrikspertama=[]
for i in range(ordo):
    baris=list(map(int,input().split()))
    matrikspertama.append(baris)

awalnama2,namamatriks2=input().split()
matrikskedua=[]
for i in range(ordo):
    baris2=list(map(int,input().split()))
    matrikskedua.append(baris2)

hasil= [[0] * ordo for _ in range(ordo)]

for i in range(ordo): 
    for j in range(ordo):
        for k in range(ordo):
            hasil[i][j]+=matrikspertama[i][k]*matrikskedua[k][j]

print(f"Matriks {namamatriks1}X{namamatriks2}")
for baris in hasil:
        print(" ".join(map(str, baris)))