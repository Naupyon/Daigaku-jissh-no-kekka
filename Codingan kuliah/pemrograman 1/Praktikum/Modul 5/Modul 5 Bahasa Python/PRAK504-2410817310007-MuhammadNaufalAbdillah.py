def reverse (num):
    reversed_num = 0
    while num != 0:
        remainder = num % 10
        reversed_num = reversed_num * 10 + remainder
        num //= 10
    return reversed_num

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A+B
print(reverse(C))