def maximal(a, b):
    maxim = a
    if b>maxim:
        maxim=b
    return maxim

def minimal(a, b):
    minim = a
    if b<minim:
        minim=b
    return minim

batas = 0
maxim = -100000
minim = 100000
bilangan = int(input())
nilai = list(map(int, input().split()))
while batas < bilangan:
    nilai1 =nilai[batas]
    maxim = maximal(maxim, nilai1)
    minim = minimal(minim, nilai1)
    batas = batas + 1
print(maxim, minim)