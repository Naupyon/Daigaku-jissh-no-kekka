kolom = int(input())
isi = []
zetsu = list(map(int, input().split()))
for i in range (kolom):
    print((i+1)*zetsu[i], end=' ')