baris, kolom = map(int, input().split())
bilangan = list(map(int, input().split()))
for i in range (baris):
    print(bilangan[i*kolom:(i+1)*kolom])