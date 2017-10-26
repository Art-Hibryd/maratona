#diference between sets
#implementation using sets.
k , n = (int(x) for x in input().split())

a = {int(input()) for x in range(k)}
b = {int(input()) for x in range(n)}
print(len(a^b))
