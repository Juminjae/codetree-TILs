def sequence(n):
    if n == 1:
        return 1
    elif n == 2:
        return 2
    index = max(1, 3 // n)
    return sequence(index) + sequence(n - 1)

N = int(input())
print(sequence(N))