# test case 1
a, b, i, j, x, y = map(float, input().split())
hasil = (a - b) * (i / j) - (x + y)
print(f"{hasil:.3f}")
# test case 2
a1, b1 = map(float, input().split())
i1, j1 = map(float, input().split())
x1, y1 = map(float, input().split())
hasil1 = (a1 - b1) * (i1 / j1) - (x1 + y1)
print(f"{hasil1:.3f}")